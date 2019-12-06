#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	if (n>=65&&n<=90)
		printf("upper case alphabet");
	else if(n>=97&&n<=122)
		printf("lower case alphabet");
	else if(n>=48&&n<=57)
		printf("it is digit");
	else
		printf("It is special character");
	return 0;
}
