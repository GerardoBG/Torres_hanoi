#include<stdio.h>
int hanoi(int n, int origen,  int auxiliar, int destino)
{
    if(n==1){
    	 printf("MOVER DISCO DE TORRE %d " , origen );
    	 printf("A TORRE %d" ,destino);
    	 printf("\n \n");
     }
    
    else{
    	 hanoi(n-1, origen, destino, auxiliar);
   		 printf("MOVER DISCO DE TORRE %d " , origen);
   		 printf("A TORRE %d" , destino );
   		 printf("\n \n");
   		
    	 hanoi(n-1, auxiliar, origen, destino);
    }
    return 0;
}

int main()
{
	int n;
printf("EJERCICIO TORRES DE HANOI:\n \n");
    printf("INTRODUZCA EL NUMERO DE DISCOS: ");
	scanf("%d",&n);
	hanoi(n,1,2,3);
    
}
