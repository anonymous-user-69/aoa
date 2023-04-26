#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define MAX 20

void merges(int low, int high);
void merge(int low, int mid, int high);

int a[MAX],b[MAX];
int main()
{
 int no,i,low,high;
 printf("Enter the no. of elements:");
 scanf("%d",&no);
 printf("Enter the elements:");
 for(i=0;i<no; i++)
 {
  scanf("%d",&a[i]);
 }
 low=0;
 high=no-1;
 merges(low,high);
 return 0;
}

void merges(int low,int high)
{
 int mid=0;
 
 if(low<high)
 {
  mid=(low+high)/2;
  merges (low,mid);
  merges (mid+1,high);
  merge(low,mid,high);
 }
}

void merge(int low,int mid,int high)
{
 int i=low,j=mid+1,k=0,h=low;
 while((h<=mid) && (j<=high))
  {
   if(a[h]<=a[j])
   {
    b[i]=a[h];
    h=h+1;
   }
   else
   {
    b[i]=a[j];
    j=j+1;  
   }
   i=i+1;
  }
  if(h>mid)
  {
   for(k=j;k<=high;k++)
   {
    b[i]=a[k];
    i=i+1;
   }
  }
  else
  {
   for(k=h;k<=mid;k++)
   {
    b[i]=a[k];
    i=i+1;
   }
  }
 for(k=low;k<=high;k++)
 {
  a[k]=b[k];
 }
 printf("\n list - ");
 for(k=low;k<=high;k++)
 {
  printf("  %d  ",a[k]);
 }
}
