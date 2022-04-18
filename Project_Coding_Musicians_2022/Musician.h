#pragma once

#include "Instrument Tree.h"

#define INITIAL 2

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
