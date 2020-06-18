#ifndef _MenuProgram_H_
#define _MenuProgram_H_

#include <iostream>
#include <string>

#define EXIT 0

using namespace std;

class MenuProgram
{
public:
    void run();
protected:
    int get_choice();
    
    // pure virtual methods
    virtual void print_menu() = 0;
    virtual void do_task(const int &choice) = 0;
};
#endif 