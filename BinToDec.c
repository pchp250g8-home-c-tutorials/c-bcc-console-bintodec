#include <stdio.h>
#include <tchar.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>
#include <stdint.h>

int _tmain(int argc, _TCHAR* argv[]) 
{
<<<<<<< HEAD
	const unsigned int nMaxBinDigits = (unsigned int)(ceil(log2(UINT32_MAX)));
    long long nBinPower = 1L;
    long long nBinNum = 0L;
=======
	const unsigned int nMaxBinDigits = (unsigned int)(floor(log2(UINT32_MAX)));
    unsigned int nBinPower = 1;
    unsigned int nDecNum = 0;
>>>>>>> 465224fb5b4538af1b046671c299fc73c37ed1fd
    char szLine1[256],szLine2[256];
    size_t nStrLen1,nStrLen2;
    bool bIsRightString = false;
    system("cls");
    printf("Input a binary number\r\n");
    scanf("%[^\n]", szLine1);
    sscanf(szLine1, "%[0-1]", szLine2);
    nStrLen1 = strlen(szLine1);
    nStrLen2 = strlen(szLine2);
    bIsRightString = (nStrLen1 <= nMaxBinDigits) && (nStrLen1 == nStrLen2);
    if (!bIsRightString)
    {
        printf("Wrong binary number format!!!\r\n");
        getchar();
        getc(stdin);
        return 0;
    }
    for (unsigned int i = 0; i < nStrLen1; i++)
    {
        unsigned int nBinDigit = szLine1[nStrLen1 - 1 - i] - '0';
        nDecNum += (nBinDigit * nBinPower);
        nBinPower *= 2;
    }
    printf
    (
<<<<<<< HEAD
    	"The decimal equavalent of the binary number %s is %lld\r\n",
        szLine1, nBinNum
=======
    	"The decimal equavalent of the binary number %s is %d\r\n",
        szLine1, nDecNum
>>>>>>> 465224fb5b4538af1b046671c299fc73c37ed1fd
    );
    getchar();
    getc(stdin);
    return 0;
}
