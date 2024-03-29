#include <iostream>
using namespace std;

class Punto
{
private:
    int x, y;

public:
    Punto();
    void setPunto(int, int);
    int getPuntox();
    int getPuntoy();
};

Punto::Punto()
{
}

void Punto::setPunto(int _x, int _y)
{
    x = _x;
    y = _y;
}

int Punto::getPuntox()
{
    return x;
}
int Punto::getPuntoy()
{
    return y;
}

int main()
{
    Punto punto1;

    punto1.setPunto(15, 10);
    cout << punto1.getPuntox() << endl;
    cout << punto1.getPuntoy();
    return 0;
}
