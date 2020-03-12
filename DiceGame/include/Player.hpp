#ifndef Player_hpp
#define Player_hpp

#include <iostream>
using namespace std;

class Player
{
    protected:
        Die *pDie;
    public:
    int roll();
    void set_die
}

class House : public Player
{
    public:
        void ask_countinue();
}

class CLient: public Player
{
    private:
        int balance;
    public:
        void deposit();
        int bet();
        void update_balanve(const int &amount);
        bool client_answer();
        int get_balance();
};

#endif /*Player_hpp*/