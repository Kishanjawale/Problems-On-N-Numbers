#include<stdio.h>
#include<malloc.h>
/*
////////////////////////////////////////////////////////
Function Name : Largest
Input:Array of Interger, Size of Array
Output: Return the Largest number from the array 
////////////////////////////////////////////////////////
*/
int Largest(int Arr[],int iSize)
{
    register int iCnt=0;
    int LargestNo=Arr[0];
    for(iCnt=0;iCnt <iSize; iCnt++)
    {
        if(Arr[iCnt] > LargestNo)
        {
            LargestNo= Arr[iCnt];
        }
    }
   
    return LargestNo;
}

int main()
{
    int *ptr = NULL;
    register int icnt=0;
    int size=0;
    int iRet;
 
    printf("Enter the size of Array:\n");
    scanf("%d",&size);

    ptr= (int*) malloc (size*sizeof(int));

    printf("Enter the array elements:\n");
    for(icnt=0;icnt<size;icnt++)
    {
        scanf("%d",&ptr[icnt]);
    }
    iRet=Largest(ptr,size);
    printf("Largest Number from Array = %d",iRet);
    free(ptr);
    return 0;
}