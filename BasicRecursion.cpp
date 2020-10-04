#include <stdio.h>

long long recursive(long long a, long long b);

int main() {
	
	long long x, y;
	
	scanf("%lld %lld", &x, &y);
	printf("%lld\n", recursive(y, x));
	
	return 0;
}

long long recursive(long long a, long long b) {
	
	if (a == 0 || a == b) {
		return 1;
	}
	
	if (a < b) {
		return recursive(a - 1, b - 1) + recursive(a, b - 1);
	}
	
	return 0;
}
