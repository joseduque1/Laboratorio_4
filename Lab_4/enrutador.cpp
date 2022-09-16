#include "enrutador.h"

void Enrutador::conexion(char n, map<char, int> nn)
{
    nodos[n] = nn ;
}

void Enrutador::remover(char n)
{
     for(auto it : nodos){
         if(n == it.first){
             nodos.erase(n);

             break;
         }
     }
}

void Enrutador::verconexiones()
{
    for(auto i: nodos){
        cout << i.first<<endl;
        for(auto it: i.second){
            cout<<it.first<<":"<<it.second<<endl;
        }
    }
}

void Enrutador::calruta(char origen, char destino, string ruta, int costo)
{
    int acum = 0;
    int origenaux = origen;

       ruta += origen;
       for(map<char,map<char,int>>::iterator it = nodos.begin(); it !=nodos.end(); it++){

           if(ruta.find(it->first) == string::npos){

               for(map<char,int>::iterator i = nodos[it->first].begin(); i !=nodos[it->first].end(); i++){

                   cout<<ruta<<" : COSTO :"<<costo<<" : "<<it->first<<" : "<<i->second<<" : "<<nodos[origen].size()<<" : "<<endl;
                   costo += i->second;
                   origen = it->first;
                   ruta += origen;
                   if(origen == destino){

                       acum++;
                       cout<<ruta<<" : COSTO :"<<costo<<endl;


                       if(acum == nodos[origenaux].size()){
                           break;
                       }

                       costo=0;
                       it = nodos.begin();
                       ruta = origenaux;
                       it++;
                       cout<<"----------------------------------"<<endl;

                     }
                   break;
               }
           }
      }
}

void Enrutador::verutas()
{
    for(auto i: rutas){
        cout<<i.first<<" : "<<i.second<<endl;
    }
}

bool Enrutador::isconect(char nod1, char nod2)
{
     for(auto i : nodos[nod1]){
         if(i.first == nod2){
         return true;
         }
     }
     return false;
}

void Enrutador::cambiarcosto(char aa, char bb, int n)
{
   nodos[aa][bb] = n;
   nodos[bb][aa] = n;
}

Enrutador::Enrutador()
{
    
}

void Enrutador::newruta(string ruta, int costo)
{

}

