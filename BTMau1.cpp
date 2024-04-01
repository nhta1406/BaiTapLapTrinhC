#include <stdio.h>

int main() {
	int start = 10;
	int end = 99;

	printf("Cac so nguyen co 2 chu so va la boi cua 7:\n");

	for (int num = start; num <= end; num++) {
		if (num % 7 == 0) {
			printf("%d\n", num);
		}
	}

	return 0;
}