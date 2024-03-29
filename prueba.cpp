#include <iostream>
using namespace std;
//kslfjsdjfkldsjfkdsjfkldshnfkdlskfaksd
class Punto
//ffsdfdsfdsfdsfsdfs
{
private:
    int x, y;
//fsdfsfdsfdsfdsfsd
//dasdsdadsada
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
    int tonto;
    Punto punto1;

    punto1.setPunto(15, 10);
    cout << punto1.getPuntox() << endl;
    cout << punto1.getPuntoy();
    return 0;
}
