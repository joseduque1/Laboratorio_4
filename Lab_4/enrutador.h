#ifndef ENRUTADOR_H
#define ENRUTADOR_H
#include <vector>
#include <map>
#include<iostream>

using namespace std;

class Enrutador
{
private:
    map<char, map<char,int> > nodos;
    map<string,int> rutas;

public:
    Enrutador();

    void newruta(string ruta,int costo);
    void conexion(char n, map<char,int> nn);
    void remover(char n);
    void verconexiones();
    void calruta(char origen, char destino, string ruta = "", int costo = 0);
    void verutas();
    bool isconect(char nod1, char nod2);
    void cambiarcosto(char aa, char bb, int n);
};

#endif // ENRUTADOR_H
