#include <stdio.h>
#include <conio.h>
int main(int argc, char const *argv[])
{
	int n , i;
	printf("enter the no.\n");
	scanf("%d" , &n);
		for (i = 2; i < n; i++)
		if(n%i == 0){
			printf("NOT PRIME\n");
			break;
		}
	if(i==n)
		printf("PRIME");
	getch();
	return 0;
}