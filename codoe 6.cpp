#include <stdio.h>
void yourFunction(int n);

void myFunction(int n) {
	yourFunction(n-1);
	printf("\nmy: %d", n);
}

void yourFunction(int n) {
	printf("your: %d", n);
}

int main() {
	int a = 5;
	myFunction(a);
	
	return 0;
}
