#include <stdio.h>
#include <math.h>
int isPerfectSquare(int num) {
	int sqrtNum = sqrt(num);
	return (sqrtNum * sqrtNum == num);
}
void countAndPrintPerfectSquares(int n) {
	printf("Cac so chinh phuong nho hon %d:\n", n);
	int count = 0;
	for (int i = 1; i < n; i++) {
		if (isPerfectSquare(i)) {
			printf("%d ", i);
			count++;
		}
	}
	printf("\nTong so chinh phuong: %d\n", count);
}
int main() {
	int n;
	printf("Nhap gia tri n: ");
	scanf("%d", &n);
	countAndPrintPerfectSquares(n);
	return 0;
}