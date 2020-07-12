bool eje3(){
        
        int anio;
        cout<<"Ingrese el a"<<(char)164<<"o: "<<endl;
        cin>>anio;
        //Condición de bisiesto
        if( anio % 4 == 0 && anio % 100 != 0 || anio % 400 == 0){

            cout<<"Si es bisiesto "<<endl;
            return true;

        }else{

            cout<<"No es bisiesto "<<endl;
            return false;
        }

    }
