#include <iostream>
#include "Video.h"

using namespace std;

Video::Video(){
}

Video::Video(string tipoVideo_, string nombreVideo_, string genero_, int calificacion_,
int anioLanzamiento_, int duracion_){
    tipoVideo = tipoVideo_;
    nombreVideo = nombreVideo_;
    genero = genero_;
    calificacion = calificacion_;
    anioLanzamiento = anioLanzamiento_;
    duracion = duracion_;
}

void Video::calificaVideo(int calificacion_){
  calificacion = calificacion_;
}

void Video::muestraDatos(){
  cout << "Tipo de video: " << tipoVideo << endl;
  cout << "Nombre del video: " << nombreVideo << endl;
  cout << "Genero: " << genero << endl;
  cout << "Calificacion: " << calificacion << endl;
  cout << "Anio de lanzamiento: " << anioLanzamiento << endl;
  cout << "Duracion: " << duracion << endl;
}

//SETTERS
void Video::setTipoVideo(string tipoVideo_){
  tipoVideo = tipoVideo_;
}
void Video::setNombreVideo(string nombreVideo_){
  nombreVideo = nombreVideo_;
}
void Video::setGenero(string genero_){
  genero = genero_;
}
void Video::setCalificacion(int calificacion_){
  calificacion = calificacion_;
}
void Video::setAnioLanzamiento(int anioLanzamiento_){
  anioLanzamiento = anioLanzamiento_;
}
void Video::setDuracion(int duracion_){
  duracion = duracion_;
}
//GETTERS
string Video::getTipoVideo(){
  return tipoVideo;
}
string Video::getNombreVideo(){
  return nombreVideo;
}
string Video::getGenero(){
  return genero;
}
int Video::getCalificacion(){
  return calificacion;
}
int Video::getAnioLanzamiento(){
  return anioLanzamiento;
}
int Video::getDuracion(){
  return duracion;
}
