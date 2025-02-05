// Calculate sum of array elements using recursion

#include <stdio.h>

int find_sum(int arr[], int n);

int main()
{
    int n, i;
    int arr[100];
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Sum of array elements: %d\n", find_sum(arr, n));
    return 0;
}

int find_sum(int arr[], int n)
{
    if (n <= 0)
    {
        return 0;
    }
    return find_sum(arr, n - 1) + arr[n - 1];
}