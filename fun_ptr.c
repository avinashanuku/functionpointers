#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<string.h>
int sum(int,int);
int sub(int,int);
int mul(int,int);
int dive(int,int);
int (*p)(int,int);
int fun_res(int,int,int(*p)(int,int));
void main(int argc,char **argv)
{

	int res=0,a,b; 
	a=atoi(argv[2]);
	b=atoi(argv[3]);
	if(strcmp(argv[1],"sum")==0)   //comparing
	res=fun_res(a,b,sum);
	else if(strcmp(argv[1],"sub")==0)
		res=fun_res(a,b,sub);
	else if(strcmp(argv[1],"mul")==0)
		res=fun_res(a,b,mul);
	else if(strcmp(argv[1],"div")==0)
		res=fun_res(a,b,dive);
	printf("the result is %d\n",res);

}
int fun_res(int a,int b,int (*p)(int,int))
{
	return p(a,b);
}

