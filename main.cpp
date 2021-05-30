#include "retangulo.hpp"
#include "triangulo.hpp"
#include "circulo.hpp"
int main()
{
    Retangulo a;
    
    a.setLado(9);
   
    a.area();
    
    cout << endl;
    
    Triangulo b;

    b.setLado(9);
   
    b.area();
    
    cout << endl;

    Circulo c;

    c.setLado(9);
   
    c.area();
    
    cout << endl;
    return 0;
}
