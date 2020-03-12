#include "DiceGame.hpp"

void DiceGame::play()
{
    // tao ra 1 con xuc sac
    Die *pdie = newDie();
    client.set_die(pdie); // gan xuc sac cho client
    house.set_die(pdie); // gan xuc sac cho house
}

void DiceGame::play()
{
    // client se deposit tien vao tai khoan
    client.deposit();
    //lap cac buoc
    bool game_countinue = true;
    while (game_countinue)
    {
        //dat cuoc
        int amount = client.bet();
        //client tung xuc sac
        int client_number = client.roll();
        cout << "CLient number: " << client_number << endl;
        //house tung xuc sac
        int house_number = house.roll();
        cout << "House number : " << house_number << endl;
        //so sanh so diem de cap nhat tai khoan client
        int status = compare(client_number, house_number);
        // de cap nhat tai khoan cua client
        update_client(status, amount);
        //neu tai khoan het tien -> thoat game
        if (client.get_balance()==0)
        {
            cout <<"Out of money. Game Over!" << endl;
            game_countinue = false;
        }
        else
        {
            house.ask_countinue();
            game_countinue = client.client_answer();
        }
        int DiceGame::compare(const int &client_number, const int &house_number)
        {
            if(client_number > house_number)
            {
                cout << "You win" << endl;
            }
            if(client_number < house_number)
            {
                cout << "You lose" << endl;
            }
            cout << "Draw game!" << endl;
            return DRAW;
        }

        void DiceGame::update_client(const int &status, const int &amount)
        {
            if (status == WIN) client.update_balance(amount);
            else if (status==LOOSE) client.update_balance(0 - amount);
        }
    }
}