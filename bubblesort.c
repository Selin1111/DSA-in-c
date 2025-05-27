#include<stdio.h>
int main()
{
    int arr[100];
    int n;
    printf("Enter the number of elements:");
    scanf("%d",&n);
    printf("Enter the elements:");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Array before sorting:");
    for(int i=0;i<n;i++)
    {   
        printf("%d \t",arr[i]);
    }
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
            
        }
    }
    printf("\nArray after sorting:");
    for(int i=0;i<n;i++)
    {
        printf("%d \t",arr[i]);
    }
}