#include <stdio.h>

/* 	Autor: Alcántara Guerrero Alfredo Guadalupe*/

int main(){
	int op;
	do{
		printf("*****Selecciona el opcion:\n\t1) Saludo 1\n\t2) Saludo 2\n\t3) Saludo 3\n\t4) Saludo 4\n\t5) Saludo 5\n\t6) Saludo 6\n\t7) Salir\n");
		scanf("%d",&op);
		switch(op){
			case 1:
				printf("Hola desde la opcion 1\n\n");
				break;
			case 2:
				
				break;
			case 3:
				
				break;
      			case 5:
				
				break;
      			case 5:
				
				break;
      			case 6:
				
				break;
      			case 7:
				printf("\nHasta pronto\n\n");
				break;
			default:
			printf("Opcion invalida. Selecciona otra opcion\n\n");
		}
	}while(op != 7);
	return 0;
}
