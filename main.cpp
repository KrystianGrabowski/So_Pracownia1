#include <iostream>
#include <pthread.h>

void *PrintHello(void *threadid) {
	int *l = (int*)threadid;
	int tID = *l;
	printf("Hello World! Thread ID: %d\n", *l);
}
