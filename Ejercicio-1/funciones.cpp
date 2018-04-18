#include <iostream>
#include <sstream>
#include "funciones.h"
using namespace std;

string binary(string str){
    int i=0,j=0,bin,resto,n;
    string cad, cadcopy;
    cad="";
    cadcopy="";
    for(i;str[i];i++){
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


string metodo_1(string cad,int semilla){

    string new_cad="";
    new_cad=cad;
    for (int cont=0 ;cont<semilla; cont++){
        if(cad[cont]=='0'){
             new_cad[cont]='1';
            }
         else{
             new_cad[cont]='0';
            }
        }

    int /*bloque=((cad.length())/semilla),*/ tam_cad=cad.length(),i=0,n=1;

    for(int j=0;j<tam_cad;j+=semilla){
        int c_ceros=0, c_unos=0;
        for( n, i; i<(semilla*n);i++,n+=semilla){
            if (cad[i]=='0'){
                c_ceros+=1;
            }
            else{
                c_unos+=1;
            }

        }
        if(c_ceros==c_unos){
            for (int cont=0 ;cont<j; cont++){
                if(cad[cont]=='0'){
                     new_cad[cont]='1';
                    }
                 else{
                     new_cad[cont]='0';
                    }
                }
        }

        else if (c_ceros>c_unos){
            for (int cont=1 ;cont<j; cont+=2){
                if(cad[cont]=='0'){
                      new_cad[cont]='1';
                    }
                 else{
                     new_cad[cont]='0';
                    }
                }
        }
        else if (c_ceros<c_unos){
            for (int cont=1 ;cont<j; cont+=3){
                if(cad[cont]=='0'){
                      new_cad[cont]='1';
                    }
                 else{
                    new_cad[cont]='0';
                    }
                }
        }




    }
return new_cad;

}


