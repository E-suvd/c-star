#include <stdio.h>
void myFunction(int n) {
	printf("my: %d", n);
	myFunction(n);
}

int main() {
	int a = 5;
	myFunction(a);
	
	return 0;
}
hariu ni zogsoltgui 5 iig hewlene
