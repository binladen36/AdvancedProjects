#ifndef Program_h
#define Program_h

#include <iostream>
#include <string>
#include "MenuProgram.h"

#define DAD_OPT         1
#define SON_OPT         2
#define DAD_PUNISH_OPT      3
#define SON_PUNISH_OPT      4
#define SHOW_OPT        5


#include <vector>
#include "FamilyMember.h"
#include "Punisher.h"
using namespace std;

class Program : public MenuProgram
{

public:
    ~Program();
protected:
    void print_menu();
    void do_task(const int &choice); // do_task(int choice);
private:
    vector<Member*> fmem;
    void add_dad();
    void add_son();
    void add_punish_for_dad();
    void add_punish_for_son();
    void show_info();
};

#endif 