#include<string.h>
#include<stdlib.h>
#include<stdio.h>
struct var_arg{
	int x;
	int y;
	int z;
};
void fact_fun(int a){
	static int sum=1;
	if(a>=1)
	{
		sum=sum*a;
		fact_fun(a-1);
	}
	else
	{
		printf("%d",sum);
		//return 0;
	}
}
void pow_fun(int a){
	static int tot=1,i;
	if(i<a)
	{
		i++;
		tot=tot*2;
		pow_fun(a);
	}
	else
		printf("%d",tot);

}
typedef void (*fp)(int);
enum b{POW,FACT,FIB,MAX};
void fib_fun(int a){
	static int x=1,y,z;
	if(a>0)
	{
		printf(" %d",z);
		z=x+y;
		x=y;
		y=z;
		fib_fun(a-1);

	}
//	printf("\n");

}
void main(int argc,char **argv)
{
	int a,i;
	fp v[MAX]={pow_fun,fact_fun,fib_fun};
	a=atoi(argv[2]);
//	printf("enter a number:\n");
//	scanf("%d",&a);
	if(strcmp(argv[1],"pow")==0)
		i=POW;
	else if(strcmp(argv[1],"fact")==0)
		i=FACT;
	else if(strcmp(argv[1],"fib")==0)
		i=FIB;

	(*v[i])(a);
	printf("\n");



}
