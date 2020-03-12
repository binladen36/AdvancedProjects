#include "FancyText.hpp"

FancyText::FancyText(const string &content)
{
    this ->content = content;
}

FancyText::FancyText()
{
    content = "Hello";
}

void FancyText::print() const
{
    int n = (int) content.size();
    print_bar(n+2);
    cout << "*" << content << "*" <<endl;
    print_bar(n+2);
}

void FancyText::print_bar(const int &n) const
{
    for (int i = 0; i < n ; i ++)
        cout << "~";

    cout << endl;
}
