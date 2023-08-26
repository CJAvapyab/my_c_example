~~~json
void c(){
    extern count;
    count++;
}
int count;
int main()
{
    a();
    b();
    printf("%d",count);

    return 0;
}
~~~

