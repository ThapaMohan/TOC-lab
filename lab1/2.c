//Program to search the string
#include<string.h>
#include<stdio.h>
int main()
{
    char a[50],b[50];
    int i,j;
    printf("enter the string\n");
    scanf("%s",&a);
    printf("enter the substring to be searched\n");
    scanf("%s",&b);
    i = strstr(a,b);// if string b is in string a then it returns true value i.e i=1 else if string b isnot in a then it returns the false value i.e i=0.
    if(i==0)
    { 
        printf("substring not found\n");
    }
    else
    {
         printf("substring found\n");
    }
}