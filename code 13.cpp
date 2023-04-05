#include <stdio.h>

int power(int base, int n) {
	if(n==0) return 1;
	else {
		int result = base*power(base, n-1);
		return result;
	}
}

int main() {
	int base=10;
	int n=3;
	printf("%d", power(base, n));
	return 0;
}

