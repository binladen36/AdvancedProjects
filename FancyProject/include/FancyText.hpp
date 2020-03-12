#ifndef FancyText_hpp
#define FancyText_hpp

#include <iostream>
#include <string>

using namespace std;

class FancyText
{
    protected:
        string content;
    public:
        FancyText();
        FancyText(const string &content);
        void print() const;
    private:
        void print_bar(const int &n) const;
};

#endif