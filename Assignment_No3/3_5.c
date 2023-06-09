//Write a pogram which accepts number from user and return difference between summation of all its factors and non factors

#include<stdio.h>
int FactDiff(int iNo)
{
    int iCnt = 0;
    int iFSum = 0;
    int iNFSum = 0;

    if(iNo<0)
    {
        iNo = -iNo;
    }
    for(iCnt = 1; iCnt<=(iNo/2);iCnt++)
    {
        if((iNo%iCnt)==0)
        {
        iFSum = iFSum +iCnt;
        }
    }
    
    for(iCnt = 1; iCnt<=(iNo);iCnt++)
    {
        if((iNo%iCnt)!=0)
        {
            iNFSum = iNFSum +iCnt;
        }
    }
    return iFSum -iNFSum;
}
int main()
{ 
    int iValue = 0;
    int iRet = 0;
    printf("Enter Number\n");
    scanf("%d",&iValue);

    iRet = FactDiff(iValue);
    printf("Difference between factors and  non factors is %d",iRet);
    return 0;
}

//Time Complexity is O:(N)
//Where N is input (Natural Number)