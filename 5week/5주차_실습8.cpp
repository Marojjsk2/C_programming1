#include <stdio.h>

int main(void)
{
	int num;
	printf("자연수 입력: ");
	scanf("%d", &num);
	if (num == 1)
	{
		goto One;
	}
	else if (num == 2)
	{
		goto Two;
	}
	else
	{
		goto Other;
	}
One:
	printf("1을 입력하셨습니다! \n");
	goto End;
Two:
	printf("2를 입력하셨습니다! \n");
	goto End;
Other:
	printf("3 혹은 다른 값을 입력하셨군요! \n");
End:
	return 0;
}