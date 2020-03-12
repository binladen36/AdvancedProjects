#ifndef MathProgram_hpp
#define MathProgram_hpp

#include <iostream>
#include <string>
#include "MenuProgram.hpp"

#define CIRCLE_OPT 1
#define RECTANGLE_OPT 2
#define SQUARE_OPT 3
#define SHOW_OPT 4

#include <vector>
#include "Shape.hpp"

using namespace std;

class MathProgram : public MenuProgram
{   
    public:
        ~MathProgram();
    private:
        vector<Shape*> shape;
        void add_rectangle();
        void show_info();
        void add_square();
        void add_circle();
    protected:
        void print_menu();
        void do_task(const int &choice);
};

#endif /*MathProgram_hpp*/