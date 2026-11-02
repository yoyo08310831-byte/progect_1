#include <stdio.h>

int main() 
{
    int password;
    printf("請輸入密碼 (輸入-1退出) : ");
    scanf("%d", &password);

    while (password != 1234 && password != -1) 
    {
        printf("密碼錯誤，請重新輸入 (輸入-1退出) : ");
        scanf("%d", &password);
    }
    if (password == 1234)
    {
        printf("登入成功\n");
    } 
    else if (password == -1) 
    {
        printf("已退出程式\n");
    }

    return 0;
}