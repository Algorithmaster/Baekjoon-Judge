#include <iostream>

using namespace std;

int factor(int nNumber, int nCount)
{
    if(nNumber <= 0)
        return 0;

    int nResult = 0;
    int nCnt = 0;

    for(int i=1; i<= nNumber/2; i++)
    {
        if(nNumber % i == 0)    nCnt++;

        if(nCount == nCnt)
        {
            nResult = i;
            break;
        }
    }

    if(nCount == nCnt+1)
        nResult = nNumber;

    return nResult;
}

int main()
{
    int nA, nB = 0;
    cin >> nA >> nB;
    int nResult = factor(nA, nB);
    cout << nResult;

    return 0;
}