#include <stdio.h>

void citire(int *x,int *y){
	scanf("%d%d",x,y);
}

void afisare(int x,int y){
	printf("%d %d\n",x,y);
}
int get_min(int x, int y)
{
	return x < y ? x : y;
}
int get_max(int x, int y)
{
	return x > y ? x : y; 
}

int main()
{
	int x,y;
	citire(&x,&y);
	afisare(x,y);
	printf("min is %d\n", get_min(x,y));
	printf("max is %d\n", get_max(x,y));
	return 0;
}
