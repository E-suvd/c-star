#include <stdio.h>
void yourFunction(int n) {
	printf("\nyour: %d", n);
}

void myFunction(int n) {
	
	printf("my: %d", n);
	yourFunction(n);
	
}


int main() {
	int a = 5;
	myFunction(a);
	
	return 0;
}
