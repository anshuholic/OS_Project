 #include<stdio.h>
#include<conio.h>
int main()
{
    int Process_no[10],Burst_time[10],Turn_around_time[10],Waiting_time[10];
    int Arrival_time[10],Priority[10],i,j,Number_of_Process,tot=0,flag,temp,Average_waiting_time,Average_turn_around_time;
    printf("Enter Number of Process:");
    scanf("%d",&Number_of_Process);
    printf("\n Enter Arrival time,Enter Burst Time and Priority for each process\n");
    for(i=0;i<Number_of_Process;i++)
    {
        printf("\nP[%d]\n",(i+1));
        printf("Enter Arrival Time:");
        scanf("%d",&Arrival_time[i]);
        printf("Enter Burst Time:");
        scanf("%d",&Burst_time[i]);
        printf("Enter Prior:");
        scanf("%d",&Priority[i]);
        Process_no[i]=i+1;
    }
    
    
    
    
    //output on screen
    
 printf("\nProcess\t       BURSTTIME              WAITINGTIME                TURNAROUNDTIME");
    for(i=0;i<Number_of_Process;i++)
    {
        Turn_around_time[i]=Burst_time[i]+Waiting_time[i];  
        tot+=Turn_around_time[i];
        printf("\nProcess %d \t %d\t \t\t   %d\t\t\t%d",Process_no[i],Burst_time[i],Waiting_time[i],Turn_around_time[i]);
    }
