#include <iostream>
#include <string>

int main()
{
    //test
    std::string strPalindrome;

    std::cin >> strPalindrome;

    bool bSuccess = true;
    for(int i=0; i<strPalindrome.length()/2; i++)
    {
        char a1 = strPalindrome[i];
        char a2 = strPalindrome[strPalindrome.length()-1-i];

        if(a1 != a2)
            bSuccess = false;
    }   

    if(bSuccess)
        std::cout << "1";
    else
        std::cout << "0";

    return 0;
}