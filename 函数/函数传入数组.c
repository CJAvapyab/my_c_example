#include <stdio.h>
#include <stdarg.h>
int sum(int n,...);

int sum(int n,... ){
    int i,sum = 0;
    va_list vap;//va_list定义参数列表

    va_start(vap, n);//传入va_start
    for(i=0;i<n;i++){
        sum += va_arg(vap,int);//获取参数值，用int表示类型
    }
    va_end(vap);//关闭参数列表
    return sum;
}
int main()
{
    int result;
    result = sum(3,2,5,8);
    printf("result = %d\n",result);
	return 0;

}

