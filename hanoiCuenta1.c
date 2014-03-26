#include<stdio.h>

int contador,n;

void hanoi(int n, int origen,  int auxiliar, int destino){
	if(n==1){
    	contador=contador+1;
     }
     
    else{
    	 hanoi(n-1, origen, destino, auxiliar);
   		 hanoi(n-1, auxiliar, origen, destino);
    	 contador=contador+1;
    }
    }
    
int main(){
	printf("EJERCICIO TORRES DE HANOI\n \n");
    printf("INTRODUZCA EL NUMERO DE DISCOS:");
	scanf("%d",&n);
	hanoi(n,1,2,3);
	printf (" \n MOVIMIENTOS NECESARIOS PARA PASAR LOS DISCOS  =  %d", contador);
	printf("\n");
	
    
}
