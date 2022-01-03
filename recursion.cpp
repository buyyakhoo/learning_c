#include <stdio.h>

int fib(int n) {
	if (n == 1) {
		return 1;
	} else if (n == 0) {
		return 0;
	} else {
		return fib(n-1) + fib(n-2);
	}
}

int main() {
	int n, i, res;
	
	printf("Enter the position of fibonacci: ");
	scanf("%d", &n);
	
	res = fib(n);
	
	printf("Result is: %d", res);
}
