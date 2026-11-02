#include <stdio.h>
int main() 
{
    int amount;
    int total = 0;
    do 
    {
        printf("請輸入提款金額 (輸入0結束) : ");
        scanf("%d", &amount);

        if (amount != 0) 
        {
            total += amount;
        }
    } 
    while (amount != 0); 
    printf("提款總金額：%d 元\n", total);

    return 0;
}