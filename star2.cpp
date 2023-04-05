#include <stdio.h>
void printStar(int n) {
		for(int i=0;i<n;i++){
			printf("*");
			printf("\n");
			for(int i=0;i<n;i++){
			printf("*");
			printf("\n");
			}
		}
		
	
}
int main(){
	printStar(8);
	return 0;
}
