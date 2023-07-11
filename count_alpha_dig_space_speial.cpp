#include<stdio.h>
void check_space_alphas_digits_special(char a[]);
main()
{
	char str[50];
	fgets(str, 50, stdin);
	check_space_alphas_digits_special(str);
}

void check_space_alphas_digits_special(char a[])
{
	int alpha = 0, dig = 0, space = 0, special = 0;
	for(int i = 0 ; a[i] ; i++)
	{
		if(a[i] == ' ')
		space++;
		else if(a[i] >= 'a' && a[i] <= 'z' || a[i] >= 'A' && a[i] <= 'Z')
		alpha++;
		else if(a[i] >= '0' && a[i] <= '9')
		dig++;
		else
		special++;
	}
	printf("\nAlpha: %d", alpha);
	printf("\ndig: %d", dig);
	printf("\nspace: %d", space);
	printf("\nspecial: %d", special);
}
