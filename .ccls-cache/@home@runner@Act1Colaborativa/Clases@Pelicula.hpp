#include <iostream>
#include <string>
#include "Pelicula.h"
#include "Video.h"

using namespace std;

Pelicula::Pelicula() : Video(){
  nominaciones = 0;
}
Pelicula::Pelicula(string tipoVideo_, string nombreVideo_, string genero_, int calificacion_, int anioLanzamiento_, int duracion_, int id_ , int nominaciones_): Video(tipoVideo_, nombreVideo_, genero_, calificacion_, anioLanzamiento_, duracion_, id_)){
  nominaciones = nominaciones_;
}

void Pelicula::muestraDatos(){
  cout << "=== Datos de la pelicula ===" << endl;
  cout << "Tipo de video: " << tipoVideo << endl
  cout << "Nombre del video: " << nombreVideo << endl;
  cout << "Genero: " << genero << endl;
  cout << "Calificacion: " << calificacion << endl;
  cout << "Anio de lanzamiento: " << anioLanzamiento << endl;
  cout << "Duracion: " << duracion << endl;
  cout << "Id: " << id << endl;
  cout << "Nominaciones: " << nominaciones << endl;
}