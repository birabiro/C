#include <stdio.h>

// In questo programma calcolerai il perimetro e l'area di un cerchio partendo dal raggio //
//


#define  pi 3.14159

int main(){
// creare variabili //

	float r;
	float circ;
	float area;
	
// chiedere input e assegnare valore al raggio //
	
	printf("raggio del cerchio?\n");
	scanf("%f", &r);

// calcolare circ && area

	circ = pi * r * 2;
	area = pi * (r * r);

// output della circonferenza e area del cerchio
	printf("cerchio con raggio %.2f\ncirconferenza %.2f\tarea %.2f\n", r, circ, area);
	

	return 0;
}



