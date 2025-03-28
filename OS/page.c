#include<stdio.h>
int main() {
    int frames, n, str[100], count=0, exist, i, j, m[10], k=0, hits=0;
    float miss_ratio, hit_ratio;
    printf("Enter the length of the reference string : ");
    scanf("%d", &n);
    printf("Enter the reference string : ");
    for (i=0; i<n; i++) {
        scanf("%d", &str[i]);
    }
    printf("Enter the frame size : ");
    scanf("%d", &frames);
    for (i=0; i<frames; i++) 
        m[i] = -1;
    printf("\nThe page replacement process is .. \n");
    for (i=0; i<n; i++) {
        exist = 0;
        for (j=0; j<frames; j++) {
            if (m[j] == str[i]) {
                exist = 1;
                hits++;
                break;
            }
        }
        if (exist == 0) {
            m[k] = str[i];
            k = (k+1) % frames;
            count++;
            for (j=0; j<frames; j++) 
                printf("%d ", m[j]);
            printf("\n");
        }
    }
    miss_ratio = (float)count / n;
    hit_ratio = (float)hits / n;
    printf("Page Faults = %d\n", count);
    printf("Hits = %d\n", hits);
    printf("Miss Ratio = %.2f\n", miss_ratio);
    printf("Hit Ratio = %.2f\n", hit_ratio);
    return 0;
}
