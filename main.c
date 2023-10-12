#include <stdio.h>
#include <stdlib.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */


int combination(int n,int r){
	int a,b; //a는 분모,b는 분자
	a=(factorial(n-r))*(factorial(r));
	b=factorial(n);
	
	return b/a; 
}

int factorial(int a){
	int res=1;
	int i;
	for(i=1;i<=a;i++)
	res*=i;
	
	return res;
}
int main(int argc, char *argv[]) {
	int n,r,result;
	printf("input number:");
	scanf("%i %i",&n,&r);
	
	result=combination(n,r);
	printf("C(%i,%i)=%i",n,r,result);

	
	
	return 0;
	
}


