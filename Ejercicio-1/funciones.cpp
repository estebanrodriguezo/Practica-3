#include <iostream>
#include <sstream>
#include "funciones.h"
using namespace std;

string binary(string str){
    int i=0,j=0,bin,resto,n;
    string cad, cadcopy;
    cad="";
    cadcopy="";
    for(Ci;str[i];i++){
        n=str[i];
        while(n>0){
            bin=n%2;
            if (bin==0){
                cadcopy+='0';
                j++;
            }
            else{
                cadcopy+='1';
                n--;
                j++;
            }
            n=n/2;
        }
        if(j<8){
            resto=8-j;
            while(resto>0){
                cadcopy+='0';
                resto--;
            }
        }
        for( j;j>=0;j--){
            cad+=cadcopy[j];
        }
        cadcopy="";
        j=0;
    }
    return cad;
}



