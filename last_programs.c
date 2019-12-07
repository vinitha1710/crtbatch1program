#include<stdio.h>
int main()
{
	int i;
	scanf("%d",&i);
	for(i=1;i<=10;i++)
	{
	    if(i==5)
	    break;
	    printf("%d ",i);
	}
	return 0;
}



#include<stdio.h>
int main()
{
	int i;
	scanf("%d",&i);
	for(i=1;i<=10;i++)
	{
	    if(i==5)
	    continue;
	    printf("%d ",i);
	}
	return 0;
}



// for loop ending with ';'
#include<stdio.h>
int main()
{
	int i;
	for(i=1;i<=10;i++);
	printf("%d ",i);
	return 0;
}


// for loop with two ';'
#include<stdio.h>
#include<math.h>
int main()
{
	int i=1;
	for(;;)
	printf("%d ",i);
	return 0;
}


// to get 1 to 10 numbers with for loop consisting of two ';'
#include<stdio.h>
#include<math.h>
int main()
{
	int i=1;
	for(;;)
	{
	    if(i==11)
	    break;
	    printf("%d ",i);
	    i++;
	}

	return 0;
}
