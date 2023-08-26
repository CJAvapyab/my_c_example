extern关键字
---------------
### 正文：


~~~
#include<stdio.h>

void c();
void c(){
    extern count;
    count++;
}
int count;
int main()
{
    
    c();
    printf("%d",count);

    return 0;
}
~~~
用于在定义变量前使用该关键字，告诉编译器你所定义的变量在后面。  
语法：   
**extern  变量;**


