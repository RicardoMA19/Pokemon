#ifndef POKEBOLAS_H
#define POKEBOLAS_H


class Pokebolas
{
public:
    Pokebolas();
    // Constructor
    Pokebola(QString duenio, QString pokemonContenido);

    // Destructor
    ~Pokebola() {
        std::cout << "Se ha destruido la Pokebola de " << duenio.toStdString() << std::endl;
    }

    // Método para llamar al Pokemon
    void llamarPokemon() const {
        std::cout << pokemonContenido.toStdString() << " ¡Yo te elijo! " << std::endl;
    }

    // Método para regresar al Pokemon
    void regresarPokemon() const {
        std::cout << pokemonContenido.toStdString() << " ¡Regresa! " << std::endl;
    }

private:
    QString duenio;
    QString pokemonContenido;
};

#endif // POKEBOLAS_H
