#include<stdio.h>

int main() {
	int frames, n, str[100], count = 0, i, j, m[10], time[10], min, pos;
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
		time[i] = 0;  
	}
	printf("\nThe page replacement process is .. \n");
	for (i = 0; i < n; i++) {
		int exist = 0;
		for (j = 0; j < frames; j++) {
			if (m[j] == str[i]) {
			exist = 1;
			time[j] = i + 1;
			break;
	    		}
		}

		if (exist == 0) {
				count++;
				min = time[0];
		    		pos = 0;
		    	for (j = 1; j < frames; j++) {
				if (time[j] < min) {
			    		min = time[j];
			    		pos = j;
				}
		    	}
		    	m[pos] = str[i];
		    	time[pos] = i + 1;  
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
