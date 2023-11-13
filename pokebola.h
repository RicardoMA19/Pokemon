#ifndef POKEBOLA_H
#define POKEBOLA_H
#include <iostream>
#include <QString>
#include "pokemon.h"

class Pokebola
{
public:
    Pokebola();
    // Constructor
    Pokebola(QString entrenador, Pokemon* pokemonContenido);
    // Destructor
    ~Pokebola();
    // Método para llamar al Pokemon
    void llamarPokemon();
    // Método para regresar al Pokemon
    void regresarPokemon();

    Pokemon* getPokemonContenido();
    QString getEntrenador();
    short getPuntosDeVida();
    short getAtaque();

private:
    QString entrenador;
    Pokemon* pokemonContenido;
};

#endif // POKEBOLA_H
