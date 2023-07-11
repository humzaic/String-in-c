//calculate sentences

#include<stdio.h>
void check_sentence(char a[]);
main()
{
	char str[100];
	fgets(str, 100, stdin);
	check_sentence(str);
}

void check_sentence(char a[])
{
	int sentence = 0;
	for(int i = 0 ; a[i] ; i++)
		if(a[i] == '.')
		sentence++;
	printf("\nSentence: %d", sentence);
}
