#include<stdio.h>
void main() {
	int i, j;

	for (i = 1; i <= 9; i++) {
		if ((i == 5) || (i == 7)) {
			continue;
		}
		else {
			for (j = 1; j <= 9; j++) {

				printf("%d * %d = %d\n", i, j, i * j);
			}
		}
		printf("\n");
		}
		
}