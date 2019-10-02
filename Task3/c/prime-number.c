#include <stdio.h>

int main(){
	int i, count=0;

	//change the value of this variable
	int number = 5;

	for(i=1; i<=number; i++){
		if(number%i == 0){
			count++;	
		}
	}

	if(count==2){
		printf("%d is a prime number!\n", number);
	}
	else{
		printf("%d is NOT a prime number!\n", number);
	}

	return 0;
}
