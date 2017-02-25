/*
 * Name: Selina Octavia
 * NPM: 1606955025 
 * Class: SI Ekstensi 2016 
 * Comment: This is my exercise
 */

#define LOOP 4
 
#include <stdio.h>
void main() {
	int input = 5;
	int a, b = 0;
	for(a = 0; a<LOOP; a++) {
		b = b + input;
	}
	printf("%d times %d equal %d\n", input, LOOP, b);
}	
