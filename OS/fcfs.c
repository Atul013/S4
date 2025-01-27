#include <stdio.h>

struct process
{
    char pname[100];
    int at;  
    int bt;  
    int ct;  
    int tt;  
    int wt;  
};

void getprocess(struct process p[100], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("Enter the %d Process Name: ", i + 1);
        scanf("%s", p[i].pname);
        printf("Enter the %d Process Arrival time: ", i + 1);
        scanf("%d", &p[i].at);
        printf("Enter the %d Process Burst time: ", i + 1);
        scanf("%d", &p[i].bt);
    }
}

void sort(struct process p[100], int n)
{
    int i, j;
    struct process key;
    for (i = 1; i < n; i++)
    {
        key = p[i];
        j = i - 1;
        while (j >= 0 && p[j].at > key.at)
        {
            p[j + 1] = p[j];
            j--;
        }
        p[j + 1] = key;
    }
}

void calculateTimes(struct process p[100], int n)
{
    p[0].ct = p[0].at + p[0].bt; 
    p[0].tt = p[0].ct - p[0].at; 
    p[0].wt = p[0].tt - p[0].bt; 

    for (int i = 1; i < n; i++)
    {
        if (p[i].at > p[i - 1].ct)
        {
            p[i].ct = p[i].at + p[i].bt; 
        }
        else
        {
            p[i].ct = p[i - 1].ct + p[i].bt; 
        }
        p[i].tt = p[i].ct - p[i].at; 
        p[i].wt = p[i].tt - p[i].bt; 
    }
}

void displayprocess(struct process p[100], int n)
{
    printf("\nPID\tName\tAT\tBT\tCT\tTT\tWT\n");
    printf("-------------------------------------------------------------\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\t%s\t%d\t%d\t%d\t%d\t%d\n", i + 1, p[i].pname, p[i].at, p[i].bt, p[i].ct, p[i].tt, p[i].wt);
    }
}

int main()
{
    struct process p[100]; 
    int n, i;
    float total_tt=0, total_wt=0;
    printf("Enter the number of processes: ");
    scanf("%d", &n);
    printf("\t Enter the Process Details : \n");
    getprocess(p, n); 
    sort(p, n);       
    calculateTimes(p, n);
    printf("\t Gantt Chart : \n");
    for (i =0; i<n ; i++)
    {
	    printf("| %d ", p[i].ct);
	    }
	    printf("|\n"); 
    displayprocess(p, n); 
    for (i =0; i<n; i++)
    {
    	total_tt+=p[i].tt;
	total_wt+=p[i].wt;
	}
    printf("\nThe average Turnaround Time : %f\n", (total_tt/n));
    printf("The average Waiting Time : %f\n", (total_wt/n));
    return 0;
}
