#include <stdio.h>

int main(void)
{
	int num1 = 15;
	int num2 = 20;
	int num3 = num1 & num2;
	printf("AND 연산의 결과: %d \n", num3);
	return 0;
}

int main1(void)
{
	int num1 = 15;
	int num2 = 20;
	int num3 = num1 | num2;
	printf("OR 연산의 결과: %d \n", num3);
	return 0;
}

int main2(void)
{
	int num1 = 15;
	int num2 = 20;
	int num3 = num1 ^ num2;
	printf("XOR 연산의 결과: %d \n", num3);
	return 0;
}

int main3(void)
{
	int num1 = 15;
	int num2 = ~num2;
	printf("NOT 연산의 결과: %d \n", num2);
	return 0;
}

int main4(void)
{
	int num = 15;

	int result1 = num << 1;
	int result2 = num << 2;
	int result3 = num << 3;

	printf("1칸 이동 결과: %d \n", result1);
	printf("2칸 이동 결과: %d \n", result2);
	printf("3칸 이동 결과: %d \n", result3);
	return 0;
}

int main5(void)
{
	int num = -16;
	printf("2칸 오른쪽 이동의 결과: %d \n", num >> 2);
	printf("3칸 오른쪽 이동의 결과: %d \n", num >> 3);
	return 0;
}





