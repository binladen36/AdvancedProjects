#ifndef DiceGame_hpp
#define DiceGame_hpp

#include <iostream>
#include "Player.hpp"

using namespace std;

class DiceGame
{
    private:
        Client client;
        House house;
        const int WIN = 1;
        const int LOOSE = 2;
        const int DRAW = 3;

    public:
        void play();
        DiceGame();
    private:
        //so sanh diem va tra ve status (WIN/LOOSE/DRAW)
        int compare(const int &client_number, const int &house_number);
        //dua vao status (WIN/LOOSE/DRAW) de cap nhat balance cua client)
        void update_client(const int&status, const int &amount);
};

#endif /* DiceGame_hpp */