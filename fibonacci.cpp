#include<stdio.h>

int fibonacci(int n);

int main() {
	int i,n,result;

	printf("Enter fibonacci number n (except 0) : ");
	scanf_s("%d", &n);
	result = fibonacci(n);

	printf("fibonacci sequence = %d", result);

	return 0;
}

int fibonacci(int n) {
	if (n <= 2) return 1;
	else return fibonacci(n - 1) + fibonacci(n - 2);
}