#include <stdio.h>
#include <string.h>
int main()
{
	char s[100];
	scanf("%s",&s);

	for(int i=0; s[i] != '\0'; i++)
	{
		if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
		{
			s[i] = 'z';
		}
	}
	printf("%s",s);
	return 0;
}
