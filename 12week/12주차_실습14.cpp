#include <stdio.h>
#define SEED 17

int MULT = 25173;
int INC = 13849;
int MOD = 65536;

static unsigned int seed = SEED;

unsigned random_i(void)
{
	seed = (MULT * seed + INC) % MOD;
	return seed;
}

double random_f(void)
{
	seed = (MULT * seed + INC) % MOD;
	return seed / (double)MOD;
}

extern unsigned random_i(void);
extern double random_f(void);
extern int MOD;

int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		printf("%u ", random_i() % 101);
	}
	printf("\n");

	return 0;
}
