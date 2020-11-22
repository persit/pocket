#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    char str[5];
    char str2[]={"123456789909090"};
    strcpy(str,str2);
    printf("%s\n",str);
    return 0;
}