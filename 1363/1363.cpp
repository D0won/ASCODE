#include<stdio.h>

int main(void)
{
	int A, B, C;
	scanf("%d %d", &A, &B);
	scanf("%d", &C);

	if (A < 12)
	{
		printf("Cook start->AM%d:%d \n", A, B);
	}
	else if (A == 12)
	{
		printf("Cook start->PM%d:%d\n", A, B);
	}
	else
	{
		printf("Cook start->PM%d:%d\n", A - 12, B);
	}
	A += C / 60;
	B += C % 60;
	if (B > 59)
	{
		A++;
		B -= 60;
	}
	
	if (A > 23)
	{
		A -= 24;
	}
	
	if (A < 12)
	{
		printf("Cook end->AM%d:%d \n", A, B);
	}
	else if (A == 12)
	{
		printf("Cook end->PM%d:%d\n", A, B);
	}
	else
	{
		printf("Cook end->PM%d:%d\n", A - 12, B);
	}
	return 0;
}