#include <iostream>
#include <random>
#include <ctime>

using namespace std;

class Drob
{
private:
    int chess;
    int znam;

public:

    void Enter() const
    {
        cout << "Chess: " << chess << "\tZnam: " << znam << endl;
    }

    void Input(int a = rand() % 41 - 20, int b = rand() % 41 - 100)
    {
        if (b == 0)
        {
            cout << "ERROR" << endl;
            b = 1;
        }
        chess = a;
        znam = b;
    }
};

int main()
{
    Drob a;
    a.Input();
    a.Enter();

    Drob b;
    b.Input(1, 2);
    b.Enter();

}
