#include <iostream>

using namespace std;

class Punkt
{
private:
    int x;
    int y;

public:
    void setX(int x)
    {
        this->x = x;
    }

    int getX()
    {
        return this->x;
    }

    void setY(int y)
    {
        this->y = y;
    }

    int getY()
    {
        return this->y;
    }

    Punkt() 
    {
        cout << "Utworzono obiekt\n";

        x = 0;
        y = 0;
    }

    ~Punkt()
    {
        cout << "Usunieto obiekt";
    }
};

int main() {
    Punkt p1;

    p1.setX(2);
    p1.setY(5);

    cout << "( " << p1.getX() << ", " << p1.getY() << " )";

    return 0;
}