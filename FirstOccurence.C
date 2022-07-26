#include<stdio.h>
#include<malloc.h>

/*
**************************************************************
// Function Name     :      FirstOcurrence
// Input             :      Integer[],Integer,Integer
// Output            :      Integer
// Decription         :     Return the index of first ocurrence in an array
// Author             :     Kishan Vivek Jawale
// Date               :     26/7/2022   
**************************************************************
*/

int FirstOcurrence(int Arr[],int iSize,int ivalue)
{
    int iCnt=0;
    for(iCnt=0; iCnt < iSize+1 ; iCnt++)
    {
        if(Arr[iCnt]==ivalue)
        {
            break;
        }
    }

    return iCnt;
}

int main()
{
    int size=0;
    int *ptr=NULL;
    int icnt=0;
    int iRet=0;
    int iNo=0;

    printf("Enter the Size of Array:\n");
    scanf("%d",&size);

    ptr=(int *) malloc(size*sizeof(int));
    
    printf("Enter Array Elements:\n");
    for(icnt=0; icnt<size; icnt++)
    {
        scanf("%d",&ptr[icnt]);
    }

    printf("Enter the Number you want to search:\n");
    scanf("%d",&iNo);

    iRet=FirstOcurrence(ptr,size,iNo);
    
    if(iRet==size+1)
    {
        printf("Element is Not present in given Array");
    }
    else
    {
        printf("%d is the Index of First Occurence\n",iRet);
    }

    return 0;
}