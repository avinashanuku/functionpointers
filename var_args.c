#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<string.h>

struct st
{
	int *p;
};

int add_fun(struct st v, int n)
{
	int i,sum;
	for(i=0,sum=0;i<n;i++)
		sum = sum + v.p[i];
	return sum;
}

void main()
{
	int (*fp)(struct st ,int);
	struct st v;
	int i,j,n;
	printf("Enter the the no.of elements\n");
	scanf("%d",&n);
	v.p = malloc(sizeof(int)*n);
	printf("Enter the elements\n");
	for(i=0; i<n; i++)
	{
		scanf("%d",&v.p[i]);
	}
	fp = add_fun;
	int res = (*fp)(v,n);
	printf("the result is %d\n",res);
}
