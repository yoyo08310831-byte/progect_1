#include <stdio.h>
int main() 
{
    for (int i = 1; i <= 10; i++) 
    {
        if (i == 4) 
        {
            printf("寶箱 4 是空的，跳過。\n");
            continue; 
        }

        if (i == 8) 
        {
            printf("找到神秘寶藏！位於寶箱 8。\n");
            break;
        }
        
        printf("開啟寶箱 %d。\n", i);
    }
    
    printf("尋寶結束！\n");

    return 0;
}