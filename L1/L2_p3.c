#include <stdio.h>

int f1(int a, int b);

int main(void)
{
	int a, b;
	
	int suma;
	
	printf("a = ");
	scanf("%d", &a);
	
	printf("b = ");
	scanf("%d", &b);
	
	printf("Ati introdus numerele %d si %d \n", a, b);
	
	suma = f1(a,b);
	printf("Suma numerelor %d si %d este %d \n", a, b, suma);

	return 0;
}

int f1(int a, int b)
{
	int s;
	
	//a = 100;
	//b = 200;
	
	s = a + b;
	
	return s;
}
