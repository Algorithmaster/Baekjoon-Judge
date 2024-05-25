#include <iostream>

using namespace std;

int main()
{
    char cName[5][15] = {'\0', };

    for(int i=0; i<5; i++)
		scanf("%s", cName[i]);

    for(int i=0; i<15; i++)
    {
        for(int j=0; j<5; j++)
        {
            if((char)NULL != cName[j][i])
                cout << cName[j][i];
        }
    }
}
