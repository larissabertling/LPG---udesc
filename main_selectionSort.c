#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int v[10] = {3, 6, 7, -1, 99, -4, 12, -10, 88, 14};
	int n = 10;
	int i;
	
	for( i = 0 ; i < n-1 ; i++){
		int j, i_menor = i;
		for( j = i+1 ; j < n ; j++ ){
			if( v[j] < v[i_menor] ){
				i_menor = j;
			}
		}
		int aux = v[i];
		v[i] = v[i_menor];
		v[i_menor] = aux;
	}
	
	for( i = 0 ; i < n ; i++){
		printf("%d : %d\n", i, v[i]);
	}
	
	return 0;
}
