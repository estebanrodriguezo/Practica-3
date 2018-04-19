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
    new_cad=cad;//se copia la cadena
    for (int cont=0 ;cont<semilla; cont++){//este for invierte el primer bloque
        if(cad[cont]=='0'){
             new_cad[cont]='1';
            }
         else{
             new_cad[cont]='0';
            }
        }

    int tam_cad=cad.length(),i=0,n=semilla,v=2,h=semilla; //calculamos tamaño de la longitud de la cadena e inicializamos unas variables

    for(int j=0;j<=tam_cad;j+=semilla){// este for cuenta los ceros y unos de cada bloque
        int c_ceros=0, c_unos=0;
        for(  i; i<n;i++){
            if (cad[i]=='0'){
                c_ceros+=1;
            }
            else{
                c_unos+=1;
            }

        }
        n=semilla*v;//variable que se para al final de cada bloque (al que corresponda )
        v++;
        if(c_ceros==c_unos){
            for (int cont=h ;cont<(h+semilla); cont++){
                if(cad[cont]=='0'){
                     new_cad[cont]='1';
                    }
                 else{
                     new_cad[cont]='0';
                    }
                }
        }

        else if (c_ceros>c_unos){
            for (int cont=h+1 ;cont<(h+semilla); cont+=2){
                if(cad[cont]=='0'){
                      new_cad[cont]='1';
                    }
                 else{
                     new_cad[cont]='0';
                    }
                }
        }
        else if (c_ceros<c_unos){
            for (int cont=h+2 ;cont<(h+semilla); cont+=3){
                if(cad[cont]=='0'){
                      new_cad[cont]='1';
                    }
                 else{
                    new_cad[cont]='0';
                    }
                }
        }
        h+=semilla;




    }
return new_cad;

}


