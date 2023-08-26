#include <stdio.h>
int func(int);
int count;
int func(int a){
    int div=1;
    for(int i=1;i<=a;i++){
        div *= i;
    }
    a--;
    count += div;
    if(a <= 0){
        return count;
    }
    func(a);

}


int main()
{
    int n;
    printf("请输入一个正整数n(n>2)：");
    scanf("%d",&n);
    printf("1!+2!+...+%d!=%d\n",n,func(n));

    return 0;
}
