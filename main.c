#include <stdio.h>
#include <stdlib.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int sumTwo(int a,int b){return (a+b);}

int square(int n){return (n*n);}

int get_max(int a, int b){
	if(a>b)
	return a;
	
	return b;
	
}

int main(int argc, char *argv[]) {
	int result1,result2,result3;
	result1=sumTwo(1,2);
	result2=square(3);
	result3=get_max(1,5);	
	printf("%d\n",result1);
	printf("%d\n",result2);
	printf("%d\n",result3);
	
	
	return 0;
	
}
