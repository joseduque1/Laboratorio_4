#include <iostream>
#include "enrutador.h"
#include <map>

using namespace std;

int main()
{
    int selec;
    int selec2;
    char nod;
    char con;
    int num;
    map<char,int> conect;
    Enrutador nodos;

    cout<<"Red de enrutadores."<<endl<<endl;
    cout<<"1- Ingresar informacion apartir de un archivo."<<endl;
    cout<<"2- Ingresar informacion por teclado."<<endl;
    cout<<"Ingrese el numeral correspondiente: ";
    cin>>selec;

    if(selec == 1){

    }
    else if(selec == 2){
        do{
            cout<<"Ingresa el nombre del nodo: ";
            cin>> nod;
                do{
                    cout<<"Esta conectado con: ";
                    cin>> con;
                    cout<<"Tiene un costo de: ";
                    cin>> num;
                    conect[con] = num;
                    cout<<"¿Tiene mas conexiones?"<<endl;
                    cout<<"1- Si."<<endl;
                    cout<<"2- No."<<endl;
                    cin>> selec2;

                 }while(selec2 == 1);
            nodos.conexion(nod,conect);
            conect.clear();
            cout<<"¿Desea ingresar otro nodo?"<<endl;
            cout<<"1- Si."<<endl;
            cout<<"2- No."<<endl;
            cin>> selec2;

        }while (selec2 == 1);

    do{
        cout<<"1- Agregar enrutadores."<<endl;
        cout<<"2- Remover enrutadores."<<endl;
        cout<<"3- Cambiar costo de conexiones."<<endl;
        cout<<"4- Costos envio de paquetes."<<endl;
        cout<<"5- Camino mas eficiente"<<endl;
        cout<<"6- Ver tabla de enrutamiento."<<endl;

        cin>> selec;
        if(selec == 1){
            do{
                cout<<"Ingresa el nombre del nodo: ";
                cin>> nod;
                    do{
                        cout<<"Esta conectado con: ";
                        cin>> con;
                        cout<<"Tiene un costo de: ";
                        cin>> num;
                        conect[con] = num;
                        cout<<"¿Tiene mas conexiones?"<<endl;
                        cout<<"1- Si."<<endl;
                        cout<<"2- No."<<endl;
                        cin>> selec2;

                     }while(selec2 == 1);
                nodos.conexion(nod,conect);
                conect.clear();
                cout<<"¿Desea ingresar otro nodo?"<<endl;
                cout<<"1- Si."<<endl;
                cout<<"2- No."<<endl;
                cin>> selec2;
               }while(selec2 == 1);
          }
        else if(selec == 2){
            do{
                cout<<"Ingresa el nombre del nodo que desea remover: ";
                cin>> nod;
                nodos.remover(nod);
                cout<<"¿Desea remover otro nodo?"<<endl;
                cout<<"1- Si."<<endl;
                cout<<"2- No."<<endl;
                cin>> selec2;
            }while(selec2 == 1);
        }
        else if(selec == 3){
            do{
                cout<<"Ingresa el nombre del nodo: ";
                cin>> nod;
                cout<<"Esta conectado con: ";
                cin>> con;
                cout<<"Ingresa el nuevo costo: ";
                cin>> num;
                nodos.cambiarcosto(nod,con,num);
                cout<<"¿Desea cambiar otro costo?"<<endl;
                cout<<"1- Si."<<endl;
                cout<<"2- No."<<endl;
                cin>> selec2;
               }while(selec2 == 1);

        }
        else if(selec == 4){
            char ori;
            char dest;
            cout<<"Ingrese el nodo de origen: ";
            cin>> ori;
            cout<<"Ingrese el nodo de destino: ";
            cin>> dest;
            nodos.calruta(ori,dest);
            nodos.verutas();

        }
        else if(selec == 6){
            nodos.verconexiones();

        }
    }while(selec <7);
}
}






