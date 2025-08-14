#include<stdio.h>
#include<string.h>
int main (){
    char fullname[30]="Jaya ";
    char lastName[]="Tewari";
    strcat(fullname,lastName);
    printf("%s",fullname);
    return 0;
}