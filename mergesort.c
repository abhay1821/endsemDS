#include <stdio.h>

void merge_sort(int a[],int b,int c)
{
    if (b < c)
    {
        int d = b+(c-l)/2;

        merge_sort(a, b, d);
        merge_sort(a, d+1, c);
        merge(arr, b, d, c);
    }
}

void merge(int arr[], int l, int b, int c)
{
    int i, j, k;
    int n1 = b - l + 1;
    int n2 =  r - b;

    int L[n1], R[n2];

    for (i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[b + 1+ j];

    i = 0;
    j = 0;
    k = l;
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
}
int main()
{
    int n;
    printf("Enter Size of Array\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter Data of Array\n");
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);
    printf("Sorted Array is\n");
    merge_sort(arr,0,n-1);
    for(int i=0;i<n;i++)
        printf("%d  ",arr[i]);
}
