#include <stdio.h>
#include <stdbool.h>

int n, m;
int max[10][10];
int allocation[10][10];
int need[10][10];
int available[10];

bool isSafe() {
    int work[10];
    bool finish[10] = {false};
    int safeSequence[10];
    int count = 0;

    for (int i = 0; i < m; i++) {
        work[i] = available[i];
    }

    while (count < n) {
        bool found = false;
        for (int i = 0; i < n; i++) {
            if (!finish[i]) {
                bool canAllocate = true;
                for (int j = 0; j < m; j++) {
                    if (need[i][j] > work[j]) {
                        canAllocate = false;
                        break;
                    }
                }

                if (canAllocate) {
                    safeSequence[count++] = i;

                    for (int j = 0; j < m; j++) {
                        work[j] += allocation[i][j];
                    }

                    finish[i] = true;
                    found = true;
                }
            }
        }

        if (!found) {
            printf("System is in an unsafe state.\n");
            return false;
        }
    }

    printf("System is in a safe state.\n");
    printf("Safe sequence: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", safeSequence[i]);
    }
    printf("\n");
    return true;
}

bool canGrantRequest(int process, int request[]) {
    for (int i = 0; i < m; i++) {
        if (request[i] > need[process][i]) {
            printf("Error: Process %d has exceeded its maximum claim for resource %d.\n", process, i);
            return false;
        }
    }

    for (int i = 0; i < m; i++) {
        if (request[i] > available[i]) {
            printf("Error: Insufficient resources to satisfy the request for process %d.\n", process);
            return false;
        }
    }

    for (int i = 0; i < m; i++) {
        available[i] -= request[i];
        allocation[process][i] += request[i];
        need[process][i] -= request[i];
    }

    if (isSafe()) {
        printf("Request granted. System remains in a safe state.\n");
        return true;
    } else {
        printf("Request denied. System would enter an unsafe state.\n");
        for (int i = 0; i < m; i++) {
            available[i] += request[i];
            allocation[process][i] -= request[i];
            need[process][i] += request[i];
        }
        return false;
    }
}

void handleRequest() {
    int process;
    int request[10];

    printf("Enter the process number making the request: ");
    scanf("%d", &process);

    printf("Enter the request for each resource:\n");
    for (int i = 0; i < m; i++) {
        printf("Resource %d: ", i);
        scanf("%d", &request[i]);
    }

    canGrantRequest(process, request);
}

int main() {
    printf("Enter number of processes: ");
    scanf("%d", &n);
    printf("Enter number of resources: ");
    scanf("%d", &m);

    printf("Enter allocation matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &allocation[i][j]);
        }
    }

    printf("Enter max matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &max[i][j]);
        }
    }

    printf("Enter available resources:\n");
    for (int j = 0; j < m; j++) {
        scanf("%d", &available[j]);
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            need[i][j] = max[i][j] - allocation[i][j];
        }
    }

    isSafe();

    char choice;
    do {
        printf("Do you want to handle a resource request? (y/n): ");
        scanf(" %c", &choice);

        if (choice == 'y' || choice == 'Y') {
            handleRequest();
        }
    } while (choice == 'y' || choice == 'Y');

    return 0;
}
