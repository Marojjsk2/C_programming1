#include <stdio.h>
#include <string.h>

int main(void)
{
	char s[] = "Man is immortal, because he has a soul";

	char* t1 = strtok(s, " ");
	char* t2 = strtok(NULL, " ");
	char* t3 = strtok(NULL, " ");
	char* t4 = strtok(NULL, " ");

	return 0;
}