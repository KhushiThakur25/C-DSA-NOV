#include <stdio.h>

// Merge two subarrays L and R into arr
void merge(int arr[], int p, int q, int r)
{
    int n1 = p + q + 1;
    int n2 = r - q;

    int L[n1], R[n2];

    for (int i = 0; i < n1; i++)
    {
        L[i] = arr[p + i];
    }
    for (int i = 0; i < n2; i++)
    {
        R[i] = arr[q + 1 + i];
    }
    int i, j, k;
    i = 0;
    j = 0;
    k = p;

    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
        {
            arr[k] = L[i];
            i++;
        }
        else
        {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < n1)
    {
        arr[k] = L[i];
        i++;
        k++;
    }
    while (j < n2)
    {
        arr[k] = R[j];
        j++;
        k++;
    }
}

// Divide the array into two subarrays, sort and merge them..
void mergeSort(int arr[], int l, int r)
{
    if (l < r)
    {
        int m = l + (r - l) / 2;
        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r);
        // merge the sorted subarrays
        merge(arr, l, m, r);
    }
}
void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
        printf("%d", arr[i]);
    printf("\n");
}
int main()
{
    int arr[] = {6, 5, 12, 10, 9, 1};
    int size = sizeof(arr) / sizeof(arr[0]);
    printf("%d", size);
    mergeSort(arr, 0, size - 1);
    printf("Sorted array: \n");

    printArray(arr, size);
}