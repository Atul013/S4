#include <stdio.h>
#include <stdlib.h>

int abs_diff(int a, int b) { return (a > b) ? (a - b) : (b - a); }

void fcfs(int requests[], int n, int head) {
    int total_movement = 0;
    printf("Sequence of movement:\n");
    for (int i = 0; i < n; i++) {
        total_movement += abs_diff(head, requests[i]);
        printf("Move from %d to %d\n", head, requests[i]);
        head = requests[i];
    }
    printf("Total head movement: %d\n", total_movement);
}

void sort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void scan(int requests[], int n, int head, int max_cylinder, int direction) {
    int total_movement = 0, idx = 0;
    sort(requests, n);
    while (idx < n && requests[idx] < head) idx++;
    printf("Sequence of movement:\n");

    if (direction) {
        for (int i = idx; i < n; i++) {
            total_movement += abs_diff(head, requests[i]);
            printf("Move from %d to %d\n", head, requests[i]);
            head = requests[i];
        }
        if (head != max_cylinder) {
            total_movement += abs_diff(head, max_cylinder);
            printf("Move from %d to %d\n", head, max_cylinder);
            head = max_cylinder;
        }
        for (int i = idx - 1; i >= 0; i--) {
            total_movement += abs_diff(head, requests[i]);
            printf("Move from %d to %d\n", head, requests[i]);
            head = requests[i];
        }
    } else {
        for (int i = idx - 1; i >= 0; i--) {
            total_movement += abs_diff(head, requests[i]);
            printf("Move from %d to %d\n", head, requests[i]);
            head = requests[i];
        }
        if (head != 0) {
            total_movement += head;
            printf("Move from %d to 0\n", head);
            head = 0;
        }
        for (int i = idx; i < n; i++) {
            total_movement += abs_diff(head, requests[i]);
            printf("Move from %d to %d\n", head, requests[i]);
            head = requests[i];
        }
    }
    printf("Total head movement: %d\n", total_movement);
}

void cscan(int requests[], int n, int head, int max_cylinder) {
    int total_movement = 0, idx = 0;
    sort(requests, n);
    while (idx < n && requests[idx] < head) idx++;
    printf("Sequence of movement:\n");
    
    for (int i = idx; i < n; i++) {
        total_movement += abs_diff(head, requests[i]);
        printf("Move from %d to %d\n", head, requests[i]);
        head = requests[i];
    }
    if (head != max_cylinder) {
        total_movement += abs_diff(head, max_cylinder);
        printf("Move from %d to %d\n", head, max_cylinder);
        head = max_cylinder;
    }
    total_movement += head;
    printf("Move from %d to 0\n", head);
    head = 0;
    for (int i = 0; i < idx; i++) {
        total_movement += abs_diff(head, requests[i]);
        printf("Move from %d to %d\n", head, requests[i]);
        head = requests[i];
    }
    printf("Total head movement: %d\n", total_movement);
}

int main() {
    int n, head, max_cylinder, direction, choice;
    printf("Enter the number of disk requests: ");
    scanf("%d", &n);
    int requests[n];
    printf("Enter the disk request queue: ");
    for (int i = 0; i < n; i++) scanf("%d", &requests[i]);
    printf("Enter the initial head position: ");
    scanf("%d", &head);
    printf("Enter the maximum cylinder number: ");
    scanf("%d", &max_cylinder);

    while (1) {
        printf("\nMenu:\n1. FCFS\n2. SCAN\n3. C-SCAN\n4. Exit\nEnter choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1: fcfs(requests, n, head); break;
            case 2: printf("Enter direction (1: right, 0: left): ");
                    scanf("%d", &direction);
                    scan(requests, n, head, max_cylinder, direction);
                    break;
            case 3: cscan(requests, n, head, max_cylinder); break;
            case 4: return 0;
            default: printf("Invalid choice! Try again.\n");
        }
    }
}
