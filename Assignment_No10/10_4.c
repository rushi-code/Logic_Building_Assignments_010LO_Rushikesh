//Accept N numbers from user and frequency of 11 from it

#include<stdio.h>
#include<stdlib.h>

int Freq(int Arr[],int iLength)
{
    int iCnt = 0;
    int iCounter = 0;
    
    for(iCnt =0; iCnt<iLength;iCnt++)
    {
        if((Arr[iCnt])==11)
        {
            iCounter++;
        }
    }  
    return iCounter;
    
}

int main()
{
    int iSize = 0;
    int iCnt = 0;
    int iRet = 0;
    int *p = NULL;

    printf("Enter number of elements\n");
    scanf("%d",&iSize);

    p = (int*)malloc(iSize*sizeof(int));

    if(p==NULL)
    {
        printf("Unable to allocate memory\n");
        return -1;
    }

    printf("Enter %d elements\n",iSize);
    for(iCnt = 0; iCnt<iSize;iCnt++)
    {
        printf("Enter element %d:",iCnt+1);
        scanf("%d",&p[iCnt]);
    }

    iRet = Freq(p,iSize);
    printf("Freq of 11 is %d\n",iRet);

    return 0;

}