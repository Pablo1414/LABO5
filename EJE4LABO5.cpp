 void ejercicio4(){
        
        int d,m,a, ds, ms, as;
        cout<<"Ingrese el dia: "<<endl;
        cin>>d;
        cout<<"Ingrese el mes: "<<endl;
        cin>>m;
        cout<<"Ingrese el a"<<(char)164<<"o: "<<endl;
        cin>>a;

        if((d <= 0 || d >= 32) || (m <=0 || m >= 12)){

            cout<<" Error, vuelva a intentar "<<endl;
            cout << endl;

        }else{
            if ((d == 30 && (m == 4 || m == 6 || m == 9 || m == 11)) || (d == 29 && m == 2) || (d == 28 && m == 2 && ((a % 4 != 0) ||
             (a % 100) == 0) && (a % 400) != 0) || d == 31){

                ms = m+ 1;
                ds = 1;

            }else{ 

                ds = d + 1;
                ms = m;

            } 

            if (ds == 1 && ms == 13) 
            {
                ms = 1;
                as = a + 1;

            }else{

                as = a;

            }

           cout<<"fecha del dia siguiente: "<<ds<<" / "<<ms<<" / "<<as<<endl;

        }

    }

    int main() {
        int opcion=0;
        do{
            cout <<"Ejercicio 1: MCD "<<endl;
            cout <<"Ejercicio 2: HORA"<<endl;
            cout <<"Ejercicio 3: A"<<(char)165<<"O BISIESTO O NO"<<endl;
            cout <<"Ejercicio 4: FECHA "<<endl;
            cout <<"Ejercicio 5: SALIR "<<endl;
            cout <<"Ingrese la opcion del ejercicio que desea ocupar: "<<endl;
            cin>>opcion;

            switch(opcion){
                case 1: ejercicio1();
                break;
                case 2 :ejercicio2();
                break;
                case 3: ejercicio3();
                break;
                case 4 :ejercicio4();
                break;
            }

        }while(opcion!=5);

        cout << "  GRACIAS!  "<< endl;
        cout << endl;

        return 0;
    }   
