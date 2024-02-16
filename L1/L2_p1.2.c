#include <stdio.h>
#include <math.h>

int main(){

	double a;
	double b;
	
	double prod;
	double mg;
	
	printf("Introduceti primul numar: ");
	scanf("%lf", &a);
	
	printf("Introduceti al doilea numar: ");
	scanf("%lf", &b);
	
	prod = a * b;
	printf("Produsul numerelor este: %lf \n", prod);
	
	mg = sqrt(a * b);
	printf("Media geometrica este: %lf \n", mg);	
	
	return 0;
}
