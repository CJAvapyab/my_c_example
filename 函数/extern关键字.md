~~~
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
