#include <iostream>

int main()
{
    int nX = 0;
    int nY = 0;
    int nZ = 0;

    std::cin >> nX >> nY >> nZ;

    if(nX+nY+nZ == 180)
    {
        if((nX == nY) && (nX == nZ))
        {
            std::cout << "Equilateral";
        }
        else{
            if(nX == nY || nX == nZ || nY == nZ)
                std::cout << "Isosceles";
            else
                std::cout << "Scalene";
        }
    }
    else
        std::cout << "Error";

    return 0;
}