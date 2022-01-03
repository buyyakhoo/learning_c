#include <stdio.h>
#include <stdlib.h>

int main() {
	/*
	int a[10][10];
	
	for (int w=0; w<10; w++) {
		for (int x=0; x<10; x++) {
			a[w][x] = w*x;
		}
		
	}
	
	for (int j=0; j<10; j++) {
		for (int k=0; k<10; k++) {
			printf("a[%d][%d]: %d ", j, k, a[j][k]);
		}
		printf("\n");
		
	}
	*/
	
	int a, n, i;
	int *p;
	
	printf("Enter the number of element: ");
	scanf("%d", &n);
	
	p = (int*)malloc(n*sizeof(int));
	
	for (i=0; i<n; i++) {
		*(p+i) = i*i;
	}
	
	for (i=0; i<n; i++) {
		printf("%d, ", *(p+i));
	}
	
	free(p);
	p = (int*)malloc(sizeof(int));
	*p = 123;
	
	printf("\n%d", *p);
	
	return 0;

}

