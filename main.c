#include <stdio.h>
#include <stdlib.h>
int bubleShort(int arr[], int boyu)
{
    int i,j;
    for (i = 0 ; i < boyu - 1; i++)
    {
        for (j = 0; j < boyu - i - 1; j ++)
        {
            if (arr[j] > arr[j+1])
            {
               int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }

        }
    }
}
int binarySearch(int arr[], int low, int high, int target)
{
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] == target)
            return mid;
        if (arr[mid] < target)
            low = mid + 1;
        else
            high = mid - 1;
    }
        return -1;

}
int main()
{
    int arr[] = {4,8,3,84,47,76,9,24,68};
    int boyu = sizeof(arr) / sizeof(arr[0]);
    bubleShort(arr,boyu);
    for (int i = 0; i < boyu; i++)
        printf("%d ",arr[i]);
    int target;
    printf("\nAradigin sayi giriniz : ");scanf("%d",&target);
    int result = binarySearch(arr, 0, boyu-1, target);
    (result == -1) ? printf("Aradigin sayi bulunmadi") : printf("Aradigin sayi %d. sirada", result+1);
    return 0;
}

