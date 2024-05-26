#include <iostream>

using namespace std;

int main()
{
    // 약수라면 factor를, 배수라면 multiple을, 둘 다 아니라면 neither
    // 몫 quotient. 나머지 : remainder.
    int nQuotient, nRemainder = 0;

    while(1){
        int nA, nB  = 0;
        int nBuffer = 0;
        bool bFlag  = false;

        cin >> nA >> nB;

        if(nA == 0 || nB == 0)  break;

        if(nB > nA)
        {
            bFlag = true;
            nBuffer = nA;
            nA = nB;
            nB = nBuffer;
        }

        // nQuotient   = nA / nB;
        nRemainder  = nA % nB;

        if(nRemainder == 0)
        {
            if(true == bFlag)
                cout << "factor";
            else
                cout << "multiple";
        }
        else
        {
            cout << "neither";
        }
        cout << "\n";
    }
    return 0;
}