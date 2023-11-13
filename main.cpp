#include <QCoreApplication>
#include <QDebug>
#include <iostream>
#include <QString>
using namespace std;

#include "pokemon.h"
#include "pokebola.h"
#include "arena.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    // Crear Pokemon Charizard
    //Pokemon charizard("Charizard", "Fuego", 10, 50, 5, 3);

    // Crear Pokemon Blastoise
    //Pokemon blastoise("Blastoise", "Agua", 12, 55, 3, 4);

    //charizard.printDatos();
    //blastoise.printDatos();

        // Crear Pokebola para Ash con Charizard adentro
        //Pokebola pokebolaAsh("Ash", "charizard");

        // Llamar al Pokemon dentro de la Pokebola de Ash
        //pokebolaAsh.llamarPokemon();

        // Regresar al Pokemon a la Pokebola de Ash
        //pokebolaAsh.regresarPokemon();

        // Crear Pokebola para Gary Oak con Blastoise adentro
        //Pokebola pokebolaGary("Gary Oak", "blastoise");

        // Llamar al Pokemon dentro de la Pokebola de Gary
        //pokebolaGary.llamarPokemon();

        // Regresar al Pokemon a la Pokebola de Gary
        //pokebolaGary.regresarPokemon();

    Pokemon* charizard = new Pokemon("Charizard", "Fuego", 10, 50, 5, 3);
    Pokebola* pokebolaAsh = new Pokebola("Ash", charizard);

    Pokemon* blastoise = new Pokemon("Blastoise", "Agua", 12, 55, 3, 4);
    Pokebola* pokebolaGary = new Pokebola("Gary Oak", blastoise);


    charizard->printDatos();
    blastoise->printDatos();

    Arena* arena = new Arena(pokebolaAsh, pokebolaGary);

    arena->lucha();



    return 0;
    return a.exec();
}
