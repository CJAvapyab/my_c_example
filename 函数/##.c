#include<stdio.h>

#define PRINTF(format,...) printf(# format,##__VA_ARGS__)
#define STR1(num1,num2) num1 ## num2
#define STR(s) #s//把它转变为字符串的形式
#define SHOWLIST(...) printf(# __VA_ARGS__)


int main(void)
{
    printf("%s\n",STR(hello));
    printf(STR(Hello     %s num = %d\n),STR(Hi),520);
    printf("%d",STR1(34,78));
    SHOWLIST(Hi!,c,c,456\n);
    PRINTF(hello!\n);

    return 0;
}
