#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX 1000

int main(int argc, char *argv[]) {

    srand( time(0) );

	int i; 
	int v[MAX];
  
    for(i = 0; i<MAX; i++){
        v[i] = rand();
	}
  
	for(i = 0; i<MAX; i++){
		printf("%d: %d \n", i, v[i] );
	}
  
	return 0;
}
