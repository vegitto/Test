#include <stdio.h>

void citire(int *x,int *y){
	scanf("%d%d",x,y);
}

void afisare(int x,int y){
	printf("%d %d\n",x,y);
}

int main()
{
	int x,y;
	citire(&x,&y);
	afisare(x,y);
	return 0;
}
