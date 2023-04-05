//To find the sub string of given length on the basis of position and length.
#include <stdio.h> 
#include <string.h> 
int main()
{
    char str[1000], sub[1000];
    int pos, length, c = 0;
    printf("Input a string\n");
    scanf("%s",str);
    printf("Enter the position & length of substring\n"); 
    scanf("%d%d", &pos, &length);
    while (c < length) 
    {
        sub[c] = str[pos+c-1];
        c++;
    }
sub[c] = '\0';
printf("Required substring is \"%s\"\n", sub);
return 0;
}
