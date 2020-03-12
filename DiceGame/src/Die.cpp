#include "Die.hpp"

Die::Die()
{
    srand(time(NULL)); // khoi tao sinh so ngau nhien
}

void Die::roll()//moi lan roll ra so ngau nhien
{
    number = rand() %6 + 1;//ngau nhien tu 1 den 6
}

int Die::get_number()
{
    return number;
}