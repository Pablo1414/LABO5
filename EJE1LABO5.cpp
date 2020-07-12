#include <iostream>
#include <math.h>

using namespace std;

    int mcd(int a, int b){

        if(b==0){
            return a;

        }else {

            mcd(b,a%b);
        }

    }

    void  eje1(){
        
        int a=0,
            b=0;
        do{
            cout <<"Ingrese el primer numero: "<<endl;
            cin>>a;
            if(a<0){

                cout <<"Ingrese un numero entero y positivo: "<<endl;

            }
        }while(a<0);
        do{
            cout <<"Ingrese el segundo numero: "<<endl;
            cin>>b;
            if(b<0){

                cout <<"Ingrese un numero entero y positivo: "<<endl;

            }
        }while(b<0);

        cout << "MCD (euclides): " << mcd(a,b) << endl;
        cout << endl;
    }

