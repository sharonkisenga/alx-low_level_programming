#include "main.h"
#include <stdio.h>
/**
 * main - check the code 
 * return: always 0
 */
int main(void)
{       
        char s1[90] = "Hello";
        char s2[] = "world";
        char *ptr;
        
        printf("%s\n", s1);
        printf("%s", s2);
        ptr = _strcat(s1, s2);
        printf("%s", s1);
        printf("%s", s2);
        printf("%s", ptr);
        return (0);
}       

