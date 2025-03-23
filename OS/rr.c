#include <stdio.h>

int main() {
    int n, tq, time = 0, done = 0;
    printf("Enter number of processes: ");
    scanf("%d", &n);
    int at[n], bt[n], rt[n], ct[n], wt[n], tat[n], q[100];
    int front = 0, rear = 0; 
    printf("Enter time quantum: ");
    scanf("%d", &tq);
    printf("Enter arrival times and burst times for each process:\n");
    for (int i = 0; i < n; i++) {
        printf("Arrival time for P%d: ", i + 1);
        scanf("%d", &at[i]);
        printf("Burst time for P%d: ", i + 1);
        scanf("%d", &bt[i]);
        rt[i] = bt[i];
    }
    printf("\nGantt Chart:\n");
    int processed[100] = {0}; 
    int ganttTimes[100];      
    int ganttIndex = 0;       
    for (int i = 0; i < n; i++) {
        if (at[i] == 0) {
            q[rear++] = i;
            processed[i] = 1;
        }
    }

    while (done != n) {
        if (front == rear) { 
            time++;
            for (int i = 0; i < n; i++)
                if (at[i] == time && !processed[i]) {
                    q[rear++] = i;
                    processed[i] = 1;
                }
            continue;
        }

        int i = q[front++];
        printf("| P%d ", i + 1);
        ganttTimes[ganttIndex++] = time; 
        if (rt[i] <= tq) {
            time += rt[i];
            rt[i] = 0;
            ct[i] = time;
            done++;
        } else {
            time += tq;
            rt[i] -= tq;
        }

        for (int j = 0; j < n; j++) {
            if (at[j] <= time && rt[j] > 0 && !processed[j]) {
                q[rear++] = j;
                processed[j] = 1;
            }
        }

        if (rt[i] > 0)
            q[rear++] = i;
    }
    printf("|\n");

    for (int i = 0; i < ganttIndex; i++)
        printf("%d   ", ganttTimes[i]);
    printf("%d\n", time);

    int total_wt = 0, total_tat = 0;
    printf("\nProcess\tBT\tWT\tTAT\tCT\n");
    for (int i = 0; i < n; i++) {
        tat[i] = ct[i] - at[i];
        wt[i] = tat[i] - bt[i];
        total_wt += wt[i];
        total_tat += tat[i];
        printf("%d\t%d\t%d\t%d\t%d\n", i + 1, bt[i], wt[i], tat[i], ct[i]);
    }
    printf("\nAverage Waiting Time: %.2f\n", (float)total_wt / n);
    printf("Average Turnaround Time: %.2f\n", (float)total_tat / n);

    return 0;
}
