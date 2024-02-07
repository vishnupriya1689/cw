#include <stdio.h>
#include <memory.h>

void Out_Of_Bounds_Write_Ex1(); 
void Out_Of_Bounds_Write_Ex2();

int returnchunksize(void *);

int returnchunksize(void *) 
{
    return -1;
}

int main(int argc, char const *argv[])
{
    Out_Of_Bounds_Write_Ex1();
    Out_Of_Bounds_Write_Ex2();

    return 0;
}

void Out_Of_Bounds_Write_Ex1()
{
    //Out of Bounds write -- CWE 787
    int id[3];
    /* Writing array with more than it can hold */
    id[0] = 1;
    id[1] = 2;
    id[2] = 3;
    id[3] = 4;
}

void Out_Of_Bounds_Write_Ex2()
{
    int *srcbff; 
    int *dstbuff;

    /* Using memcpy with checking return size -1 */
    memcpy(dstbuff, srcbff, (returnchunksize(dstbuff) - 1));
}