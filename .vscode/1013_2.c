#include <stdio.h>
int main()
{
    int option;
    printf("\n1.紅茶 30元\n2.綠茶 35元\n3.奶茶 50元\n4.果汁 45元\n請輸入選項:");
    scanf("%d",&option);
    switch (option)
    {
    case 1 :
    printf("1.紅茶 30元");
    break;
    case 2 :
    printf("2.綠茶 35元");
    break;
    case 3 :
    printf("3.奶茶 50元");
    break;
    case 4 :
    printf("4.果汁 45元");
    break;
    default:
    printf("輸入錯誤");
    }
return 0;
}
