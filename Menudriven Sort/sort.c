/* Menudriven implementation of sorting algorithms in C */
#include<stdio.h>
#include<stdlib.h>
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

void merge(int arr[],int low, int mid, int high)
{
	int i,j,k,b[50];
	k=low;
	i=low;
	j=mid+1;
	while((i<=mid) && (j<=high))
	{
		if(arr[i]<=arr[j])
		{
			b[k]=arr[i];
			i++;
		}
		else
		{
			b[k]=arr[j];
			j++;
		}
		k++;
	}
	if(i<=mid)
	{
		while(i<=mid)
		{
			b[k]=arr[i];
			i++;
			k++;
		}
	}
	else
	{
		while(j<=high)
		{
			b[k]=arr[j];
			j++;
			k++;
		}
	 }
	 for(k=low;k<=high;k++)
	 {
		 arr[k]=b[k];
	 }
}

void mergesort(int arr[],int low,int high)
{
	int mid;
	if(low<high)
	{
		mid=(low+high)/2;
		mergesort(arr,low,mid);
		mergesort(arr,mid+1,high);
		merge(arr,low,mid,high);
	}
}

void printArray(int arr[],int n)
{
	int i;
	printf("Sorted array in decresing order:");
	for(i=n-1;i>=0;i--)
	{
		printf("\t%d",arr[i]);
	}
	printf("\n");
}
void main()
{
    int arr[25],n,i,choice;
    printf("Enter the number of elements:\t");
	scanf("%d",&n);
	printf("Enter the elements to be sorted:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
    }
    do
    {
    printf("\nChoose the sorting algorithm you would like to use :- ");
    printf("\n\n1.INSERTION SORT\t 2.SELECTION SORT\t3.QUICK SORT\t4.MERGE SORT \t 5.EXIT ");
    printf("\n\nEnter your choice :- ");
    scanf("%d",&choice);
    switch(choice)
    {
    case 1:
    insertSort(arr,n);
	printArray(arr,n);
    break;
    case 2:
    selectionSort(arr,n);
    printArray(arr,n);
    break;
    case 3:
    quicksort(arr,0,n-1);
    printArray(arr,n);
    break;
    case 4:
    mergesort(arr,0,n-1);
	printArray(arr,n);
    break;
    case 5:
	printf("\nExiting program...\n\n");
	break;
	default:
    printf("\nPlease enter a valid choice(1/2/3/4/5)\n\n");
    }   
    }while(choice!=5);
//@sxnkr
}
