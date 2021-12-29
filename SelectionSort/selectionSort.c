// C program for the implementation of Selection sort
#include<stdio.h>
void selectionSort(int arr[],int n)
{
	int i,j,temp,min;
	for(i=0;i<n-1;i++)
	{
		min=i;
		for(j=i+1;j<n;j++)
		{
			if(arr[min]>arr[j])
			{
				min=j;
			}
			if(min!=i)
			{
				temp=arr[i];
				arr[i]=arr[min];
				arr[min]=temp;
			}
		}
	}
}
void printArray(int arr[],int n)
{
        int i;
        printf("Sorted array:");
        for(i=0;i<n;i++)
        {
                printf("\t%d",arr[i]);
        }
        printf("\n");
}
int main()
{
        int arr[25],i,n;
        printf("Enter the number of elements:");
        scanf("%d",&n);
        printf("Enter the elements to be sorted:");
        printf("\n");
        for(i=0;i<n;i++)
        {
                scanf("%d",&arr[i]);
        }
        selectionSort(arr,n);
        printArray(arr,n);
        return 0;
        //@sxnkr
}
