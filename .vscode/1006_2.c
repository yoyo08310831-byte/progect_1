#include <stdio.h>
int main()
{
    int height;
    printf("請輸入身高(公分)");
    scanf("%d",&height);
    if (height>=120)
    {
        printf("可");
    }
    else
    {
            printf("不可");
    }
    return 0;
}