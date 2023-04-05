#include <stdio.h>
void yourFunction(int n);

void myFunction(int n) {
	printf("my: %d", n);
		yourFunction(n-1);
}

void yourFunction(int n) {
	printf("\nyour: %d", n);
}

int main() {
	int a = 5;
	myFunction(a);
	
	return 0;
}
