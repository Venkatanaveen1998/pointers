#include<stdio.h>
int *swap(int *a,int *b)
{
	int temp;
       temp=*a;
       *a=*b;
       *b=temp;
	printf("after swaping a=%d b=%d \n",*a,*b);
}


