#include <stdio.h>

int Sum (int r ,int s );//prototype

int Sum (int r ,int s ){// defination

    int add =r+s;

    return add;

}

int main() {

  //  int s= Sum(65,4);// call 
  
    printf ("%d",Sum(65,89));

    return 0;
}