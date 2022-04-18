

#include "Musician.h" // include inside at the begining a call for "Instrument Tree.h"



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

typedef struct
{
	Date date_of_concert; // תאריך קיום ההופעה
	char* name; // שם ההופעה
	CIList instrument; // כלי הנגינה ברשימה מקושרת של ConcertInstrument

} Concert;


 

void main()
{
	

	
}