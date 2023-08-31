#include <stdio.h>
#include <stdlib.h>

struct Date
{
    int year;
    int month;
    int day;
};
struct Book
{
    char title[128];
    char author[40];
    float price;
    struct Date date;
    char publisher[40];
};
void getinput(struct Book* book);
void printbook(struct Book * book);

int main(void)
{
    int n;
    printf("请输入录入的书本数：");
    scanf("%d",&n);
    struct Book * book;
    book = (struct Book *)malloc(sizeof(book)*n);
    if(book==NULL)
    {
        printf("内存分配失败了！\n");
        exit(1);
    }
    for(int i=0;i<n;i++)
    {
        printf("开始录入第%d本书...\n",i+1);
        getinput(&book[i]);
        printbook(&book[i]);
        putchar('\n');
    }
    return 0;
}

void getinput(struct Book* book)
{
    printf("请输入书名：");
    scanf("%s",book->title);
    printf("请输入作者：");
    scanf("%s",book->author);
    printf("请输入售价：");
    scanf("%f",&book->price);
    printf("请输入出版日期：");
    scanf("%d%d%d",&book->date.year,&book->date.month,&book->date.day);
    printf("请输入出版社：");
    scanf("%s",book->publisher);
    printf("\n======数据录入完毕=======\n");
}
void printbook(struct Book * book)
{
    printf("书名：%s\n",book->title);
    printf("作者：%s\n",book->author);
    printf("售价：%.2f\n",book->price);
    printf("出版日期：%d-%d-%d\n",book->date.year,book->date.month,book->date.day);
    printf("出版社：%s\n",book->publisher);
}
