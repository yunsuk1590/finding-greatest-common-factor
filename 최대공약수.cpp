#include <stdio.h>
int main()
{
	int a,b,c,i;
	scanf("%d %d", &a,&b);
	int max;
	if ((a-b)<0)
	{
		c=a;
	}
	else
	{
		c=b;
	}
	printf("�����: ");
	for(i=1;i<=c;i++)
	{
		if(a%i == 0 && b%i == 0){
			printf("%d ", i);
			max = i;
		}
	}
	printf("\n�ִ�����: %d", max);
}
