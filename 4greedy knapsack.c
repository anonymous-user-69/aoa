#include<stdio.h>
#include<conio.h>
void knapsack(int n,float wt[20],float profit[20],float capacity)
{
	float x[20],tp=0;
	int i,j,u;
	u=capacity;
	for(i=0;i<n;i++)
	 {
	   x[i]=0.0;
	 }
	 for(i=0;i<n;i++)
	  {
	  	if(wt[i]>u)
	  	 break;
	  	else
	  	{
	  	  x[i]=1.0;
	  	  tp=tp+profit[i];
	  	  u=u-wt[i];
		}
	  }
	if(i<n)
	 x[i]=u/wt[i];
	tp=tp+(x[i]*profit[i]);
	printf("\nMaximum profit is :%f",tp);
}
void main()
{
	float wt[20],profit[20],ratio[20],temp,capacity;
	int i,j,num;
	
	printf("\nEnter no. of objects:\n");
	scanf("%d",&num);
	printf("\nEnter profits of each objects:\n");
	for(i=0;i<num;i++)
	 {
	 	scanf("%f",&profit[i]);
	 }
	printf("\nEnter weights of each objects:\n");
	for(i=0;i<num;i++)
	 {
	 	scanf("%f",&wt[i]);
	 }
	printf("\nEnter capacity of knapsack:\n");
	scanf("%f",&capacity);
	printf("\nRatios of Profit and Weight are:\n");
	for(i=0;i<num;i++)
	 {
	 	ratio[i]=profit[i]/wt[i];
	 	printf("\nRatio1 1= %f",ratio[i]);
	 }
	for(i=0;i<num;i++)
	{
	 for(j=i+1;j<num;j++)
	 {
	  if(ratio[i]<ratio[j])
	   	{
	   	 temp=ratio[j];
	   	 ratio[j]=ratio[i];
	     ratio[i]=temp;
	     
	     temp=profit[j];
	   	 profit[j]=profit[i];
	     profit[i]=temp;
	     
	     temp=wt[j];
	     wt[j]=wt[i];
		 wt[i]=temp;		
		}
	 }
	}
	knapsack(num,wt,profit,capacity);
}
