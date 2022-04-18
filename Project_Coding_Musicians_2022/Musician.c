
#include "Musician.h"

Musician** createMusicianArr(int size)
{
    size = INITIAL;
	Musician**  MusicianGroup = (Musician**)malloc(sizeof(Musician*) * size);
    checkAllocateMusicianArrPtr(MusicianGroup);

    char** musiciansFile[20][150]; // will be reading from a file

    fillMusicianGroup(&MusicianGroup, size, musiciansFile);
}

void checkAllocateMusicianArrPtr(Musician** MusicianGroup) // // The function get a array to pointers to Musicians after try to allocate memory and test if the allocate succeeded.
{
    if (MusicianGroup == NULL)
    {
        printf("Not enough memory to allocate");
        exit(1);
    }
}

void fillMusicianGroup(Musician*** MusicianGroup, int size, char** musiciansFile) // The function...
{
    int fileRows, nameIndex;
    Musician** tempMusicianGroup = *MusicianGroup;

    char seps[] = " ,.;:?!-\t'()[]{}<>~_";
    char* token;

    for (fileRows = 0; fileRows < 20; fileRows++) // the number of lines
    {
        nameIndex = 0;
        token = strtok(musiciansFile[fileRows], seps);

        while (token != NULL) // run on one line
        {
            if (nameIndex == 0)
            {
                strcpy(tempMusicianGroup[fileRows]->name[nameIndex], token);
                strcat(tempMusicianGroup[fileRows]->name[nameIndex], "\0");
                nameIndex++;
            }

            else
            {
                if (isInstrument(token) == true)
                {

                }





            }


            token = strtok(NULL, seps);
        }




    }





}

bool isInstrument(char* string)
{

}