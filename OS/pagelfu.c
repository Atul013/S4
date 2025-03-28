#include<stdio.h>

int main() {
    int frames, n, str[100], count = 0, i, j, m[10], freq[10], min, pos;
    printf("Enter the length of the reference string : ");
    scanf("%d", &n);
    printf("Enter the reference string : ");
    for (i = 0; i < n; i++) {
        scanf("%d", &str[i]);
    }
    printf("Enter the frame size : ");
    scanf("%d", &frames);

    for (i = 0; i < frames; i++) {
        m[i] = -1;
        freq[i] = 0;
    }

    printf("\nThe page replacement process is .. \n");
    for (i = 0; i < n; i++) {
        int exist = 0;
        for (j = 0; j < frames; j++) {
            if (m[j] == str[i]) {
                exist = 1;
                freq[j]++;
                break;
            }
        }

        if (exist == 0) {
            count++;
            if (count <= frames) {
                m[count - 1] = str[i];
                freq[count - 1] = 1;
            } else {
                min = freq[0];
                pos = 0;
                for (j = 1; j < frames; j++) {
                    if (freq[j] < min) {
                        min = freq[j];
                        pos = j;
                    }
                }
                m[pos] = str[i];
                freq[pos] = 1;
            }

            for (j = 0; j < frames; j++) {
                printf("%d ", m[j]);
            }
            printf("\n");
        }
    }

    float miss_ratio = (float)count / n;
    float hit_ratio = 1 - miss_ratio;

    printf("Page Faults = %d\n", count);
    printf("Miss Ratio = %.2f\n", miss_ratio);
    printf("Hit Ratio = %.2f\n", hit_ratio);
    return 0;
}
