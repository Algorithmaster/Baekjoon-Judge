#include <iostream>

int main()
{
    int nNumber = 0;
    std::cin >> nNumber;

    int nMax_X = -100000;
    int nMin_X = 100000;
    int nMax_Y = -100000;
    int nMin_Y = 100000;
    while(nNumber--)
    {
        int nX, nY = 0;
        std::cin >> nX >> nY;

        if(nMax_X < nX) nMax_X = nX;
        if(nMin_X > nX) nMin_X = nX;
        if(nMax_Y < nY) nMax_Y = nY;
        if(nMin_Y > nY) nMin_Y = nY;
    }

    std::cout << (nMax_X - nMin_X) * (nMax_Y - nMin_Y);

    return 0;
}