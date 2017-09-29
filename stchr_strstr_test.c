#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
	//strchr returns pointer of given character in given string; 0 if not found
	char s[] = "Hello!";
	char c = 'e';
	
	printf("s: \"%s\"\n", s);
	printf("c: \'%c\'\n", c);
	printf("strchr(s, c): %p\n", strchr(s, c));
	printf("strchr(s, c): %s\n\n", strchr(s, c));

	//strstr returns pointer of the first occurance of a given substring in a given string
	//0 if not found

	char sub[] = "lo!";

	printf("sub: \"%s\"\n", sub);
	printf("strstr(s, sub): %p\n", strstr(s, sub));
	printf("strstr(s, sub): %s\n", strstr(s, sub));

	return 0;
}