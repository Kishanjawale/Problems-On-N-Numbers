#include<stdio.h>
#include<malloc.h>
int SummationOfEven(int Arr[],int iSize)
{
    int iCnt=0;
    int Summation=0;
    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        if(Arr[iCnt]%2==0)
        {
            Summation=Summation+Arr[iCnt];
        }
    }
    return Summation;
}

int main()
{
    int *ptr = NULL;
    int icnt=0;
    int size;
    int iRet=0;
    printf("enter the size of Array:\n");
    scanf("%d",&size);

    ptr= (int*) malloc (size*sizeof(int));

    printf("Enter the array elements:\n");
 
    for(icnt=0;icnt<size;icnt++)
    {
        scanf("%d",&ptr[icnt]);
    }
    iRet=SummationOfEven(ptr,size);
    printf("Summation of Even Number From Array :%d",iRet);
    return 0;
}

   