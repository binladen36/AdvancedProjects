#include "MenuProgram.hpp"

void MenuProgram::run()
{
    bool running = true;

    while (running)
    {
        print_menu();
        int choice = get_choice();
        do_task(choice);

        if (choice == EXIT) running = false;
    }
}

int MenuProgram::get_choice()
{
    cout << "Your Choice:";
    int choice;
    cin >> choice;

    return choice;
}