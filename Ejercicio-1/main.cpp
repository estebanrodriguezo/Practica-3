#include <iostream>
#include "funciones.h"
#include <sstream>
using namespace std;

int main()
{
    string a,x;
    a="AbCd";
    x=binary(a);
    cout << binary(a) << endl;
    cout<<metodo_1(x,4)<<endl;
    return 0;
}
