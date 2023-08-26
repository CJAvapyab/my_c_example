#include <stdio.h>
long func(int);
long func(int a){

    long result;

    if(a>0)
    {
        result = a*func(a - 1);
    }
    else
    {
        result = 1;
    }
    return result;
}


int main(void)
{
    int n;
    printf("请输入一个正整数:");
    scanf("%d",&n);
    printf("%d的阶乘是%d.\n",n,func(n));

    return 0;
}
