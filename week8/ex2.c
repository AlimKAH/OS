#include <string.h>
#include <stdio.h>
#include <limits.h>
#include <float.h>
#include <stdlib.h>
#include <unistd.h>
#include <math.h>
// On MAcOS with 8gb of RAM (Si) and (so) are o

int main() {
	size_t mb = 10 * pow(2,20); //for making it in MB
	for (int i = 0; i < 10; i++) {
		int *pin = malloc(mb);
		memset(pin, 0, mb);
		sleep(1);
	}
	return 0;
}
