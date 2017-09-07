#include<stdio.h>

int factorial(int n);

int main() {
	int n, result;
	printf("enter the num : ");
	scanf_s("%d", &n);
	result = factorial(n);
	printf("n! = %d", result);

	return 0;
}

int factorial(int n) {
	if (n <= 1) return 1;
	else return n*factorial(n - 1);
}