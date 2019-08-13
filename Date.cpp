#include "Date.h"
#include <iostream>
#include <cctype>
#include <limits>

//prototypes//////////////////////////
int get_m();//only accept int (from 1 to 12)
int get_d();//only accept int (from 1 to 31)
int get_y();//only accept int (any)

//main////////////////////////////////
int main()
{

    return 0;
}
//definitions/////////////////////////
int get_m()//only accept int (from 1 to 12)
{
    int m;
    do
    {
        std::cout << "\nPlease enter month (1-12): \n"
        std::cin >> m;
    }
    while(m < 1 || m > 12);
    return m;
}

int get_d()//only accept int (from 1 to 31)
{
    int d;
    do
    {
        std::cout << "\nPlease enter day (1-31): \n"
        std::cin >> d;
    }
    while(day < 1 || day > 31);
    return d;
}
