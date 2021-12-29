// C program for the implementation of Bubble sort
#include <stdio.h>

void bubbleSort(int arr[],int n)
{
	int i,j,temp;
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(arr[j]>arr[j+1])
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
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
        bubbleSort(arr,n);
        printArray(arr,n);
        return 0;
        //@sxnkr
}

