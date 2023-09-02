#include <stdio.h>

char este_cifra(char c)
{
	return c >= '0' && c <= '9';
}

unsigned short cifra(char c)
{
	return c-'0';
}

unsigned putere(char c, unsigned short n)
{
	unsigned x = 1; unsigned short i = 0;
	
	while (i < n) {	x *= cifra(c); i++; }

	return x;	
}

int main()
{
	char b, c;
	unsigned short n, i;
	unsigned x = 0;

	scanf("%c %hu", &b, &n);
	
	for (i = 0; i < n;) {
		scanf("%c", &c);
		
		if (este_cifra(c)) {
			x += cifra(c)*putere(b, n-i-1);

			i++;
		}		
	}

	printf("%u", x);

	return 0;
}

// scor 100
