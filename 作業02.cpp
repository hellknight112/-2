#include <stdio.h>
#include <stdlib.h>

int main() 
{
 int z,x,c;
 printf("請輸入你的出生年份(西元)：");
 scanf("%d",&z);
 printf("請輸入你的出生月分：");
 scanf("%d",&x);
 printf("請輸入你的出生日期：");
 scanf("%d",&c);
 printf("你的出生年月日為：%d年%d月%d日\n",z,x,c);
 system("pause");
 return 0; 
}
