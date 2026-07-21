#include <stdio.h>

int main()
{
	int a = 4, b = 5;

	int ans = sum(a, b);
	printf("Sum: %d", ans);

	ans = sub(a, b);
	printf("Subtraction: %d", ans);

	ans = multiply(a, b);
	printf("Multiply: %d", ans);

	return 0;
}
