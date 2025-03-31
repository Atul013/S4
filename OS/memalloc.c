#include <stdio.h>

int memoryBlocks[10];
int processSizes[10];
int allocatedBlocks[10];
int totalBlocks, totalProcesses;

void initializeMemory() {
    printf("Enter the number of memory blocks: ");
    scanf("%d", &totalBlocks);

    for (int i = 0; i < totalBlocks; i++) {
        printf("Enter size for block %d: ", i + 1);
        scanf("%d", &memoryBlocks[i]);
    }
}

void initializeProcesses() {
    printf("Enter the number of processes: ");
    scanf("%d", &totalProcesses);

    for (int i = 0; i < totalProcesses; i++) {
        printf("Enter size for process %d: ", i + 1);
        scanf("%d", &processSizes[i]);
    }
}

void clearAllocatedBlocks() {
    for (int i = 0; i < totalBlocks; i++) {
        allocatedBlocks[i] = 0;
    }
}

void firstFit() {
    clearAllocatedBlocks();
    for (int i = 0; i < totalProcesses; i++) {
        int allocated = 0;
        for (int j = 0; j < totalBlocks; j++) {
            if (!allocatedBlocks[j] && memoryBlocks[j] >= processSizes[i]) {
                allocatedBlocks[j] = 1;
                printf("Process %d (size %d) allocated to block %d (size %d)\n", i + 1, processSizes[i], j + 1, memoryBlocks[j]);
                allocated = 1;
                break;
            }
        }
        if (!allocated) {
            printf("Process %d (size %d) could not be allocated\n", i + 1, processSizes[i]);
        }
    }
}

void bestFit() {
    clearAllocatedBlocks();
    for (int i = 0; i < totalProcesses; i++) {
        int bestIndex = -1;
        int bestSize = 10000;
        int allocated = 0;

        for (int j = 0; j < totalBlocks; j++) {
            if (!allocatedBlocks[j] && memoryBlocks[j] >= processSizes[i] && memoryBlocks[j] < bestSize) {
                bestIndex = j;
                bestSize = memoryBlocks[j];
            }
        }

        if (bestIndex != -1) {
            allocatedBlocks[bestIndex] = 1;
            printf("Process %d (size %d) allocated to block %d (size %d)\n", i + 1, processSizes[i], bestIndex + 1, memoryBlocks[bestIndex]);
            allocated = 1;
        }
        if (!allocated) {
            printf("Process %d (size %d) could not be allocated\n", i + 1, processSizes[i]);
        }
    }
}

void worstFit() {
    clearAllocatedBlocks();
    for (int i = 0; i < totalProcesses; i++) {
        int worstIndex = -1;
        int worstSize = -1;
        int allocated = 0;

        for (int j = 0; j < totalBlocks; j++) {
            if (!allocatedBlocks[j] && memoryBlocks[j] >= processSizes[i] && memoryBlocks[j] > worstSize) {
                worstIndex = j;
                worstSize = memoryBlocks[j];
            }
        }

        if (worstIndex != -1) {
            allocatedBlocks[worstIndex] = 1;
            printf("Process %d (size %d) allocated to block %d (size %d)\n", i + 1, processSizes[i], worstIndex + 1, memoryBlocks[worstIndex]);
            allocated = 1;
        }
        if (!allocated) {
            printf("Process %d (size %d) could not be allocated\n", i + 1, processSizes[i]);
        }
    }
}

int main() {
    initializeMemory();
    initializeProcesses();

    int choice;

    while (1) {
        printf("\nMemory Allocation Techniques Menu:\n");
        printf("1. First Fit\n");
        printf("2. Best Fit\n");
        printf("3. Worst Fit\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                firstFit();
                break;
            case 2:
                bestFit();
                break;
            case 3:
                worstFit();
                break;
            case 4:
                return 0;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}