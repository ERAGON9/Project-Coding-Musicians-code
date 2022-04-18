#pragma once

#include "Instrument Tree.h"

#define INITIAL 2

typedef struct
{
	unsigned short insId; // מספר מזהה יחודי עבור כלי נגינה שבאחריותכם לתת
	float price; // מחיר שדורש הנגן עבור נגינה בכלי זה

} MusicianPriceInstrument;

typedef struct mpilistnode // -+
{
	MusicianPriceInstrument data;
	struct mpilistnode* next;

}MPIListNode;

typedef struct mpilist // -+
{
	MPIListNode* head;
	MPIListNode* tail;

}MPIList;

typedef struct
{
	char** name; // מערך של השמות המרכיבים את שמו המלא
	MPIList instruments; // כלי הנגינה ברשימה מקושרת של MusicianPriceInstrument

} Musician;
