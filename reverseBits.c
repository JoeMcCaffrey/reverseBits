#include "stdio.h"
#include <string.h>
unsigned i,temp,bit,reversed;

unsigned int reverse(unsigned int x){
	reversed =0;

// loop for each bit	
	for(i=0; i<32; i++){
		temp =0;
		bit =0;
		// shift to the least sig bit
		temp = x >> 31-i;
		// bit mask to clear the other bits
		bit = temp & 1;
		// move the bit to the reversed spot
		bit = bit << i;
		// add together to get reversed bits
		reversed += bit;
	}

	return reversed;

}


int main(){
	unsigned int y =0;
	unsigned int x = 6;
	printf("%d\n", x);
	y = reverse(x);
	printf("%d\n", y);

}


