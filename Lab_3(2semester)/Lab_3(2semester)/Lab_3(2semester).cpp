#include <iostream>
#include <string>
using namespace std;


class Player;
class FullName
{
private:
    string FirstName, MiddleName, LastName;
public:
    FullName()
    {
        FirstName = "Def";
        MiddleName = "Def";
        LastName = "Def";
    }
    FullName(string FirstName) 
    {
        this->FirstName = FirstName;
        MiddleName = "Def";
        LastName = "Def";
    }
    ~FullName()
    {

    }
    void setFirstName(string FirstName)
    {
        this->FirstName = FirstName;
    }
    void setMiddleName(string MiddleName)
    {
        this->MiddleName = MiddleName;
    }
    void setLastName(string LastName)
    {
        this->LastName = LastName;
    }
    string getFirstName()
    {
        return FirstName;
    }
    string getMiddleName()
    {
        return MiddleName;
    }
    string getLastName()
    {
        return LastName;
    }
    friend class Player;
};

class Player
{
private:
    string Player_ID;
    int Matches_Played, Goals_Scored;
public:
    Player()
    {
        Matches_Played = 0; Goals_Scored = 0; Player_ID = "0";
    }
    ~Player() {}
    void setPlayerName()
    {

    }
    void setPlayer_ID(string Player_ID)
    {
        this->Player_ID = Player_ID;
    }
    void setMatches_Played(int Matches_Played)
    {
        this->Matches_Played = Matches_Played;
    }
    void setGoals_Scored(int Goals_Scored)
    {
        this->Goals_Scored = Goals_Scored;
    }
    string getPlayer_ID()
    {
        return Player_ID;
    }
    int getMatches_Played()
    {
        return Matches_Played;
    }
    int getGoals_Scored()
    {
        return Goals_Scored;
    }
    void setPlayer_Name()
    {

    }
    friend void Increase_Goals_Scored(Player var);
};
void Increase_Goals_Scored(Player var)
{
    var.setGoals_Scored(var.getGoals_Scored() + 1);
}

int main()
{
    int choice;
    Player* p;
    p = new Player;
    cout << "[0]. Exit " << endl;
    cout << "[1]. Add Player Details " << endl;
    cout << "[2]. Display Player Details " << endl;
    cout << "[3].  Increase Player Goal Scored " << endl;
    cout << "[4]. Delete Player From Memory" << endl;
    cout << " Enter the option . . ." << endl;
    cin >> choice;
    do
    {
        switch (choice)
        {
        case 1:
        {
            cout << "Input Full Name of Player : " << endl;
            string first, middle, last;
            cin >> first >> middle >> last;
            p->setPlayer_Name();
                break;
        }
        case 2:
        {
            break;
        }
        case 3:
        {
            break;
        }
        case 4:
        {
            break;
        }


        }
    } while (choice != 0);
}