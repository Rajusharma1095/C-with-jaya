#include<stdio.h>
void swapTwoNum (int*a, int*b)
{
    int c;
    c=*a;
    *a=*b;
    *b=c;


}
int main()
{
    int num1=1765,num2=546;
    printf("Num1= %d \n Num2=%d ",num1,num2);
    swapTwoNum(&num1,&num2);
    printf("\n Num1= %d \n Num2=%d ",num1,num2);
    return 0;
}