#include <stdio.h>
int main()
{
    int num, sum;
    printf("Nhập số phần tử của mảng n ");
    scanf("%d", &num);
    int arr[num];
    // B2
    printf("B2\n");
    for (int i = 0; i < sizeof(arr) / sizeof(int); i++)
    {
        printf("arr[%d]=", i);
        scanf("%d", &arr[i]);
    }
    // B3
    printf("B3\n");
    for (int i = 0; i < sizeof(arr) / sizeof(int); i++)
    {
        printf("arr[%d]= %d\n", i, arr[i]);
    }
    // B4
    printf("B4\n");
    for (int i = 0; i < sizeof(arr) / sizeof(int); i++)
    {
        if (arr[i] % 2 == 0)
        {
            printf("arr[%d]= %d\n", i, arr[i]);
        }
    }
    // B5
    printf("B5\n");
    for (int i = 0; i < sizeof(arr) / sizeof(int); i++)
    {
        if (arr[i] % 2 != 0)
        {
            sum += arr[i];
        }
    }
    printf("Tổng các phần tử có chỉ số lẻ là %d", sum);
}