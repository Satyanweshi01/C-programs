#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

int main()
{

	long int value; // it is a integer value thats 4 bytes of space

	printf("Enter a integer value: ");
	scanf("%li",&value);

	long int* p = &value; // this is a pointer to the value integer
	
	printf("%d -> %X\n\n",value,value);
	
	printf("%p: %d -> %X\n",((char*)p),*((char*)p),(uint8_t)*((char*)p));
	printf("%p: %d -> %X\n",((char*)p+1),*((char*)p+1),(uint8_t)*((char*)p+1));
	printf("%p: %d -> %X\n",((char*)p+2),*((char*)p+2),(uint8_t)*((char*)p+2));
	printf("%p: %d -> %X\n",((char*)p+3),*((char*)p+3),(uint8_t)*((char*)p+3));

	// int ordered_value = ((uint8_t)*((char*)p)) + ((uint8_t)*((char*)p+1))*256 + ((uint8_t)*((char*)p+2))*256*256 + ((uint8_t)*((char*)p+3))*256*256*256;

	// printf("RESULT:  \n\n");
	// if (value == ordered_value)
	// 	printf("The system/CPU uses Little Indian\n");
	// else
	// 	printf("The system/CPU uses Big Indian\n");
	return 0;
}
