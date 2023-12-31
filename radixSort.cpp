#include <stdio.h>

int getMax(int arr[], int n)
{
    int max = arr[0];
    for (int i = 1; i < n; i++)
        if (arr[i] > max)
            max = arr[i];
    return max;
}

void countingSort(int arr[], int n, int exp)
{
    const int base = 10;
    int output[n]; // output Array
    int count[base];

    for (int i = 0; i < base; i++)
        count[i] = 0;

    for (int i = 0; i < n; i++)
        count[(arr[i] / exp) % base]++;

    for (int i = 1; i < base; i++)
        count[i] += count[i - 1];

    for (int i = n - 1; i >= 0; i--)
    {
        output[count[(arr[i] / exp) % base] - 1] = arr[i];
        count[(arr[i] / exp) % base]--;
    }

    for (int i = 0; i < n; i++)
    {
        arr[i] = output[i];
    }
}
void radixSort(int arr[], int n)
{
    // Find the max no. of digits..
    int max = getMax(arr, n);

    // counting sort on every digit
    for (int exp = 1; max / exp > 0; exp *= 10)
        countingSort(arr, n, exp);
}
void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}

int main()
{
    int arr[] = {170, 45, 75, 90, 802, 24, 2, 66};
    int n = sizeof(arr) / sizeof(arr[0]);

    radixSort(arr, n);
    printf("Sorted array is:");
    printArray(arr, n);
}