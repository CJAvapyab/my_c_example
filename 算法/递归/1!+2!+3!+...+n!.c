#include <stdio.h>

int func(int);
int func(int a){
    int div=1,count;
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
    scanf("%d",&n);
    printf("%d\n",func(n));

    return 0;
}
