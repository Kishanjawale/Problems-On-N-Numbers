#include<stdio.h>
#include<malloc.h>
int SummationOfEven(int Arr[],int iSize)
{
    int iCnt=0;
    int SummationOfEven=0;
    int SummationOfOdd=0;
    int Difference=0;
    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        if(Arr[iCnt]%2==0)
        {
            SummationOfEven=SummationOfEven+Arr[iCnt];
        }
        else
        {
            SummationOfOdd=SummationOfOdd+Arr[iCnt];
        }
    }
    Difference=SummationOfEven-SummationOfOdd;
    return Difference;
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
    printf("Difference between Summation of Even Number And Odd number :%d",iRet);
    return 0;
}

   