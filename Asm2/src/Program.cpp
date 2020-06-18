#include "Program.h"
#include "FamilyMember.h"
#include "Punisher.h"

void Program::print_menu()
{
    cout << "Punish program" << endl;
    cout << "1. Enter Dad name" << endl;
    cout << "2. Enter Son name" << endl;
    cout << "3. Enter Dad Punish Option" << endl;
    cout << "4. Enter Son Punish Option" << endl;
    cout << "5. Show info" << endl;
    cout << "0. Exit" << endl;
    cout << "----------------------------------------------" << endl;
}

void Program::do_task(const int &choice)
{
    switch (choice) {
        case DAD_OPT:
            add_dad();
            break;
        case SON_OPT:
            add_son();
            break;
        case DAD_PUNISH_OPT:
            add_punish_for_dad();
            break;
        case SON_PUNISH_OPT:
            add_punish_for_son();
            break;
        case SHOW_OPT:
            show_info();
            break;
        default:
            cout << "Invalid option!" << endl;
            break;
    }
}

void Program::add_dad()
{
    cout << "Enter dad name: ";
    string name;
    cin >> name;
    cout << "Enter damage: ";
    double damage;
    cin >> damage;
    

    Dad *dad = new Dad (name, damage);
      
    fmem.push_back(dad);
}

void Program::add_son()
{
    cout << "Enter son name: ";
    string name;
    cin >> name;
    cout << "Enter damage: ";
    double damage;
    cin >> damage;

    
    Son *son = new Son(name, damage);
    

    fmem.push_back(son);
}

void Program::add_punish_for_dad()
{
    cout<< "Choose duster punish option";
    PunishBehavior *behavior = new DusterPunish();
    

}

void Program::add_punish_for_son()
{

}

void Program::show_info()
{
    
  
}

Program::~Program()
{
   
}