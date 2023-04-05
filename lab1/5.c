//To find the all sub-string of a given string.
#include<stdio.h>
#include<string.h> 
int main()
{
    int i,j,n,k;
    char a[10]="String";
    i=0;
    n=strlen(a); 
    for(i=0;i<n;i++)
    {
        for(j=i;j<n;j++)
        {
            for(k=i;k<j+1;k++)
            {
                printf("%c",a[k]);
            }
            printf("\n");
        }
    }
}