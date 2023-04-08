#include<stdio.h>
int sum(int[],int);
int main()
{
    int n,i;
    printf("Enter the number of element :\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements\n");

    for ( i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Sum In Function: %d\n", sum(arr, n));
    printf("Sum In Main: %d\n", sum(arr, n));
    return 0;
    
   

}
int sum(int arr[],int n)
{
    int i;
    int sum = 0;
    for ( i = 0; i < n; i++)
    {
        sum = sum+arr[i];
    }
    return sum;
    
}