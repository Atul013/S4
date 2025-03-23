#include <stdio.h>

int main() {
    int n, processes[20], bt[20], wt[20] = {0}, tat[20], ct[20], total_wt = 0, total_tat = 0;
    printf("Enter number of processes: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        processes[i] = i + 1;
        printf("Burst time for P%d: ", processes[i]);
        scanf("%d", &bt[i]);
    }

    for (int i = 0; i < n - 1; i++) 
        for (int j = 0; j < n - i - 1; j++)
            if (bt[j] > bt[j + 1]) {
                int temp = bt[j]; 
                bt[j] = bt[j + 1]; 
                bt[j + 1] = temp;
                temp = processes[j]; 
                processes[j] = processes[j + 1]; 
                processes[j + 1] = temp;
            }

    ct[0] = bt[0];
    for (int i = 1; i < n; i++) {
        wt[i] = wt[i - 1] + bt[i - 1];
        ct[i] = ct[i - 1] + bt[i];
    }

    printf("\nProcess\tBT\tWT\tTAT\tCT\n");
    for (int i = 0; i < n; i++) {
        tat[i] = bt[i] + wt[i];
        total_wt += wt[i];
        total_tat += tat[i];
        printf("%d\t%d\t%d\t%d\t%d\n", processes[i], bt[i], wt[i], tat[i], ct[i]);
    }
    printf("\nAvg WT: %.2f\nAvg TAT: %.2f\n", (float)total_wt / n, (float)total_tat / n);
    printf("\nGantt Chart:\n");
    for (int i = 0; i < n; i++) 
        printf("-----");
    printf("\n");
    for (int i = 0; i < n; i++) 
        printf("| P%d ", processes[i]);
    printf("|\n");
    for (int i = 0; i < n; i++) 
        printf("-----");
    printf("\n0");
    for (int i = 0; i < n; i++) 
        printf("    %d", ct[i]);
    printf("\n");

    return 0;
}
