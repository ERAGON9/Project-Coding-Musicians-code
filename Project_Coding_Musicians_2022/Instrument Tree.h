#pragma once

/*
Students: Lior Barak, Shalev kedar
Project Coding Musicians
try new thing
*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

#define EROR -1

typedef struct treeNode
{
	char* instrument; // instrument name
	unsigned short insId; // unique id number of every instrument
	struct treeNode* left;
	struct treeNode* right;

} TreeNode;

typedef struct tree
{
	TreeNode* root;

} InstrumentTree;


int findInsId(InstrumentTree tree, char* instrument);
int findInsIdRec(TreeNode* trNode, char* instrument);