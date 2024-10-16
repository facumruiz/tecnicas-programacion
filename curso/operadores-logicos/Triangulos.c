#include <stdio.h>

/*
	Ejercicio 3: Ingresar 3 lados de un triángulo (valores mayores que cero), y responder
	si es “Equilátero” (todos los lados iguales), “Isósceles” (dos lados iguales y uno
	distinto) ó “Escaleno” (todos los lados distintos entre sí), utilizando operadores
	lógicos.
*/

int main(void){
    int a,b,c;
    
    printf("Ingrese tres valores");
    scanf("%d %d %d", &a,&b,&c);
    
    if(a==b){
   	 if(b==c){
   		 //Equilatero
   		 printf("Equilatero");
   	 }else{
   		 //Isosceles
   		 printf("Isosceles");
   	 }
    }else{
   	 if(b==c){
   		 //Isoseceles
   		 printf("Isosceles");
   	 }else{
   		 if(a==c){    
   			 //Isoseceles
   			 printf("Isosceles");    
   		 }else{
   			 //Escaleno
   			 printf("Escaleno");
   		 }    
   	 }
    }    
}