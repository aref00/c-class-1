/*
Our first c Program
C Class of 1402
*/

#include<stdio.h>
#include<bool.h>

bool that(bool);

void main() {
	printf("Hello World\n");
	bool result = that(true);
}

bool that(bool in) {
	bool out = !in;
	return out;
}