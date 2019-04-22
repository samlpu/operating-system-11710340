#include<stdio.h>

#include<conio.h>


int main()

{
 int ts,pid[10],need[10],wt[10],tat[10],i,j,n,n1;
 int bt[10],flag[10],ttat=0,twt=0;
 float awt,atat;
 



 printf("\t\t ROUND ROBIN SCHEDULING"); 
printf("Enter the number of Processors \n");
 
scanf("%d",&n);

 n1=n;
 
printf("\n Enter the Timeslice \n");
 
scanf("%d",&ts);
 for(i=1;i<=n;i++)

 {
   printf("\n Enter the process ID %d",i);
   
scanf("%d",&pid[i]);
   
printf("\n Enter the Burst Time for the process");
   
scanf("%d",&bt[i]);
   need[i]=bt[i];
 }
