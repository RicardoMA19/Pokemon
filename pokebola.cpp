#include "pokebola.h"
#include <QDebug>
#include <iostream>
#include <QString>

Pokebola::Pokebola(){
};
        // Constructor
Pokebola::Pokebola(QString entrenador, Pokemon* pokemonContenido)
    : entrenador(entrenador), pokemonContenido(pokemonContenido) {
    qInfo() << "Se ha creado una nueva Pokebola para " << entrenador;
}

        // Destructor
Pokebola::~Pokebola() {

    qInfo() << "Se ha destruido la Pokebola de " << entrenador;
}

        // Método para llamar al Pokemon
void Pokebola::llamarPokemon(){

    qInfo() << pokemonContenido << " ¡Yo te elijo! ";
};

        // Método para regresar al Pokemon
void Pokebola::regresarPokemon() {

             qInfo() << pokemonContenido << " ¡Regresa! ";
};

Pokemon* Pokebola::getPokemonContenido(){
             return pokemonContenido;
}

QString Pokebola::getEntrenador(){
             return entrenador;
}

short Pokebola::getPuntosDeVida(){
             return pokemonContenido->getPuntosDeVida();
}

short Pokebola::getAtaque(){
             return pokemonContenido->getPuntosDeAtaque();
}
