#include<stdio.h>
#include<malloc.h>
/*
////////////////////////////////////////////////////////
Function Name : CountOdd
Input:Array of Interger, Size of Array
Output: Return the Count  of Even Elements from the array 
////////////////////////////////////////////////////////
*/
int CountOdd(int Arr[],int iSize)
{
    register int iCnt=0;
    register int OddCounter=0;
    for(iCnt=0;iCnt < iSize; iCnt++)
    {
       if(Arr[iCnt] %2 != 0)
        {
            OddCounter++;
        }
    }
    return OddCounter;
}

int main()
{
    int *ptr = NULL;
    register int icnt=0;
    int size=0;
    int iRet=0;
 
    printf("Enter the size of Array:\n");
    scanf("%d",&size);

    ptr= (int*) malloc (size*sizeof(int));

    printf("Enter the array elements:\n");
    for(icnt=0;icnt<size;icnt++)
    {
        scanf("%d",&ptr[icnt]);
    }
    iRet=CountOdd(ptr,size);
    printf("Number of odd Numbers in given Array are: %d",iRet);
    free(ptr);
    return 0;
}