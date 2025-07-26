#include <iostream>

using namespace std;
int health, mainclass, path, action;
string name;

int IntOnly(const string& prompt) 
{
    int choice;
    while (true)
    {
        cout << prompt;
        cin >> choice;

        if (cin.fail())
        {
            cout << "Please enter a number." << endl;
            cin.clear();
            cin.ignore(10000, '\n');
            continue;
        }
        return choice;
    }
}
struct hero
{
    string name;
    string weapon;
    int health;
};

int main()
{
    hero type[3];
    cout << "Enter your name: " << endl;
    cin >> name;
    cout << "Hello, " << name << ". Welcome to the game." << endl;    
    cout << endl;

    mainclass = IntOnly("Please choose a class:\n1. Warrior\n2. Mage\n3. Archer\n");
    cout << endl;

    if (mainclass == 1)
        {
            type[0].name = "Warrior";
            type[0].health = 100;
            type[0].weapon = "Sword";
            cout << type[0].name << " has " << type[0].health << " health and is wielding a " << type[0].weapon << "." << endl;
        }
    else if (mainclass == 2)
        {
            type[1].name = "Mage";
            type[1].health = 50;
            type[1].weapon = "Staff";
            cout << type[1].name << " has " << type[1].health << " health and is wielding a " << type[1].weapon << "." << endl;
        }
    else if (mainclass == 3)
        {
            type[2].name = "Archer";
            type[2].health = 75;
            type[2].weapon = "Bow";
            cout << type[2].name << " has " << type[2].health << " health and is wielding a " << type[2].weapon << "." << endl;
        }
    
    cout << endl;

    cout << "Congratulations, " << name << "! You are now a " << type[mainclass -1].name << "." << endl;
    cout << "Let's head out to the world." << endl;

    cout << endl;

    cout << "Infront of you is a path." << endl;
    cout << "You can go left or right. The left path is a forest, and the right path is a cave." << endl;

    cout << endl;

    path = IntOnly("Which way to you want to go? \n1. Left\n2. Right\n");

    if (path == 1)
    {
        cout << endl;
        cout << "You have entered the forest." << endl;
        cout << "You encountered a goblin! What do you do?" << endl;
        action = IntOnly("1. Attack\n2. Hide\n");

        if (action == 1)
        {
            cout << "You attacked the goblin and it called its allies lmao" << endl;
            cout << "You died." << endl;
        }
        
        else if  (action == 2)
        {
            cout << "Boo! The goblin found you" << endl;
            cout << "You died." << endl;
        }
    }
    else if (path == 2)
    {   
        cout << endl;
        cout << "You have entered the cave." << endl;
        cout << "You encountered a skeleton! What do you do?" << endl;
        action = IntOnly("1. Attack\n2. Hide\n");

        if (action == 1)
        {
            cout << "You attacked the skeleton and broke it apart." << endl;
            cout << "You only remembered the fact that skeletons are immortal while trying to collect the loots." << endl;
            cout << "You died." << endl;
        }

        else if (action == 2)
        {
            cout << "Congrats! You found the only way to survive this part." << endl; 
        }
    }
}