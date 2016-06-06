#include <stdio.h>

int main(void) 
{
	char n;
	scanf("%c",&n);
	(n=='a' || n=='e' || n=='i' || n=='o' || n=='u')?printf("vowel"):printf("consonant");
	return 0;
}
