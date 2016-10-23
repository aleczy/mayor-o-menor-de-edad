//Crear programa para identificar si es mayor o menor de edad

#include<stdio.h>

int main(){
	
	int n;
	
	printf("introduce edad\n");
	scanf("%d", &n);
	
	if(n>=18){printf("eres mayor de edad");
	}
	if(n<18){printf("eres menor de edad");
	}
	
	return 0;
}
