#include <iostream>

using namespace std;

int main()
{   
    // 0, 1, 2, 3, 4, 5..  번째
    // 4, 9, 25, 81....
    // 2, 3, 5, 9, 17, 33... 의 제곱승
    // 해당 값 = 직전수 + (직전수 - 1)

    int nNum = 0;
    int nPoint = 2;
    int nResult = 0;

    cin >> nNum;

    for(int i=0; i<nNum; i++)
    {
        nPoint = nPoint + (nPoint - 1);
    }

    nResult = nPoint * nPoint;

    cout << nResult;


    return 0;
}