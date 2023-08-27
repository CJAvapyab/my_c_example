#include <stdio.h>

void quick_sort(int array[],int left,int right);
void quick_sort(int array[],int left,int right)
{
    int i=left,j = right;
    int temp;
    int pivot;

    pivot = array[(left+right)/2];
    while(i<=j)
    {
     //从左到右找到大于等于基准点的元素
     while(array[i]< pivot)
    {
        i++;
    }
     //从右到左找到小于等于基准点的元素
     while(array[j] > pivot)
    {
        j--;
    }
     //如果i <= j,则互换
     if (i <= j)
        {
        temp = array[i];
        array[i] = array[j];
        array[j] = temp;
        i++;
        j--;
        }
    }
    if (left < j)
    {
        quick_sort(array,left,j);
    }
    if(i< right)
    {
        quick_sort(array,i,right);
    }
}
int main(void)
{
    int array[] = {2,6,1,0,7,4,3,9,5,8};
    int i,lenght;

    lenght = sizeof(array)/sizeof(array[0]);
    quick_sort(array,0,lenght - 1);

    printf("排序后的结果是：");
    for(i=0;i <lenght;i++)
    {
        printf("%d ",array[i]);
    }
    putchar('\n');
    return 0;
}


