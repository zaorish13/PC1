/*
* Se citesc de la tastatură 3 numere întregi care reprezintă lungimile laturilor unui triunghi. 
* Să se calculeze aria triunghiului folosind formula lui Heron.	
* 	𝐴 = sqrt(𝑝(𝑝 − 𝑎)(𝑝 − 𝑏)(𝑝 − 𝑐))
* unde p este semiperimetrul triunghiului.
*/

/* compiler:
	gcc -Wall -c L2_p1.3.c
	gcc -Wall L2_p1.3.o -lm -o L2_p1.3
*/
#include <stdio.h>
#include <math.h> 		//sqrt

int main(){
	
	int a;			//first length
	int b;			//second length
	int c;			//third length	
	
	double p;		//perimeter
	double A;		//Heron results
	
	printf("Insert first length: ");
	scanf("%d", &a);
	
	printf("Insert second length: ");
	scanf("%d", &b);
	
	printf("Insert third length: ");
	scanf("%d", &c);
	
	//we calculate the Herin perimeter
	p = (a + b + c) / 2.;
	printf("The perimeter of triangle is: %lf \n", p);
	
	//Heron formula
	A = sqrt(p * (p - a) * (p - b) * (p - c));
	printf("Heron results is: %lf \n", A);

	return 0;
}
