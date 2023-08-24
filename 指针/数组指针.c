#include <stdio.h>

int main()
{
    int a[] = {1,6,4,3,71,38,23,12,19,10};
    int (*p)[10] = &a;
    printf("%d\n",*(*p+2));
    printf("&p:%d\n",&p);
    printf("p:%d\n",p);
    printf("*p:%d\n",*p);
    printf("a:%d\n",a[0]);
    printf("%d\n",*(a+1));
    printf("%d\n",*(*p+1));
    /*int  a[5]={ 1,2,3,4,5 };    //定义一个一维数组 a
int  (*prt)[5];      // 步长为 5 的数组指针，即 prt 指向的数组里有 5 个元素
prt=&a;    // 把数组 a 的地址付给 prt，则 prt 为数组 a 的地址，*prt 表示数组 a 本身
prt[ 0 ];    //表示数组首元素的地址
*prt[ 0 ]；  //表示数组的首元素的值，即为数组 a 的 1
**prt;         //表示数组的首元素的值，即为数组 a 的 1
*prt[ 1 ] ;   //表示指向数组的下一行元素的首元素的值，但是a是一维数组，只有一行，所以指向的地址中的值不确定*/
	return 0;


}

