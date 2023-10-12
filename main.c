#include <stdio.h>
#include <stdlib.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void print_star()
{
	int i;
	
	for(i = 0;i<10;i++)
	printf("*");
}
int main(int argc, char *argv[]) {
	int a;
	for(a=0;a<3;a++)
	print_star();
	

	return 0;
}
