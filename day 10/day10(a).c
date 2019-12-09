
// using & operator

#include <stdio.h>

int main()
{
  int x=200,y=200;
  if((x-=200)&&(y-=200))
   printf("x=%d and y=%d",x,y);
  else
   printf("x=%d and y=%d",x,y);

    return 0;
}

// output :  x=0 and y=200


// using | or operator

#include <stdio.h>

int main()
{
  int x=200,y=200;
  if((x-=200)||(y-=200))
   printf("x=%d and y=%d",x,y);
  else
   printf("x=%d and y=%d",x,y);

    return 0;
}

// output : x=0 and y=0



#include <stdio.h>

int main()
{
  int x=200,y=200;
  if((x-=100)||(y-=200))
   printf("x=%d and y=%d",x,y);
  else
   printf("x=%d and y=%d",x,y);

    return 0;
}

//output: x=100 and y=200


#include <stdio.h>

int main()
{
  long long int x=2005675439876;
   printf("x=%lld",x);
   printf("\n &x=%u",&x);

    return 0;
}
 // output: x=2005675439876
//          y= address of x



#include <stdio.h>

int main()
{
   int x=10,y=15,z=5,p;
   p=++x*(y--+--z);
   printf("x=%d y=%d z=%d p=%d",x,y,z,p);
  
    return 0;
}


  
#include <stdio.h>

int main()
{
    int a=7,b=3;
    printf("a&b=%d",a&b);
    printf("\n a|b=%d",a|b);
    printf("\n a^b=%d",a^b);
    return 0;
}

// output: a&b=3  a|b=7  a^b=4

#include <stdio.h>

int main()
{
    int a=10,b=10;
    printf("a<<2=%d",a<<2);
    printf("\n b>>2=%d",b>>2);
    return 0;
}


// goto forword labeling example :

#include <stdio.h>

int main()
{
    printf("\n BTS touring countries:");
    goto a;
    printf("\n LA ");
    printf("\n Japan");
    a:
    printf("\n London");
    return 0;
}

// output: BTS touring countries: London


// goto backward labeling example:

#include <stdio.h>

int main()
{
    printf("\n BTS touring countries");
    goto a;
    printf("\n LA ");
    printf("\n Japan");
    a:
    printf("\n London");
    return 0;
}

// output: 1 2 3 4 5 6 7 8 9 10












 

