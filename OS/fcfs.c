#include <stdio.h>

int main() {
    int n;
    printf("Enter number of processes: ");
    scanf("%d", &n);
    int processes[n], bt[n], wt[n], tat[n], ct[n];
    for (int i = 0; i < n; i++) 
        processes[i] = i + 1;  
    printf("Enter burst times for each process:\n");
    for (int i = 0; i < n; i++) {
        printf("Burst time for P%d: ", processes[i]);
        scanf("%d", &bt[i]);
    }

    wt[0] = 0; 
    ct[0] = bt[0];
    for (int i = 1; i < n; i++) {
        wt[i] = bt[i - 1] + wt[i - 1];
        ct[i] = ct[i - 1] + bt[i];
    }

    int total_wt = 0, total_tat = 0;
    printf("\nProcess\tBurst Time\tWaiting Time\tTurnaround Time\tCompletion Time\n");
    for (int i = 0; i < n; i++) {
        tat[i] = bt[i] + wt[i];
        total_wt += wt[i];
        total_tat += tat[i];
        printf("%d\t%d\t\t%d\t\t%d\t\t%d\n", processes[i], bt[i], wt[i], tat[i], ct[i]);
    }

    printf("\nAverage Waiting Time: %.2f", (float)total_wt / n);
    printf("\nAverage Turnaround Time: %.2f\n", (float)total_tat / n);
    printf("\nGantt Chart:\n");
    for (int i = 0; i < n; i++) 
        printf("-----");
    printf("\n");
    for (int i = 0; i < n; i++) 
        printf("| P%d ", processes[i]);
    printf("|\n");
    for (int i = 0; i < n; i++) 
        printf("-----");
    printf("\n");
    printf("0");
    for (int i = 0; i < n; i++) 
        printf("    %d", ct[i]);
    printf("\n");

    return 0;
}
