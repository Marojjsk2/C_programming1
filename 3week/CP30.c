#include <stdio.h>

int main(void)
{
	int total = 0, num = 0;
	do
	{
		printf("Á¤¼ö ÀÔ·Â(0 to quit): ");
		scanf("%d", &num);
		total += num;
	} 
	while (num != 0);
	printf("ÇÕ°è: %d\n", total);
	return 0;
}
