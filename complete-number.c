#include<stdio.h>

int main () {
	int n;
	printf("Please enter your number: ");
	scanf("%d", &n);

	int s = 0;
	int m;

	for (int i = 1; i <= n/2; i++)
	{
		m = n / i;
		int r = n - (m * i);
		if (r == 0) {
			s = s + i;
		}
	}

	if (s == n) {
		printf("n is complete.\n");
	} else {
		printf("n is not complete.\n");
	}
}