#include <stdio.h>
#include <string.h>

int main()
{
    char str[]= "I love fishc!";
    char *target = str;
    int count = 0;

    while (*target++ != '\0'){
        count++;
    }
    printf("�ܹ�%d���ַ���",count);
    return 0;
}
