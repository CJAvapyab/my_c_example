#include <stdio.h>
int main()
{
    int num = 520;
    int numlist[10] = {1,2,3,4,5,6,7,8,9,10};
    printf("%d",numlist[0]);
    int p = &num;
    int **pa = &p;
    int ***pb = &pa;
    int ****pc = &pb;
    printf("%d\n",&num);
    printf("%d\n",p);
    printf("%d\n",*pa);
    printf("%d\n",**pb);
    printf("%d\n",***pc);

	return 0;
}

