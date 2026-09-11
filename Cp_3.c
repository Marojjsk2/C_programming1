//code
#include <stdio.h>
#include <malloc.h>

//data
int a[100];

int func(int tn, char tch)
{
	return tn + tch;
}

int main()
{
	//stack
	int n;
	scanf("%d", &n);
	char ch = "a";

	//heap
	int* b = (int*)malloc(sizeof(int) * n);

	func(n, ch);

	return 0;
}