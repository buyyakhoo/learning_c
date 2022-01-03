#include <stdio.h>

int main() {
	int a[100], i, n;
	
	a[0] = 0;
	a[1] = 1;
	
	printf("Enter the position of fibonacci: ");
	scanf("%d", &n);
	
	for (i=2; i<=n; i++){
		a[i] = a[i-1] + a[i-2];
	}
	
	printf("It is %d", a[n]);
	
	
}
