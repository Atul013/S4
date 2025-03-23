#include <stdio.h>

int main() {
    int n, processes[20], bt[20], at[20], rt[20];
    int wt[20] = {0}, tat[20], ct[20];
    int total_wt = 0, total_tat = 0, completed = 0, time = 0, min_index;
    int gantt[20], gantt_time[20], gantt_pos = 0; 
    printf("Enter number of processes: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        processes[i] = i + 1;
        printf("Arrival time for P%d: ", processes[i]);
        scanf("%d", &at[i]);
        printf("Burst time for P%d: ", processes[i]);
        scanf("%d", &bt[i]);
        rt[i] = bt[i]; 
    }

    while (completed != n) {
        min_index = -1;
        int min_bt = 99999; 
        for (int i = 0; i < n; i++) {
            if (at[i] <= time && rt[i] > 0 && rt[i] < min_bt) {
                min_bt = rt[i];
                min_index = i;
            }
        }

        if (min_index == -1) {
            time++;
            continue;
        }

        if (gantt_pos == 0 || gantt[gantt_pos - 1] != processes[min_index]) {
            gantt[gantt_pos] = processes[min_index];
            gantt_time[gantt_pos++] = time;
        }

        rt[min_index]--;

        if (rt[min_index] == 0) {
            completed++;
            ct[min_index] = time + 1;
            tat[min_index] = ct[min_index] - at[min_index];
            wt[min_index] = tat[min_index] - bt[min_index];

            total_wt += wt[min_index];
            total_tat += tat[min_index];
        }

        time++;
    }

    gantt_time[gantt_pos] = time; 
    printf("\nProcess\tAT\tBT\tWT\tTAT\tCT\n");
    for (int i = 0; i < n; i++) {
        printf("%d\t%d\t%d\t%d\t%d\t%d\n", processes[i], at[i], bt[i], wt[i], tat[i], ct[i]);
    }
    printf("\nAvg WT: %.2f\nAvg TAT: %.2f\n", (float)total_wt / n, (float)total_tat / n);

    printf("\nGantt Chart:\n");
    for (int i = 0; i < gantt_pos; i++)
        printf("-----");
    printf("\n");
    for (int i = 0; i < gantt_pos; i++)
        printf("| P%d ", gantt[i]);
    printf("|\n");
    for (int i = 0; i < gantt_pos; i++)
        printf("-----");
    printf("\n");
    for (int i = 0; i <= gantt_pos; i++)
        printf("%d   ", gantt_time[i]);
    printf("\n");

    return 0;
}
