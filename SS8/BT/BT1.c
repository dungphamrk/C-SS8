#include <stdio.h>
int main()
{
    int num;
    printf("Nhập số phần tử của mảng ");
    scanf("%d", &num);
    int number[num];
    for (int i = 0; i < sizeof(number) / sizeof(int); i++)
    {
        printf("number[%d]=", i);
        scanf("%d", &number[i]);
    }
    int max = number[0], min = number[0];
    for (int i = 0; i < sizeof(number) / sizeof(int); i++)
    {
        if (max < number[i])
        {
            max = number[i];
        }
        if (min > number[i])
        {
            min = number[i];
        }
    }
    printf("max %d\tmin %d", max,min);
}