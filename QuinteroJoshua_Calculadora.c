#include<stdio.h>
void suma(float num1, float num2);
void resta(float num1, float num2);
void multiplicacion(float num1, float num2);
void division(float num1, float num2);

int main(){
	float num1, num2;
	int opcion;
	
	printf("Bienvenido a mi calculadora basica:)\nPor favor ingresa una de las opciones:\n");
	printf("1. Suma\n2. Resta\n3. Multiplicacion\n4. Division\n\nTu opcion: ");
	scanf("%i", &opcion);
	
	printf("\nIngresa el numero 1: ");
	scanf("%f", &num1);
	
	printf("\nIngresa el numero 2: ");
	scanf("%f", &num2);
	
	switch(opcion){
		case 1:
			suma(num1, num2);
			break;
			
		case 2:
			resta(num1, num2);
			break;
			
		case 3:
			multiplicacion(num1, num2);
			break;
			
		case 4:
			division(num1, num2);
			break;
			
		default:
			printf("Opcion no valida:(");
			break;
	}
	
	
	return 0;
}
void suma(float num1, float num2){
	float resultado;
	resultado = num1 + num2;
	printf("%f + %f = %f", num1, num2, resultado);	
}

void resta(float num1, float num2){
	float resultado;
	resultado = num1 - num2;
printf("%f - %f = %f", num1, num2, resultado);	}

void multiplicacion(float num1, float num2){
	float resultado;
	resultado = num1 * num2;
	printf("%f * %f = %f", num1, num2, resultado);		
}

void division(float num1, float num2){
	float resultado;
	resultado = num1 / num2;
	printf("%f / %f = %f", num1, num2, resultado);
}


