#include <stdio.h>

/** Testeaza daca numarul x este palindrom
 * **/
int palindrom(int x) {
	int new_x, cifra, y;
        new_x = x;
	y = 0;
	while(!new_x) {
		cifra = new_x % 10; 
		y = y * 10 + cifra;
		new_x = new_x / 10;
	}
	if (y == x) {
		return 1;
	}
	return 0;
}

void citire(int *x,int *y) {
	scanf("%d%d",x,y);
}

void afisare(int x,int y) {
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

int main() {
	int x,y;
	citire(&x,&y);
	if (palindrom(x)== 1 && palindrom(y)== 1) {
		printf("Da\n");
	}
	afisare(x,y);
	printf("min is %d\n", get_min(x,y));
	printf("max is %d\n", get_max(x,y));
	return 0;
}
