#ifndef ARENA_H
#define ARENA_H
#include <iostream>
#include <QString>
#include "pokebola.h"



class Arena
{
public:
    Arena();

    Arena(Pokebola* pokebolaEntrenador1, Pokebola* pokebolaEntrenador2);

    ~Arena();

    void detPokemonAtacante();

    void lucha();

    void pokemon1Ataca();

    void pokemon2Ataca();

    void ganaPokemon1();

    void ganaPokemon2();

private:
    Pokebola* entrenador1;
    Pokebola* entrenador2;
    Pokemon* pokemonEntrenador1;
    Pokemon* pokemonEntrenador2;
    short puntosVidaPokemon1;
    short puntosVidaPokemon2;
    short puntosAtaquePokemon1;
    short puntosAtaquePokemon2;
    int pokemonAtacante;

};

#endif // ARENA_H
