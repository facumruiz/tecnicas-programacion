#include <stdio.h>

/*

	Ejercicio 6: Armar un programa que, ingresando el número de mes, nos devuelva el
	nombre de ese mes.

*/


int main(void){
    
	int mes;
	printf("Ingrese el valor del mes: ");
	scanf("%d", &mes);
    
	printf("\n\n");
    
	switch(mes){
    	case 1:
        	printf("Enero \n\n");
        	break;
    	case 2:
        	printf("Febrero \n\n");
        	break;
    	case 3:
        	printf("Marzo \n\n");
        	break;
    	case 4:
        	printf("Abril \n\n");
        	break;
    	case 5:
        	printf("Mayo \n\n");
        	break;
    	case 6:
        	printf("Junio \n\n");
        	break;
    	case 7:
        	printf("Julio \n\n");
        	break;
    	case 8:
        	printf("Agosto \n\n");
        	break;
       	 
    	case 9:
        	printf("Septiembre \n\n");
        	break;
                           	 
    	case 10:
        	printf("Octubre \n\n");
        	break;
       	 
    	case 11:
        	printf("Noviembre \n\n");
        	break;
       	 
    	case 12:
        	printf("Diciembre \n\n");
        	break;       	 
           	 
    	default:
        	printf("Error");                                                                                                   	 
	}
    
}