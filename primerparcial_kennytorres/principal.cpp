#include <iostream>
#include "fstream"
using namespace std;

main(){

    cout << "serie 1" << endl;
    int numero, dia , num,i,p , s, t,d;

    cout<<"Ingresar el numero que desee multiplicar :"<<endl;

    cin>>numero;
    cout <<"tabla de multiplicar del: " << numero<< endl;

    for(int i=1;i<=10;i++){

        int multiplicacion = i * numero;
        cout<<numero <<" x "<< i <<"="<< multiplicacion <<endl;
    }


    cout << "serie 2" << endl;
        cout<< "tabla de multiplicar del 3"<<endl;
        i = 1;
        s= 3;
        cout<<endl;
        while (i<=10) {
            p = i*s;
            cout<<s<<" x "<<i<<" = "<<p<<endl;
            i=i+1;
        }


    cout<< "tabla de multiplicar del 7"<<endl;
    i = 1;
    t= 7;
    cout<<endl;
    while (i<=10) {
        p = i*t;
        cout<<t<<" x "<<i<<" = "<<p<<endl;
        i=i+1;
    }

    cout<< "tabla de multiplicar del 9"<<endl;
    i = 1;
    d= 9;
    cout<<endl;
    while (i<=10) {
        p = i*d;
        cout<<d<<" x "<<i<<" = "<<p<<endl;
        i=i+1;
    }






    cout << "serie 3" << endl;

    cout << "Dia de la semana"<< endl;
    cout<< "1 lunes" << endl;
    cout<< "2 martes" << endl;
    cout<< "3 miercoles" << endl;
    cout<< "4 jueves" << endl;
    cout<< "5 viernes" << endl;
    cout<< "6 sabado" << endl;
    cout<< "7 domingo" << endl;
    cout << "ingresar un numero de dia de la semana"<< endl;
    cin >> dia;
    switch (dia) {
        case 1 : printf( "\n   dia laboral" );
            break;
        case 2 : printf( "\n   dia laborla" );
            break;
        case 3 : printf( "\n   dia laboral" );
            break;
        case 4 : printf( "\n   dia laboral" );
            break;
        case 5 : printf( "\n   dia de descanso" );
            break;
        case 6 : printf( "\n   dia de descanso" );
            break;
        case  7 : printf( "\n   dia laboral" );
            break;

        default : printf( "\n  dato incorrecto" );
    }








    }




