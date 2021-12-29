/*C program for the implementation of Quick sort*/
#include <stdio.h>

int partion(int arr[],int lb,int ub)
{
	int temp,pivot,start,end;
	pivot=arr[lb];
	start=lb;
	end=ub;
	while(start<end)
	{
		while(arr[start]<=pivot)
		{
			start++;
		}
		while(arr[end]>pivot)
		{
			end--;
		}
		if(start<end)
		{
			temp=arr[start];
			arr[start]=arr[end];
			arr[end]=temp;
		}
	}	
	temp=arr[lb];
	arr[lb]=arr[end];
	arr[end]=temp;
	return end;
}

void quicksort(int arr[],int lb,int ub)
{
    int i,j,pivot,temp,start,end;
    if(lb<ub)
    {
        int loc=partion(arr,lb,ub);
	quicksort(arr,lb,loc-1);
        quicksort(arr,loc+1,ub);
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
        quicksort(arr,0,n-1);
        printArray(arr,n);
        return 0;
        //@sxnkr
}
