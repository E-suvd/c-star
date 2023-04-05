#include <stdio.h>

int fact(int n) {
	if(n==1) return 1;
	else {
		int result = fact(n-1)*n;
		return result;
	}
}

int main() {
	int a=5;
	printf("fact: %d", fact(a));
	return 0;
}

1 ees 5 hurtelh toonii urjwer
