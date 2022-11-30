/* This program converts Earth days into Jovian years. */
#include<stdio.h>

int main(){
	float e_days;  /* number of Earth days */
	float j_years; /* equivalent number of Jovian years */

/* get number of Earth days */
	printf("Enter number of Earth days: ");
	scanf("%f", &e_days);

/* now, compute Jovian years */
	j_years = e_days / (365.0 * 12.0);

/* display the answer */
	printf("Equivalent Jovian years: %f\n", j_years);

	return 0;
}
