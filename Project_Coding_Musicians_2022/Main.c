/*
Students: Lior Barak, Shalev
Project Coding Musicians

*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>


typedef struct treeNode
{
	char* instrument; // שם כלי הנגינה
	unsigned short insId; // מספר מזהה יחודי עבור כלי נגינה שבאחריותכם לתת
	struct treeNode* left;
	struct treeNode* right;

} TreeNode;

typedef struct tree 
{
	TreeNode* root;

} InstrumentTree;


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



int findInsId(InstrumentTree tree, char* instrument); 

void main()
{

}