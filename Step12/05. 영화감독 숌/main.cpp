#include <iostream>
#include <string> 

using namespace std;

int main()
{
    int nNum = 0;
    int nPoint = 666;

    cin >> nNum;
    string str = "";
    while(nNum > 0)
    {
        str = to_string(nPoint);

        if(str.find("666") != -1)
        {
            nNum--;
        }

        nPoint++;
    }

    cout << nPoint-1;

    return 0;
}