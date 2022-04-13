/*
Students: Lior Barak, Shalev
Project Coding Musicians

*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>


typedef struct treeNode
{
	char* instrument; // �� ��� ������
	unsigned short insId; // ���� ���� ����� ���� ��� ����� ���������� ���
	struct treeNode* left;
	struct treeNode* right;

} TreeNode;

typedef struct tree 
{
	TreeNode* root;

} InstrumentTree;


typedef struct
{
	unsigned short insId; // ���� ���� ����� ���� ��� ����� ���������� ���
	float price; // ���� ����� ���� ���� ����� ���� ��

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
	char** name; // ���� �� ����� �������� �� ��� ����
	MPIList instruments; // ��� ������ ������ ������ �� MusicianPriceInstrument

} Musician;


typedef struct
{
	int day, month, year;
	float hour;

} Date;

typedef struct
{
	int num; // ��� ����� ���
	int inst; // ���� ���� �� ��� �����
	char importance; // ��� ���� ����� �� �� ����� ���� ����� �����

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
	Date date_of_concert; // ����� ���� ������
	char* name; // �� ������
	CIList instrument; // ��� ������ ������ ������ �� ConcertInstrument

} Concert;



int findInsId(InstrumentTree tree, char* instrument); 

void main()
{

}