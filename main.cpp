#include <inetreg.h>
#include <cstring>
#include <iostream>
#include "logic.hpp"

using namespace std;

int main()
{
    setRussian();
    
    string answer;
    cout << "Вы хотите создать структуру данных Дек('y' - да, 'n' - нет):" << endl;
    if (answer == "y")
    {
        struct Dec* start = new Dec;
        fillDec(start);
        
        int tool = getTools();
        while (tool != 7)
        {
            switch (tool)
            {
            case 1:

                break;
            }
        }
        
    }


    return 0;
}