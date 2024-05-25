#include <iostream>

int main()
{
    int nNumber = 0;
    int nStep   = 1;
    int nSqure  = 1;
    bool nFlag  = false;

    std::cin >> nNumber;

    for(int i=0; i<nNumber*2-1; i++)
    {
        for(int j=nNumber-nStep; j>0; j--)
            std::cout << " ";
        
        for(int k=0; k < nSqure; k++)
            std::cout << "*";

        if(i >= nNumber-1)
        {
            nFlag = true;
            nStep--;
            nSqure -= 2;
        }
        else
        {
            nFlag = false;
            nStep++;
            nSqure += 2;
        }

        std::cout << "\n";
    }


    return 0;
}