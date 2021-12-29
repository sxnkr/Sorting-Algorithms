//C program for the implementation of insersion sort.
#include<stdio.h>
void insertSort(int arr[],int n)
{
	int i,j,min;
	for (i = 1; i < n; i++)
	{
		min = arr[i];
		j = i - 1;
		while (j >= 0 && arr[j] > min)
		{
			arr[j + 1] = arr[j];
			j = j - 1;
		}
		arr[j + 1] = min;
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
	insertSort(arr,n);
	printArray(arr,n);
	return 0;
	//@sxnkr
}
