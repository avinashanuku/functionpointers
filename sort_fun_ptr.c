#include<stdio.h>
void sort_fun(int*,int(*p)(int,int));
int ascend(int a,int b)
{
	return a-b;
}
int descend(int a,int b)
{
	return b-a;
}
void main()
{
	int a[5],i;
	printf("enter integer elements:\n");
	for(i=0;i<5;i++)
		scanf("%d",a+i);
        sort_fun(a,ascend);
	printf("after ascending sorting\n");
	for(i=0;i<5;i++)
		printf("%d ",a[i]);
	printf("\n");
        sort_fun(a,descend);
	printf("after descending sorting\n");
	for(i=0;i<5;i++)
		printf("%d ",a[i]);
	printf("\n");


}
void sort_fun(int *p,int (*fp)(int,int))
{
	int i,j;
	for(i=0;i<5;i++)
	{
		for(j=i+1;j<5;j++)
		{
			if(fp(p[i],p[j])>0)
			{
			int t=p[i];
			p[i]=p[j];
			p[j]=t;
			}
		}
	}
	
}
