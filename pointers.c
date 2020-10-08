#include <stdio.h>
#include <stdlib.h>

int main() 
{
	//#1
	int x = 5;
	char y = 90;
	long z = 921312321;
	
	int*xp = &x;
	char*yp = &y;
	long*zp = &z;
	
	//#2-4
	printf("Original Values\n");
	printf("X: %u\n",x);
	printf("Y: %u\n",y);
	printf("Z: %u\n",z);

	printf("Address in Decimal\n"); 
	printf("X: %u\n", &x);
	printf("Y: %u\n", &y);
	printf("Z: %u\n", &z);


	printf("Address in Hex\n");
	printf("X: %x\n", &x);
	printf("Y: %x\n", &y);
	printf("Z: %x\n", &z);
	//smallest data type has the earlier address (char)

	printf("Value of Pointers\n");
	printf("X: %u\n", xp);
	printf("Y: %u\n", yp);
	printf("Z: %u\n", zp);

	//#5
	*xp=5213;
	*yp=22;
	*zp=213123123;
	printf("Modified Values\n");
	printf("X: %u\n",x);
	printf("Y: %u\n",y);
	printf("Z: %u\n",z);

	//#6
	unsigned int f =  85;
	int*fp = &f;
	char*ffp = &f;

	//#7
	printf("\n");
	printf("fp: %p fp points to: %u\n", fp, *fp);
	printf("ffp: %p ffp points to: %u\n", ffp, *ffp);
	
	//#8
	printf("Unsigned integer f: %u\n", f);
	printf("Hex integer f: %x\n", f);
	
	//#9
	int i;
	for (i = 0; i < sizeof(f); i++) {
		printf("Address: %p Individual byte %d of unsigned int %hhu\n", ffp+i, i + 1, *(ffp+i));	
	}
	printf("\n");
	ffp = &f;


	//#10
	printf("Adding 1 to each byte\n");
	for (int i=0; i < sizeof(f); i++) {
		(*(ffp+i))+=1;
		ffp = &f;
		printf("Unsigned int value in decimal: %u in hex: %x \n",f,f);
	}
	
	
	for (i = 0; i < sizeof(f); i++) {
		printf("Address: %p Individual byte %d of unsigned int %hhu\n", ffp+i, i + 1, *(ffp+i));	
	}
	
	f=85;

	printf("\n");
	
	//#11
	printf("Adding 16 to each byte\n");
	for (int i=0; i < sizeof(f); i++) {
		(*(ffp+i))+=16;
		ffp = &f;
		printf("Unsigned int value in decimal: %u in hex: %x \n",f,f);
	}
	for (i = 0; i < sizeof(f); i++) {
		printf("Address: %p Individual byte %d of unsigned int %hhu\n", ffp+i, i + 1, *(ffp+i));	
	}	
	

	return 0;
}