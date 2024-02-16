#include <stdio.h>

/* **2.1**
	În fișierul p2.c ștergeți linia 3 
	(comanda în vim pentru ștergerea unei linii este dd 
	(cursorul trebuie poziționat pe linia pe care vrem să o ștergem – vezi Tutorial Vim).
	Reluați compilarea și linkeditarea. 
	Apar erori? Dacă da, erorile sunt la compilare sau linkeditare?
	Care sunt aceste erori?
	
	Raspuns:
	daca stergem linia, nu mai recunoaste functia mediaAritmetic(a,b), va aparea warning
	
	L2_p2.1.c: In function ‘main’:
	L2_p2.1.c:28:14: warning: implicit declaration of function ‘mediaAritmetica’ [-Wimplicit-function-declaration]
*/

/* **2.5**
	Refaceți programul inițial.
	Modificați linia 7 astfel încât să avem numai definiția lui variabilei a (să rămână doar int a;)..
	Reluați compilarea, linkeditarea, lansarea în execuție. Ce se observă?
	
	Raspuns:
	EROARE
	
	L2_p2.1.c: In function ‘main’:
	L2_p2.1.c:58:14: error: too many arguments to function ‘mediaAritmetica’
	   58 |         ma = mediaAritmetica(a,b);
		  |              ^~~~~~~~~~~~~~~
	L2_p2.1.c:26:8: note: declared here
	   26 | double mediaAritmetica(int a);
		  |        ^~~~~~~~~~~~~~~
	L2_p2.1.c: At top level:
	L2_p2.1.c:83:8: error: conflicting types for ‘mediaAritmetica’; have ‘double(int,  int)’
	   83 | double mediaAritmetica(int x, int y)
		  |        ^~~~~~~~~~~~~~~
	L2_p2.1.c:26:8: note: previous declaration of ‘mediaAritmetica’ with type ‘double(int)’
	   26 | double mediaAritmetica(int a);
		  |        ^~~~~~~~~~~~~~~
*/
double mediaAritmetica(int a, int b);

int main(void)
{
	/*Datele de intrare */
	int a;
	int b;
	
	/*Datele de iesire*/
	double ma;
	
	printf("a = ");
	scanf("%d", &a);
	
	printf("b = ");
	scanf("%d", &b);
/* **2.4**
	Reintroduceți linia ștearsă (vezi procedura de la pct. 2.2).
	Linia 15 înlocuiți-o cu linia mediaAritmetica(a, b);
	Reluați compilarea, linkeditarea, lansarea în execuție. Ce se observă?

	Raspuns:
	WARNING la printf, nu vede ma;
	
	L2_p2.1.c: In function ‘main’:
	L2_p2.1.c:46:9: warning: ‘ma’ is used uninitialized [-Wuninitialized]
   		46 |         printf("Media aritmetica este %.2lf \n", ma);
     	  |         ^~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~


*/
	//mediaAritmetica(a,b);
	ma = mediaAritmetica(a,b);
	
	
	printf("Media aritmetica este %.2lf \n", ma);
	

	return 0;
}

/*	**2.2**
	Reintroduceți linia ștearsă. 
	(Comanda p, cursorul fiind pe linia goală de deasupra liniei cu main).
	Ștergeți funcția scrisă (liniile 22 ->28). 
	Comanda vim este 7dd (cursorul trebuie să fie pe linia 22).
	Reluați compilarea și linkeditatea. Apar erori? 
	Dacă da, erorile sunt la compilare sau linkeditare? Care sunt aceste erori?
	
	Raspuns:
	compileaza fara probleme, la linkeditare da eroare
	
	/usr/bin/ld: L2_p2.1.o: in function `main':
	L2_p2.1.c:(.text+0x84): undefined reference to `mediaAritmetica'

*/

double mediaAritmetica(int x, int y)
{
/* **2.4**
	Refaceți programul inițial.
	Ștergeți linia 24.
	Reluați compilarea, linkeditarea, lansarea în execuție. Ce se observă?
	
	Raspuns:
	Eroare, media nu este declarata;

	L2_p2.1.c: In function ‘mediaAritmetica’:
	L2_p2.1.c:88:9: error: ‘media’ undeclared (first use in this function)
	   88 |         media = (x + y) / 2.;
		  |         ^~~~~

*/

	double media;
	
	media = (x + y) / 2.;
	
/* **2.3** 
	Reintroduceți liniile șterse (plasați cursorul pe linia 22 și dați comanda p (în vim))
	Ștergeți linia 27. Faceți din nou compilare și linkeditare. Apar erori? Care sunt?

	Raspuns:
	Daca stergem linia 27* vom primi WARNING, nu vede return la media
	
	L2_p2.1.c: In function ‘mediaAritmetica’:
	L2_p2.1.c:59:16: warning: variable ‘media’ set but not used [-Wunused-but-set-variable]
   		59 |         double media;
      	   |                ^~~~~
	L2_p2.1.c:70:1: warning: control reaches end of non-void function [-Wreturn-type]
   		70 | }
 		  | ^

*/
	
	return media;
}

