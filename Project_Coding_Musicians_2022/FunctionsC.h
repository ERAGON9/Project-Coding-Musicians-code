#ifndef __FunctionsC_h
#define __FunctionsC_h
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

typedef struct
{
	int day, month, year;
	float hour;

} Date;

typedef struct
{
	int num; 
	int inst; 
	char importance; 

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

typedef struct
{
	Date date_of_concert; 
	char* name; 
	CIList instrument; 

} Concert;



#endif