#include <stdio.h>
int main()
{
    float a;
    float b;
    float c;
    printf("請輸入三角形的底(cm):");
    scanf("%f",&a);
    printf("請輸入三角形的高(cm):");
    scanf("%f",&b);
    printf("三角形面積為:%.2f",c=a*b/2);
    return 0;
}