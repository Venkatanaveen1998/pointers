#include<stdio.h>
#include "swapheader.h"
int main()
{
	int a=5,b=10,*t1,*t2,temp;
//	t1=&a;
//	t2=&b;
	printf("before swaping a=%d and b=%d \n",a,b);
	swap(&a,&b);
	printf("after swaping a=%d and b=%d \n",a,b);
}
