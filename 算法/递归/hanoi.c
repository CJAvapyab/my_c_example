#include <stdio.h>
void func(int n,char x,char y,char z);
int count=1;
void func(int n,char x,char y,char z){
    if(n == 1)
    {
        printf("第%d步：%c --> %c\n",count++,x,z);
    }
    else
    {
            func(n-1,x,z,y);
            printf("第%d步：%c --> %c\n",count++,x,z);
            func(n-1,y,x,z);
    }
}


int main(void)
{
    int n;
    printf("请输入汉诺塔的层数：");
    scanf("%d",&n);
    func(n,'X','Y','Z');

    return 0;
}
