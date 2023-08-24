#include <stdio.h>
#include <string.h>
void swap(int* x,int *y);

void swap(int *x,int *y){
    int temp;
    printf("In swap ,x = %d,y = %d\n",*x,*y);

    temp = *x;
    *x=*y;
    *y = temp;
    printf("In swap ,x = %d,y = %d\n",*x,*y);

}
int main()
{
    int x=3,y=5;
    printf("In main ,x = %d,y = %d\n",x,y);

    swap(&x,&y);
    printf("In main ,x = %d,y = %d\n",x,y);

	return 0;

}

