#include<stdio.h>
void SelectionSort(int arr[],int n);
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

    SelectionSort(arr,n);
    printf("Sorted Array :\n");
    for(i=0;i<n;++i)
    {
        printf("%d  ",arr[i]);
        
    }
}
void SelectionSort(int arr[],int n)
{	
    // i indicates index of first element of unsorted array
    // min indicates index of minmimum element in unsorted array
	int temp=0,min=0;
    for (int i = 0; i < n-1; i++) 
    {
        min=i;
        for (int j = i+1; j < n; j++)
        {   
            //finding index of smallest element in unsorted array
            if (arr[j]<arr[min])
            {   
                min=j;
                
            }
            //swapping first element of unsorted array with minimum element
            temp=arr[i];
            arr[i]=arr[min];
            arr[min]=temp;
            
        }
    }

}

