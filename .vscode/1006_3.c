#include <stdio.h>
int main()
{
    int score;
    int attend;
    printf("請輸入成績(分):");
    scanf("%d",&score);
    if (score>=60)
    {
        printf("請輸入出席率(%)");
        scanf("%d",&attend);
        if(attend>=80)
        {
            printf("及格");
        }
        else
        {
            printf("不及格");
        }
    }
    else
    {
        printf("不及格");
    }

    return 0;
}