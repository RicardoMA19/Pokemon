#ifndef POKEMON_H
#define POKEMON_H
#include <iostream>
#include <QString>


class Pokemon {
public:
    Pokemon();
    Pokemon(QString nombre, QString tipo, short nivel, short puntosDeVida, short puntosDeAtaque, short puntosDeDefensa);
    void printDatos();
    ~Pokemon();
    QString getNombre();
    QString getTipo();
    short getNivel();
    short getPuntosDeVida();
    short getPuntosDeAtaque();
    short getPuntosDeDefensa();

private:
    QString nombre;
    QString tipo;
    short nivel;
    short puntosDeVida;
    short puntosDeAtaque;
    short puntosDeDefensa;
};

#endif // POKEBOLAS_H

