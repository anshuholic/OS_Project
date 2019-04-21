#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{   printf ("\n\n\n\n\n");
	printf ("\t\t\t\t\t\t\t\tHHHHHHHHHHHH      SSSSSSSSSSSSSS \n");
	printf ("\t\t\t\t\t\t\t\tHHH      HHH      SSS             \n");
	printf ("\t\t\t\t\t\t\t\tHHH      HHH      SSS             \n");
	printf ("\t\t\t\t\t\t\t\tHHH      HHH      SSS             \n");
	printf ("\t\t\t\t\t\t\t\tHHH      HHH      SSSSSSSSSSSSSS   \n");
	printf ("\t\t\t\t\t\t\t\tHHH      HHH                 SSS   \n");
	printf ("\t\t\t\t\t\t\t\tHHH      HHH                 SSS   \n");
	printf ("\t\t\t\t\t\t\t\tHHH      HHH                 SSS    \n");
	printf ("\t\t\t\t\t\t\t\tHHHHHHHHHHHH      SSSSSSSSSSSSSS    \n");
	printf ("\n\n");
	char z;
	printf ("\n\n\t\t\t\t\t\t\tWANT TO SOLVE THE PROBLEM OF PRIORITY SCHEDULING????");
	printf ("\n\t\t\t\t\t\t\tENTER Y FOR YES AND N FOR EXIT \n");
	printf ("\n\n\n\n\n");
	scanf ("%c", &z);
	if (z=='Y' || z=='y')
	
	{
	printf ("\n\n");
    int Process_no[10],Burst_time[10],Turn_around_time[10],Waiting_time[10];
    int Arrival_time[10],Priority[10],i,j,Number_of_Process,tot=0,flag,temp,Average_waiting_time,Average_turn_around_time;
    printf("Enter Number of Process:");
    scanf("%d",&Number_of_Process);
    printf("\nEnter Arrival time,Enter Burst Time and Priority for each process\n");
    for(i=0;i<Number_of_Process;i++)
    {
        printf("\nP[%d]\n",(i+1));
        printf("Enter the  Arrival Time of the process:");
        scanf("%d",&Arrival_time[i]);
        printf("Enter the Burst Time of the process:");
        scanf("%d",&Burst_time[i]);
        printf("Enter the Priority of the process:");
        scanf("%d",&Priority[i]);
        Process_no[i]=i+1;
    }
    for(i=0;i<Number_of_Process;i++)
    {
        flag=i;
        for(j=i+1;j<Number_of_Process;j++)
        {
            if(Priority[j]<Priority[flag])
            flag=j;
        }
        temp=Priority[i];
        Priority[i]=Priority[flag];
        Priority[flag]=temp;
        temp=Burst_time[i];
        Burst_time[i]=Burst_time[flag];
        Burst_time[flag]=temp;
        temp=Process_no[i];
        Process_no[i]=Process_no[flag];
        Process_no[flag]=temp;
    }
    Waiting_time[0]=0;  
    for(i=1;i<Number_of_Process;i++)
    {
        Waiting_time[i]=0;
        for(j=0;j<i;j++)
            Waiting_time[i]+=Burst_time[j];
        tot+=Waiting_time[i];
    }
    Average_waiting_time=tot/Number_of_Process;  
    tot=0;
    printf("________________________________________________________________________________");
    printf("\nProcess\t       BURSTTIME              WAITINGTIME          TURNAROUNDTIME");
    for(i=0;i<Number_of_Process;i++)
    {
        Turn_around_time[i]=Burst_time[i]+Waiting_time[i];  
        tot+=Turn_around_time[i];
        printf("\nProcess %d \t %d\t \t\t   %d\t\t\t%d",Process_no[i],Burst_time[i],Waiting_time[i],Turn_around_time[i]);
    }
        printf("\n_______________________________________________________________________________");
    Average_turn_around_time=tot/Number_of_Process;
    printf("\n\nAverage Waiting_Time is= %d",Average_waiting_time);
    printf("\nAverage Turn_Around_Time is= %d",Average_turn_around_time);
    return 0;
}
 
}


