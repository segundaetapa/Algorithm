#include <stdio.h>

void swap(int *xp, int *yp) { 
    int temp = *xp; 
    *xp = *yp; 
    *yp = temp; 
} 

int main() {
	
	int a[100], b[100], c[100], d[100];
	
	int n; 
	
	scanf("%d", &n);
	
	for (int i = 0; i < n; i++) {
		scanf("%d %d %d", &a[i], &b[i], &c[i]);
		d[i] = a[i] * 3600 + b[i] * 60 + c[i];
	}
	
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			if (d[i] > d[j]) {
				swap(&a[i], &a[j]);
				swap(&b[i], &b[j]);
				swap(&c[i], &c[j]);
				swap(&d[i], &d[j]);
			}
		}
	}
	
	for (int i = 0; i < n; i++) {
		printf("%d %d %d\n", a[i], b[i], c[i]);
	} 
	
	return 0;
}
