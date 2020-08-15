#include<stdio.h>

int main() {
	int n;
	printf("n > 1");
	scanf("%d", &n);
	if(n <= 1) {
		printf(" n > 0\n");
	} else {
		int i;
		// in ra cac so le:
		printf("cac so le: \n");
		for( i = 1; i < n; i += 2) {
			printf("%d, ", i);
		}
	}
	return 0;
}

