
#include "Musician.h" // include inside at the begining a call for "Instrument Tree.h"

/*
Students:   Lior Barak
			Shalev Kedar 314714080
Project Coding Musicians
try new thing
*/




#include "FunctionsT.h"
#include "FunctionsM.h"
#include "FunctionsC.h"



typedef struct
{
	int day, month, year;
	float hour;

} Date;

typedef struct
{
	int num; // כמה מאותו כלי
	int inst; // מספר מזהה של כלי נגינה
	char importance; // האם לכלי נגינה זה יש תקציב עבור נגנים יקרים

} ConcertInstrument;

typedef struct clilistnode // -+
{
	ConcertInstrument data;
	struct clilistnode* next;

}CIListNode;

typedef struct cilist // -+
{
	CIListNode* head;
	CIListNode* tail;

}CIList;


void main()
{
    FILE* ptr;
    InstrumentTree instruments;
    int instCount;
    ptr = fopen("TestyMctestface.txt", "r");

    if (ptr == NULL) 
	{
        printf("file can't be opened \n");
    }

    instruments = buildInstrumentsTree(ptr, &instCount);

    // freeAll();
	fclose(ptr);

}