// C program for the implementation of Merge sort
#include<stdio.h>
#include<stdlib.h>
void merge(int a[],int low, int mid, int high)
{
	int i,j,k,b[50];
	k=low;
	i=low;
	j=mid+1;
	while((i<=mid) && (j<=high))
	{
		if(a[i]<=a[j])
		{
			b[k]=a[i];
			i++;
		}
		else
		{
			b[k]=a[j];
			j++;
		}
		k++;
	}
	if(i<=mid)
	{
		while(i<=mid)
		{
			b[k]=a[i];
			i++;
			k++;
		}
	}
	else
	{
		while(j<=high)
		{
			b[k]=a[j];
			j++;
			k++;
		}
	 }
	 for(k=low;k<=high;k++)
	 {
		 a[k]=b[k];
	 }
}

void mergesort(int a[],int low,int high)
{
	int mid;
	if(low<high)
	{
		mid=(low+high)/2;
		mergesort(a,low,mid);
		mergesort(a,mid+1,high);
		merge(a,low,mid,high);
	}
}

void printArray(int a[],int n)
{
    int i;
    printf("Sorted array:");
    for(i=0;i<n;i++)
    {
        printf("\t%d",a[i]);
    }
    printf("\n");
}
int main()
{
    int a[25],i,n;
    printf("Enter the number of elements:");
    scanf("%d",&n);
    printf("Enter the elements to be sorted:");
    printf("\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    mergesort(a,0,n-1);
	printArray(a,n);
    return 0;
    //@sxnkr
}
