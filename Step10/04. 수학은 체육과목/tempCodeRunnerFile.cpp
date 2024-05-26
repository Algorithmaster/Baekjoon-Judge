#include <iostream>

int main()
{
    int nA = 0;

    std::cin >> nA;

    int nResult = 0;
    for(int i=0; i<nA; i++)
    {
        nResult += 4;
    }

    std::cout << nResult;

    return 0;
}