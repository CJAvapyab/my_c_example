#include <stdio.h>
int main()
{
    int num =520;
    int const cnum = 880;
    const int * const p = &num;
    const int * const *pp = &p;
    //p = &num;
    num = 1024;
    printf("%d\n",*p);
    printf("pp:%p,&p:%p\n",pp,&p);
    printf("*pp:%p,p:%p,&num:%p\n",*pp,p,&num);
    printf("**pp:%d,*p:%d,num:%d\n",**pp,*p,num);
    printf("&num:%p\n",&num);
	return 0;
}

