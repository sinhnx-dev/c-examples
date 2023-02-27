#include <stdio.h>

int main()
{
	char ch;
	printf("\nEnter a lower cased alphabet (a - z) : ");
	scanf("%c", &ch);
	if (ch < 'a' || ch > 'z')
	{
		printf("Character not a lower cased alphabet\n");
	}
	else
	{
		if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
		{
			printf("Character is a vowel\n");
		}
		else if (ch == 'z')
		{
			printf("Last Alphabet (z) was entered\n");
		}
		else
		{
			printf("Character is a consonant\n");
		}
	}
	return 0;
}
