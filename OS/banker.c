#include <stdio.h>

int n, m;
int max[10][10];
int allocation[10][10];
int need[10][10];
int available[10];

int isSafe() {
    int work[10];
    int finish[10] = {0};
    int count = 0;

    for (int i = 0; i < m; i++) {
        work[i] = available[i];
    }

    while (count < n) {
        int found = 0;
        for (int i = 0; i < n; i++) {
            if (!finish[i]) {
                int canAllocate = 1;
                for (int j = 0; j < m; j++) {
                    if (need[i][j] > work[j]) {
                        canAllocate = 0;
                        break;
                    }
                }
                if (canAllocate) {
                    for (int j = 0; j < m; j++) {
                        work[j] += allocation[i][j];
                    }
                    finish[i] = 1;
                    count++;
                    found = 1;
                }
            }
        }
        if (!found) {
            return 0;
        }
    }
    return 1;
}

int canGrantRequest(int process, int request[]) {
    for (int i = 0; i < m; i++) {
        if (request[i] > need[process][i] || request[i] > available[i]) {
            return 0;
        }
    }

    for (int i = 0; i < m; i++) {
        available[i] -= request[i];
        allocation[process][i] += request[i];
        need[process][i] -= request[i];
    }

    if (isSafe()) {
        return 1;
    }

    for (int i = 0; i < m; i++) {
        available[i] += request[i];
        allocation[process][i] -= request[i];
        need[process][i] += request[i];
    }
    return 0;
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

    if (isSafe()) {
        printf("System is in a safe state.\n");
    } else {
        printf("System is in an unsafe state.\n");
    }

    char choice;
    do {
        printf("Handle resource request? (y/n): ");
        scanf(" %c", &choice);

        if (choice == 'y' || choice == 'Y') {
            int process, request[10];

            printf("Enter process number: ");
            scanf("%d", &process);

            printf("Enter resource request:\n");
            for (int i = 0; i < m; i++) {
                scanf("%d", &request[i]);
            }

            if (canGrantRequest(process, request)) {
                printf("Request granted.\n");
            } else {
                printf("Request denied.\n");
            }
        }
    } while (choice == 'y' || choice == 'Y');

    return 0;
}