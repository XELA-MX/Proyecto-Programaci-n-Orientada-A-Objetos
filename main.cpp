#include "Clases/Pelicula.h"
#include "Clases/Serie.h"
#include <iostream>

using namespace std;

// PELICULA tipo video , nombre video, genero, calificacion, anioLanzamiento,
// duracion, id , nominaciones

// SERIE tipo video, nombre video, genero, calificacion, anioLanzamiento,
// duracion, id, cantidadEpisodios

int main() {
  Pelicula pelicula1("Pelicula", "El Padrino", "Drama", 10, 1972, 175, 1, 5);
  pelicula1.muestraDatos();
  cout << endl;
  Pelicula pelicula2("Pelicula", "El Padrino 2", "Drama", 10, 1974, 200, 2, 5);
  pelicula2.muestraDatos();
  cout << endl;
  Pelicula pelicula3("Pelicula", "El Padrino 3", "Drama", 10, 1975, 225, 3, 5);
  pelicula3.muestraDatos();
  cout << endl;
  Serie serie1("Serie", "Breaking Bad", "Drama", 9, 2008, 50, 1, 5);
  serie1.muestraDatos();
  cout << endl;
  Serie serie2("Serie", "Friends", "Comedia", 8, 1994, 22, 2, 10);
  serie2.muestraDatos();
  return 0;
}