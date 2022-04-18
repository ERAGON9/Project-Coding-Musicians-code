
#include "Instrument Tree.h"

int findInsId(InstrumentTree tree, char* instrument) // The function get a tree of instruments and a string (instrument name). It's return the insid of the instrument or EROR(-1) if not found.
{
	findInsIdRec(tree.root, instrument);
}

int findInsIdRec(TreeNode* trNode, char* instrument) // The function get a treeNode of instrument (the root at the start) and a string (instrument name). It's a recursive function that find the instrument insid and return it.
{
	if (trNode == NULL)
		return EROR;

	else
	{
		int compare = strcmp(instrument, trNode->instrument);

		if (compare == 0)
			return trNode->insId;

		else if (compare > 0)
			return findInsIdRec(trNode->right, instrument);

		else // compare < 0
			return findInsIdRec(trNode->left, instrument);
	}
}