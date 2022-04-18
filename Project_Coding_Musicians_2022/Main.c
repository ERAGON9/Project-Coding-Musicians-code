/*
Students:   Lior Barak
			Shalev Kedar 314714080
Project Coding Musicians
try new thing
*/

#include "Instrument_header.h"

void main()
{
    FILE* ptr;
    InstrumentTree instruments;
    int instCount;
    ptr = fopen("TestyMctestface.txt", "r");

    if (ptr == NULL) {
        printf("file can't be opened \n");
    }

    instruments = buildInstrumentsTree(ptr, &instCount);

    // freeAll();
	fclose(ptr);
}