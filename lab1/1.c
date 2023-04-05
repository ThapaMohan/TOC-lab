//program for concatenation of two string
#include<stdio.h>
#include<string.h>
int main()
{
    char s1[10] ="abc";
    char s2[10] ="xyz";
    strcat(s1,s2);
    printf("%s",s1);
    return(0);
}