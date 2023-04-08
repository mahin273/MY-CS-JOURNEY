#include<stdio.h>
int min(int[],int);
int main()
{
    int i,n;
    printf("Enter The Number of Element :\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter  %d element :\n",n);
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Minimum value = %d",min(arr,n));
    

    return 0;
}
int min(int arr[],int n)
{
 int i;
 int min=arr[0];
 for ( i = 0; i < n; i++)
 {
    if (arr[i]<min)
    {
        min = arr[i];
    }
    
 }
 return min;
 
}