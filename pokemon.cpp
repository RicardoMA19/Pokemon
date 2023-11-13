#include "pokemon.h"
#include <QDebug>
#include <iostream>
#include <QString>

Pokemon::Pokemon(){

};
Pokemon::Pokemon(QString nombre, QString tipo, short nivel, short puntosDeVida, short puntosDeAtaque, short puntosDeDefensa)
    : nombre(nombre), tipo(tipo), nivel(nivel), puntosDeVida(puntosDeVida), puntosDeAtaque(puntosDeAtaque), puntosDeDefensa(puntosDeDefensa) {
    qInfo() << "Se ha creado un nuevo Pokemon: " << nombre;
}


    // Destructor
Pokemon::~Pokemon(){
        qInfo() << "Se ha destruido el Pokemon: " << nombre;
    }

void Pokemon::printDatos(){
        qInfo()<<"Nombre del pokemon: "<<nombre;
        qInfo()<<"Tipo: "<<tipo;
        qInfo()<<"Nivel:"<<nivel;
        qInfo()<<"Puntos de Vida: "<<puntosDeVida;
        qInfo()<<"Puntos de Ataque: "<<puntosDeAtaque;
        qInfo()<<"Puntos de Defensa: "<<puntosDeDefensa;
}

QString Pokemon::getNombre(){
        return nombre;
}

QString Pokemon::getTipo(){
        return tipo;
}

short Pokemon::getNivel(){
        return nivel;
}

short Pokemon::getPuntosDeVida(){
        return puntosDeVida;
}

short Pokemon::getPuntosDeAtaque(){
        return puntosDeAtaque;
}

short Pokemon::getPuntosDeDefensa(){
        return puntosDeDefensa;
}
