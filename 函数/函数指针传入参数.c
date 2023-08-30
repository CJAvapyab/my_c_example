#include<stdio.h>

#define STR(s) #s//把它转变为字符串的形式
int main(void)
{
    printf("%s\n",STR(hello));
    printf(STR(Hello     %s num = %d\n),STR(Hi),520);
    return 0;
}
