#pragma once
#include <iostream>
using namespace std;

class Cancion {
private:
	int id;					//id de cancion
	string nombre;			//Nombre de la cancion
	string nombreArtista;	//Nombre del artista
	string nombreAlbum;		//Nombre del album al que pertenece
	string duracion;		//Duracion en formato MM:SS
public:
	//constructs (vacio & con valores)
	Cancion() : id(0), nombre(""), nombreArtista(""), nombreAlbum(""), duracion("") {}
	Cancion(int id, string nombre, string artista, string album, string duracion) : id(id), nombre(nombre), nombreArtista(artista), nombreAlbum(album), duracion(duracion) {}
	//setters
	void setId(int newId) { id = newId; }
	void setNombre(const string& newNombre) { nombre = newNombre; }
	void setNombreArtista(const string& newArtista) { nombreArtista = newArtista; }
	void setNombreAlbum(const string& newAlbum) { nombreAlbum = newAlbum; }
	void setDuracion(const string& newDuracion) { duracion = newDuracion; }
	//getters
	int getId() const { return id; }
	string getNombre() const { return nombre; }
	string getNombreArtista() const { return nombreArtista; }
	string getNombreAlbum() const { return nombreAlbum; }
	string getDuracion() const { return duracion; }
	//modificar
	void modificar(int newId, string newNombre, string newArtista, string newAlbum, string newDuracion) {
		this ->id = newId;
		this ->nombre = newNombre;
		this ->nombreArtista = newArtista;
		this ->nombreAlbum = newAlbum;
		this ->duracion = newDuracion;
	}
};

