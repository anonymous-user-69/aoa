#include <stdio.h>

void insertionsort(int array[],int n)
{
	int i,j,key;
	for(i=1;i<n;i++)
	{
	  key = array[i];
	  j = i-1; 
	  while(j>=0 && array[j] > key)
	  {
	  	array[j+1] = array[j];
	  	j = j-1;
	  }
	   array[j+1] = key;	  	
	}	
}

int main()
{    
    int a[10],i,n;
    
    printf("Enter the number of elements:\n");
    scanf("%d",&n);
    printf("Enter the elements:\n");
    for(i=0;i<n;i++)
    {
	  scanf("%d",&a[i]);
    }
    insertionsort(a,n);
    printf("Sorted array is:\n");
    for(i=0;i<n;i++)
    {
    	printf("%d\n",a[i]);
	}
    
}
