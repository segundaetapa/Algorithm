#include <stdio.h>

// Please Add an 3D Array
int main() {

	int x[3][3][3];
	
	for(int i=0; i<3; i++) {
		for(int j=0; j<3; j++) {
			for(int k=0; k<3; k++) {
				scanf("%d", &x[i][j][k]);
			}
		}
	}
	
	for(int i=0; i<3; i++) {
		for(int j=0; j<3; j++) {
			for(int k=0; k<3; k++) {
				printf("Test[%d][%d][%d] = %d\n", i, j, k, x[i][j][k]);
			}
		}
	}

	return 0;
}
