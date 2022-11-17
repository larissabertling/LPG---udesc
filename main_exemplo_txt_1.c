#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	float v[] = { 1.5, 2.75, -7, 0, 45.99 };
	int i;
	
	FILE *f = fopen("exemplo1.txt", "wt");
	if( f == NULL){
		printf("Erro no arquivo!\n");
		return -1;
	}
	for( i = 0 ; i < 5 ; i++ )
		fprintf( f, "%.3f\n", v[i]);
	
	fclose(f);
	
	return 0;
}
