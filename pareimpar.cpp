#include<stdio.h>

int main(){
	
	int num = 0;
	
	for(num;num<=100;num++){
		if(num%2==0){
			printf("numero par %d\n", num);
		}else
		printf("numero impar %d\n", num);
	}

	return 0;
}
