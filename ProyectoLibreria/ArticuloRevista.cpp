#include "ArticuloRevista.h"

ArticuloRevista::ArticuloRevista(const std::string& titulo, const std::string& autor, 
                                 const std::string& revista, int anio)
    : titulo(titulo), autor(autor), revista(revista), anio(anio) {}

std::string ArticuloRevista::getTitulo() const {
    return titulo;
}

std::string ArticuloRevista::getAutor() const {
    return autor;
}

std::string ArticuloRevista::getRevista() const {
    return revista;
}

int ArticuloRevista::getAnio() const {
    return anio;
}

void ArticuloRevista::setTitulo(const std::string& nuevoTitulo) {
    titulo = nuevoTitulo;
}

void ArticuloRevista::setAutor(const std::string& nuevoAutor) {
    autor = nuevoAutor;
}

void ArticuloRevista::setRevista(const std::string& nuevaRevista) {
    revista = nuevaRevista;
}

void ArticuloRevista::setAnio(int nuevoAnio) {
    anio = nuevoAnio;
}

void ArticuloRevista::mostrarInfo() const {
    std::cout << "Título: " << titulo << std::endl;
    std::cout << "Autor: " << autor << std::endl;
    std::cout << "Revista: " << revista << std::endl;
    std::cout << "Año: " << anio << std::endl;
}