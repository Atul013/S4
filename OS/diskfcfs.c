#include<stdio.h>
#include<stdlib.h>

int main() {
    int n, head, total_seek = 0;
    printf("Enter the number of disk requests: ");
    scanf("%d", &n);
    int requests[n];
    printf("Enter the disk request queue: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &requests[i]);
    }
    printf("Enter the initial head position: ");
    scanf("%d", &head);

    printf("\nFCFS Disk Scheduling Sequence:\n");
    printf("%d -> ", head);
    for (int i = 0; i < n; i++) {
        total_seek += abs(requests[i] - head);
        head = requests[i];
        printf("%d", head);
        if (i < n - 1) printf(" -> ");
    }

    printf("\nTotal Seek Time: %d\n", total_seek);
    return 0;
}
