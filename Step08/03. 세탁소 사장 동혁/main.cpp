#include <iostream>

using namespace std;

int main()
{

    int nMaxNum = 0;
    int coin[4] = {25, 10, 5, 1};
    cin >> nMaxNum;

    for(int i=0; i<nMaxNum; i++)
    {
        int nCount = 0;
        cin >> nCount;

        for(int j=0; j<4; j++)
        {
            cout << nCount / coin[j] << " ";
            nCount %= coin[j];
        }

        cout << '\n';
    }
    
    return 0;
}