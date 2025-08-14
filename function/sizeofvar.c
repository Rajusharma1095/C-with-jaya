#include <stdio.h>

int main()
{
    int a = 12;
    long int a
    float b = 12.2;   
    double c = 12.0;   

       // best to use size_t
    // printf("size = %zu\n", sizeof(a));  // use %zu for size_t
    printf("%lf", c);

    return 0;
}
