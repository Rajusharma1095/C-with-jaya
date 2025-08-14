#include <stdio.h>
void pattern7(int n)
{
    int i, j;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf(" %d", i);
        }
        printf("\n");
    }
}
void pattern8(int n)
{
    int i, j;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n - i + 1; j++)
        {
            printf(" %d", j);
        }
        printf("\n");
    }
}
void pattern9(int n)
{
    //     *
    //    ***
    //   *****
    //  *******
    // *********
    int i, j;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n - i; j++)
        {
            printf(" ");
        }
        for (j = 1; j <= i * 2 - 1; j++)
        {
            printf("*");
        }
        for (j = 1; j <= n - i; j++)
        {
            printf(" ");
        }
        printf("\n");
    }
}
void pattern10(int n)
{
    // *********
    //  *******
    //   *****
    //    ***
    //     *
    int i, j;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i - 1; j++)
        {
            printf(" ");
        }
        for (j = 1; j <= (n - i) * 2 + 1; j++)
        {
            printf("*");
        }
        for (j = 1; j <= i - 1; j++)
        {
            printf(" ");
        }
        printf("\n");
    }
}
void pattern11(int n)
{
    pattern9(n);
    pattern10(n);
}
void pattern12(int n)
{
    int i, j;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    for (i = 1; i <= n - 1; i++)
    {
        for (j = 1; j <= n - i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}
void pattern12anway(int n)
{
// *
// **
// ***
// ****
// *****
// ****
// ***
// **
// *
    int i, j;
    for (i = 1; i <= n * 2 - 1; i++)
    {
        int star = i;
        if (i > n)
        {
            star = 2 * n - i;
            for (j = 1; j <= star; j++)
            {
                printf("*");
            }
            printf("\n");
        }
        else
        {
            for (j = 1; j<= i; j++)
            {
                printf("*");
            }
            printf("\n");

        }
        
    }
}
void pattern13 (int n)
{
    int i,j,start=1;
    for (i=0;i<n;i++)
    {
        if (i%2==0){
            start=1;
        }
        else start=0;
        for ( j = 0; j <=i; j++)
        {
            printf("%d",start);
            start=1-start;//start=
        }
        printf("\n");
        
    }
}
void pattern14(int n)
{
    int i,j;
    for ( i = 1; i <=n; i++)
    {
        for(j=1;j<=n;j++)
        {
            printf("%d",j);
        }
        for ( j = 0; i< ; j++)
        {
            /* code */
        }
        
    }
    
}
int main()
{

    int t, i;
    printf("Enter Number of time you wana print");
    scanf("%d", &t);
    for (i = 1; i <= t; i++)
    {
        int n;
        scanf("%d", &n);
        pattern13(n);
    }
    return 0;
}