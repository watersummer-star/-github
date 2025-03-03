#include<stdio.h.>
int main()
{
	int x;
	scanf_s("%d", &x);
	if (x >= 90)
		printf("excellent");
	else if (x >= 80)printf("good");
	else if (x >= 60)printf("middle");
	else
		printf("bad");
	return 0;
}