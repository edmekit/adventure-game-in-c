#include <iostream>

using namespace std;
int health;
string name;
struct hero
{
    string name;
    string weapon;
    int health;
};

int main()
{
    hero type[5];
    cout << "Enter your name: " << endl;
    cin >> name;
    cout << "Hello, " << name << ". Welcome to the game." << endl;    
}