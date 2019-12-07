#include<stdio.h>
int main()
{
	int n,i,r,num;
	scanf("%d",&n);
	i=0;
	r=0;
	num=n;
	while(n!=0)
	{
		r=n%10;
		i=i+r*r*r;
		n=n/10;
	}
	if(num==i)
	  printf("armstrong");
	else
	printf("not armstrong");
	return 0;
}




//for n digits numbers
#include<stdio.h>
#include<math.h>
int main()
{
	int n,i,r,num,l=0;
	scanf("%d",&n);
	i=0;
	num=n;
	while(n!=0)
	{
	    l++;
	    n=n/10;
	}
	n=num;
	while(n!=0)
	{
		r=n%10;
		i=i+pow(r,l);
		n=n/10;
	}
	if(num==i)
	  printf("armstrong");
	else
	printf("not armstrong");
	return 0;
}
