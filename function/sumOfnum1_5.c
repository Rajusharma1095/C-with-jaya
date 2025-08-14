#include<stdio.h>
int main (){
    int num, sum=0, i;
    printf("Enter the Number Up to which you want to sum natural number : ");
    scanf("%d",&num);
    for ( i =1; i <=num; i++)
    {
        sum=sum+i;
    }
    printf("The sum of first %d natural number is %d .",num, sum);
    
    return 0;
}