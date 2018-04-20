#include <iostream>
#include "funciones.h"
#include <sstream>
using namespace std;

int main()
{
    string a,x;
    a="A";
    x=binary(a);
    cout << binary(a) << endl;
    cout<<metodo_2(x,4)<<endl;
    return 0;
}
