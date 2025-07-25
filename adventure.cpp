#include <iostream>

using namespace std;
int health, mainclass;
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
}