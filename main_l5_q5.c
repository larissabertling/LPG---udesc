#include <stdio.h>
#include <stdlib.h>

void max_vetor( float v[], int tam, float *pMax, int *pi_max );

int main(int argc, char *argv[]) {
	float v[5] = {3, 6, 99, -1, 444.5};
	int n = 5, i_max;
	float max;
	
	max_vetor( v, n, &max, &i_max );
	
	printf("Maior valor: %.2f, no indice %d\n", max, i_max);
	
	return 0;
}

void max_vetor( float v[], int tam, float *pMax, int *pi_max ){
	int i;
	*pMax = v[0];
	*pi_max = 0;
	for( i = 0 ; i < tam ; i++ )
		if( v[i] > *pMax ){
			*pMax = v[i];
			*pi_max = i;
		}
}
