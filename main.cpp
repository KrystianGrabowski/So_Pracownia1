#include <iostream>
#include <pthread.h>
#include <stdio.h>

void *PrintHello(void *threadid) {
	int *l = (int*)threadid;
	int tID = *l;
	printf("Hello World! Thread ID: %d\n", *l);
}

#define NUM 8

int main() {
	int i = 0;
	pthread_t tab[NUM];
	for(i = 0; i < NUM; i++) {
		pthread_create(&tab[i], NULL, PrintHello, &i);
	}
	
	for(i = 0; i < NUM; i++) {
		pthread_join(tab[i], NULL);
	}
	
	return 0;
}
