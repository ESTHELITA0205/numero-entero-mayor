// ejercicio 4 
// realize un programa que pida al usuario el ingreso de 3 numeros enteros diferentes y presente por pantalla solo el mayor de ellos.
#include <stdio.h>
int main ()
{
	int M, N, O;
	printf ("ingrese tres numeros diferentes");
	scanf ("%i",&M);
	printf ("el primer numero entero es: \n %i",M);
	scanf ("%i",&N);
	printf ("el segundo numero entero es: \n %i", N);
	scanf ("%i",&O);
	printf (" el tercer numero entero es: \n %i", O);
	if (M>N){
		if (M>O)
		printf ("primer numero entero mayor\n");}
		if (N>M){
		if (N>O)
		printf ("segundo numero entero mayor\n");}
		if (O>M){
			if (O>N)
			printf (" tercer numero entero mayor\n");}
system ("pause");
return 0;	
	}

