/*
Students:   Lior Barak
			Shalev Kedar 314714080
Project Coding Musicians
try new thing
*/



#include "FunctionsT.h"
#include "FunctionsM.h"
#include "FunctionsC.h"

void main()
{
    FILE* ptr;
    InstrumentTree instruments;
    ptr = fopen("testyMacTest.txt", "r");

    if (ptr == NULL) {
        printf("file can't be opened \n");
    }

    instruments = buildInstrumentsTree(ptr);
    printTreeInorder(instruments);

    // freeAll();
	fclose(ptr);
}