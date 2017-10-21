#include <iostream>
#include <pthread.h>
#include <stdio.h>

void *PrintHello(void *threadid) {
	int tID = *((int*)threadid);
	printf("Hello World! Thread ID: %d\n", tID);
	return 0;
}

#define NUM 8

int main() {

	pthread_t tab[NUM];
	
	int i;
	int id[NUM];
	
	for(i = 0; i < NUM; i++) {
		id[i] = i;
		pthread_create(&tab[i], NULL, PrintHello, &id[i]);
	}
	
	for(i = 0; i < NUM; i++) {
		pthread_join(tab[i], NULL);
	}
	
	return 0;
}
