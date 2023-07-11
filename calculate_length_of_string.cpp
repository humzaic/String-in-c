//calculate length of string

#include <stdio.h>
#include<string.h>
void display_String(char str[]);
void take(char str[]);
int main()
{
    char str[50];
    printf("Enter string: ");
    take(str);             
    display_String(str);     // Passing string to a function.
	int length = strlen(str);
	printf("Length is : %d",length);    
    return 0;
}
void display_String(char str[])
{
    printf("String Output: ");
    puts(str);
}
void take(char str[])
{
	gets(str);
}
