#pragma once
#include <sstream>		//Para crear flujos de cadenas (ayuda a concatenar strings)
#include "Cancion.h"
#include <iomanip>		//SETW para formato de texto
#include <vector>		//Para crear copia de nodos en vectores
#include <random>		//Aleatorio
#include <algorithm>	//Para shuffle
using namespace std;

class Nodo {
public:
	Cancion cancion;
	Nodo* siguiente;
	Nodo* anterior;
	//Construct
	Nodo(const Cancion& nuevaCancion) : cancion(nuevaCancion), siguiente(nullptr), anterior(nullptr) {}
	Nodo() : cancion(), siguiente(nullptr), anterior(nullptr) {}
};

class Lista {
private:
public:
	Nodo* header;
	Lista() : header(nullptr) {}
	//actions
	void insertarInicio(const Cancion& cancion) {
		Nodo* newNodo = new Nodo(cancion);
		newNodo->siguiente = header;
		if (header != nullptr) {
			header->anterior = newNodo;
		}
		header = newNodo;
	}
	void insertarFinal(const Cancion& cancion) {
		Nodo* newNodo = new Nodo(cancion);
		if (header == nullptr) {
			header = newNodo;
		}
		else{
			Nodo* actual = header;
			while (actual->siguiente != nullptr) {
				actual = actual->siguiente;
			}
			actual->siguiente = newNodo;
			newNodo->anterior = actual;
		}
	}
	void eliminar(int id) {
		Nodo* actual = header;

		while (actual != nullptr && actual->cancion.getId() != id) {
			actual = actual->siguiente;
		}

		if (actual != nullptr) {
			if (actual->anterior != nullptr) {
				actual->anterior->siguiente = actual->siguiente;
			}
			else {
				header = actual->siguiente;
			}

			if (actual->siguiente != nullptr) {
				actual->siguiente->anterior = actual->anterior;
			}

			delete actual;
		}
	}
	Nodo* buscarPorId(int id) {
		Nodo* actual = header;

		while (actual != nullptr && actual->cancion.getId() != id) {
			actual = actual->siguiente;
		}

		return actual;		//si no se encuentra el id se retorna nullptr

	}
	Nodo* buscarPorNombre(string nombre) const {
		Nodo* actual = header;

		while (actual != nullptr && actual->cancion.getNombre() != nombre) {
			actual = actual->siguiente;
		}

		return actual;		//si no se encuentra el id se retorna nullptr

	}
	string concatenarTodas() const {
		Nodo* actual = header;
		stringstream todas;
		int widthID = 2;
		int widthTitulo = 20;
		int widthArtista = 60;
		int widthAlbum = 20;
		int widthDuracion = 5;

		// Encabezado
		todas << std::left << std::setw(widthID) << "ID"
			<< std::setw(widthTitulo) << "Titulo"
			<< std::setw(widthArtista) << "Artista"
			<< std::setw(widthAlbum) << "Album"
			<< std::setw(widthDuracion) << "Duracion"
			<< endl;

		while (actual != nullptr) {
			todas << std::left << std::setw(widthID) << actual->cancion.getId() 
				<< std::setw(widthTitulo) << actual->cancion.getNombre() 
				<< std::setw(widthArtista) << actual->cancion.getNombreArtista() 
				<< std::setw(widthAlbum) << actual->cancion.getNombreAlbum()
				<< std::setw(widthDuracion) << actual->cancion.getDuracion()
				<< endl;
			actual = actual->siguiente;
		}

		return todas.str();	//Convierte el stringstream a string
	}

	int getContador() const {
		Nodo* actual = header;
		int cont = 0;
		while (actual != nullptr) {
			actual = actual->siguiente;
			cont++;
		}
		return cont;
	}

	void ordenarPorNombre() {
		if (!header || !header->siguiente)
			return; // Si la lista está vacía o tiene un solo elemento

		bool intercambio;
		do {
			intercambio = false;
			Nodo* actual = header;

			while (actual->siguiente != nullptr) {
				if (actual->cancion.getNombre() > actual->siguiente->cancion.getNombre()) {
					swap(actual->cancion, actual->siguiente->cancion);
					intercambio = true;
				}
				actual = actual->siguiente;
			}
		} while (intercambio);
	}

	void shuffle() {
		//CREA COPIA
		std::vector<Nodo*> nodos;
		Nodo* actual = header;
		while (actual != nullptr) {
			nodos.push_back(actual);
			actual = actual->siguiente;
		}

		//SHUFFLE A TODOS LOS NODOS
		std::random_device rd;
		std::mt19937 g(rd());
		std::shuffle(nodos.begin(), nodos.end(), g);

		//RECONSTRUYE LISTA (YA DESORDENADA)
		if (!nodos.empty()) {
			header = nodos[0];
			Nodo* anterior = nullptr;
			for (size_t i = 0; i < nodos.size(); ++i) {
				nodos[i]->anterior = anterior;
				if (i < nodos.size() - 1) {
					nodos[i]->siguiente = nodos[i + 1];
				}
				else {
					nodos[i]->siguiente = nullptr;
				}
				anterior = nodos[i];
			}
		}
	}

	//DESTRUCT
	~Lista() {
		Nodo* actual = header;
		Nodo* siguiente = nullptr;

		while (actual != nullptr) {
			siguiente = actual->siguiente;
			delete actual;
			actual = siguiente;
		}
	}
};

