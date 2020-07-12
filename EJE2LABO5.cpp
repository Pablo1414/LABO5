void eje2(){
        
        int h=0;
            m=0;
            s=0;
        cout<<"Ingrese la hora: "<<endl;
        cin>>h;
        cout<<"Ingrese los minuto: "<<endl;
        cin>>m;
        cout<<"Ingrese los segundo: "<<endl;
        cin>>s;

        if(h<24 && m<60 && s<60){
             if(s<59 && s>=0){

                cout<<h<<"h : "<<m<<"m : "<<(s+1)<<"s";

            }else{
                 if(s==59){
                        if(m==59){
                            if(h==23){

                          cout<<"00h : 00m : 00s"<<endl;

                        }else{

                          cout<<(h+1)<<"h: 00m : 00s"<<endl;

                        }
                    }else{

                      cout<<h<<"h "<<(m+1)<<"m : 00s"<<endl;

                    }
                }
            }
        }else{

            cout<<"ERROR"<< endl;
            cout << endl;

        }

    }

