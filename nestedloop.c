#include<stdio.h>
int main()
{
    int i=1,j=1 , k=1;
    for (i=1;i<=10;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf(" %d ",k);
            k=k+1;
        }
        printf("\n");
    }
    return 0;
}








