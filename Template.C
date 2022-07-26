#include<stdio.h>
#include<malloc.h>
int Array(int Arr[],int iSize)
{
    int iCnt=0;
    printf("Array Elements Are:\n");
    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        printf("%d\n",Arr[iCnt]);
    }

}
int main()
{

    int *ptr = NULL;
    int icnt=0;
    int size;
    printf("enter the size of Array:\n");
    scanf("%d",&size);

    ptr= (int*) malloc (size*sizeof(int));

    printf("Enter the array elements:\n");
    for(icnt=0;icnt<size;icnt++)
    {
        scanf("%d",&ptr[icnt]);
    }
    Array(ptr,size);
    return 0;
}