#include <stdio.h>

void print_frames(int frames[], int frame_count) {
    printf("\tCurrent Frames: ");
    for (int i = 0; i < frame_count; i++) {
        if (frames[i] == -1)
            printf("- ");
        else
            printf("%d ", frames[i]);
    }
    printf("\n");
}
void page_replacement(int frame_count, int pages[], int page_count, 
                      void (*replace_page)(int[], int[], int[], int, int)) {
    int frames[frame_count], metadata[frame_count];
    
    for (int i = 0; i < frame_count; i++) {
        frames[i] = -1;
        metadata[i] = 0;
    }

    float page_faults = 0, hits = 0;
    for (int i = 0; i < page_count; i++) {
        int found = 0;
        for (int j = 0; j < frame_count; j++) {
            if (pages[i] == frames[j]) {
                found = 1;
                hits++;
                metadata[j] = i;
                printf("Page %d is already in memory.\n", pages[i]);
                print_frames(frames, frame_count);
                break;
            }
        }
        if (!found) {
            page_faults++;
            replace_page(frames, metadata, pages, frame_count, i);
            printf("Page %d loaded into memory.\n", pages[i]);
            print_frames(frames, frame_count);
        }
    }

    printf("\nTotal Page Faults: %.0f\n", page_faults);
    printf("Total Hits: %.0f\n", hits);
    printf("Miss Ratio: %.2f\n", page_faults / page_count);
    printf("Hit Ratio: %.2f\n", hits / page_count);
}

void fifo_replace(int frames[], int metadata[], int pages[], int frame_count, int current_index) {
    static int fifo_index = 0;
    frames[fifo_index] = pages[current_index];
    fifo_index = (fifo_index + 1) % frame_count;
}
void lru_replace(int frames[], int metadata[], int pages[], int frame_count, int current_index) {
    int lru_index = 0;
    for (int j = 1; j < frame_count; j++) {
        if (metadata[j] < metadata[lru_index]) {
            lru_index = j;
        }
    }

    frames[lru_index] = pages[current_index];
    metadata[lru_index] = current_index;
}

void lfu_replace(int frames[], int metadata[], int pages[], int frame_count, int current_index) {
    int lfu_index = 0;

    for (int j = 1; j < frame_count; j++) {
        if (metadata[j] < metadata[lfu_index]) {
            lfu_index = j;
        }
    }

    frames[lfu_index] = pages[current_index];
    metadata[lfu_index] = 1; 
}

int main() {
    int frame_count, page_count, pages[100];
    int choice;

    printf("Enter the Number of Frames: ");
    scanf("%d", &frame_count);

    printf("Enter the length of reference string: ");
    scanf("%d", &page_count);

    printf("Enter the reference string (space-separated): ");
    for (int i = 0; i < page_count; i++) {
        scanf("%d", &pages[i]);
    }

    while (1) {
        printf("\nMenu:\n");
        printf("1. FIFO Page Replacement\n");
        printf("2. LRU Page Replacement\n");
        printf("3. LFU Page Replacement\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                page_replacement(frame_count, pages, page_count, fifo_replace);
                break;
            case 2:
                page_replacement(frame_count, pages, page_count, lru_replace);
                break;
            case 3:
                page_replacement(frame_count, pages, page_count, lfu_replace);
                break;
            case 4:
                printf("Exiting...\n");
                return 0;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }

    return 0;
}
