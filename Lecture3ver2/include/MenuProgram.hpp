#ifndef MenuProgram_hpp
#define MenuProgram_hpp

#include <iostream>
#include <string>

#define EXIT 0

using namespace std;

class MenuProgram
{
    public:
        void run();
    protected:
        virtual void print_menu() = 0;
        int get_choice();
        virtual void do_task(const int &choice) = 0; // pure virtual method

};

#endif /* MenuProgram_hpp */