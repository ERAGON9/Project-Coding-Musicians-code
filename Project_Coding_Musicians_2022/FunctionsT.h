#ifndef __FunctionsT_h
#define __FunctionsT_h
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

typedef struct treeNode
{
	char* instrument; 
	unsigned short insId; 
	struct treeNode* left;
	struct treeNode* right;

} TreeNode;

typedef struct tree
{
	TreeNode* root;

} InstrumentTree;

#define MAX_LINE 150

//This function checks if the memory allocation has failed.
void checkAllocation(void* ptr);

//This function creates a new TreeNode and insert it with the given data (and NULL as its
//left and right nodes). The function returns the newly created TreeNode.
TreeNode* newTreeNode(char* data, int* Id);

//This function creates a binary search tree of a given sorted array of strings.
TreeNode* buildInstrumentsTreeRec(char** arr, int left, int right, int* id);

//This function copys the given 'src' array's data into the given 'dest' array.
void copyArr(char** dest, char** src, int size);

//This function merges two given lexicographically sorted arrays into one sorted array ('res').
void merge(char** a1, int n1, char** a2, int n2, char** res);

//This function lexicographically sorts a given array of strings recorsively.
void mergeInstruments(char** arr, int size);

//This functions creates a lexicographically sorted array of strings of a given text file lines
//(each line in the given text file is a string in the returned array).
char** sortedInstrumentsArr(FILE* txt, int* counter);

//This function creates and returns a binary search tree (while each of its nodes' data is
//a line from the given text file).
InstrumentTree buildInstrumentsTree(FILE* text);




#endif