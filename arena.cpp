#include "arena.h"
#include <QDebug>
#include <iostream>
#include <QString>
using namespace std;
Arena::Arena(){

}
Arena::Arena(Pokebola* pokebolaEntrenador1, Pokebola* pokebolaEntrenador2)
               : entrenador1(pokebolaEntrenador1), entrenador2(pokebolaEntrenador2),
               pokemonEntrenador1(pokebolaEntrenador1->getPokemonContenido()), pokemonEntrenador2(pokebolaEntrenador2->getPokemonContenido()),
               puntosVidaPokemon1(pokemonEntrenador1->getPuntosDeVida()), puntosVidaPokemon2(pokemonEntrenador2->getPuntosDeVida()),
               puntosAtaquePokemon1(pokemonEntrenador1->getPuntosDeAtaque()), puntosAtaquePokemon2(pokemonEntrenador2->getPuntosDeAtaque()), pokemonAtacante(0) {
    qInfo()<< "¡Comienza la batalla en la Arena!";
}

Arena::~Arena() {
    qInfo() << "La batalla en la Arena ha concluido.";
}

void Arena::detPokemonAtacante() {
    qInfo() << "Quien ataca? Ingrese 1 para " << entrenador1->getEntrenador() << " o 2 para " << entrenador2->getEntrenador() << ": ";
    cin >> pokemonAtacante;
}

void Arena::lucha() {
    detPokemonAtacante();

    while (puntosVidaPokemon1 > 0 && puntosVidaPokemon2 > 0) {
        if (pokemonAtacante == 1) {
            pokemon1Ataca();
        } else if (pokemonAtacante == 2) {
            pokemon2Ataca();
        }
        qInfo()<<"La batalla continua, "<<pokemonEntrenador1->getNombre()<< " tiene "<<puntosVidaPokemon1<<" puntos de Vida y "<<pokemonEntrenador2->getNombre()<< " tiene "<<puntosVidaPokemon2<<" puntos de Vida.";
        detPokemonAtacante();
    }
}

void Arena::pokemon1Ataca() {
    puntosVidaPokemon2 -= puntosAtaquePokemon1;
    qInfo()<<pokemonEntrenador1->getNombre()<< " ataca y hace "<<pokemonEntrenador1->getPuntosDeAtaque()<<" puntos de danio a "<<pokemonEntrenador2->getNombre();
    if (puntosVidaPokemon2 <= 0) {
        ganaPokemon1();
    }
}

void Arena::pokemon2Ataca() {
    puntosVidaPokemon1 -= puntosAtaquePokemon2;
    qInfo()<<pokemonEntrenador2->getNombre()<< " ataca y hace "<<pokemonEntrenador2->getPuntosDeAtaque()<<" puntos de danio a "<<pokemonEntrenador1->getNombre();
    if (puntosVidaPokemon1 <= 0) {
        ganaPokemon2();
    }
}

void Arena::ganaPokemon1() {
   qInfo() << pokemonEntrenador1->getNombre() << " Gana!  " << entrenador1->getEntrenador() << " es ahora todo un Maestro Pokemon. ¡Felicidades!";
}

void Arena::ganaPokemon2() {
    qInfo() << pokemonEntrenador2->getNombre() << " Gana!  " << entrenador2->getEntrenador() << " es ahora todo un Maestro Pokemon. ¡Felicidades!";
}
