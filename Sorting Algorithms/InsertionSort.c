#include<stdio.h>

void InsertionSort(int arr[],int n);

int main()
{
    int arr[100],n,i;
    printf("Enter the number of elements to be sorted: ");
    scanf("%d",&n);
    printf("Enter the  elements : ");
    for(i=0;i<n;++i)
    {
        scanf("%d",&arr[i]);
    }

    InsertionSort(arr,n);
    printf("Sorted Array :\n");
    for(i=0;i<n;++i)
    {
        printf("%d  ",arr[i]);
        
    }
}

void InsertionSort(int arr[],int n)
{	
    for (int i = 1; i <n; ++i)
    {
        int val=arr[i],j=i-1;
        while(j>=0 && arr[j]>val)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=val;
    }
}

