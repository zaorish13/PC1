#include <stdio.h>

int main(){

	int first_number;
	int second_number;
	
	int sum;
	sum = 0;
	
	double media;
	
	printf("Insert first number: ");
	scanf("%d", &first_number);
	
	printf("Insert second number: ");
	scanf("%d", &second_number);
	
	sum = first_number + second_number;
	
	printf("The sum is: %d \n", sum);
	
	media = (first_number + second_number) / 2.;
	
	printf("Average is: %lf \n", media);
	
	return 0;

}
