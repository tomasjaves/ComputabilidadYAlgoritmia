// Universidad de La Laguna
// Escuela Superior de Ingenierıa y Tecnologıa
// Grado en Ingenierıa Informatica
// Asignatura: Computabilidad y Algoritmia
// Curso: 2º
// Practica 2: Operaciones con cadenas
// Autor: Tomas Javes Tommasone
// Correo: alu0101515458@ull.edu.es
// Fecha: 19/09/2023
// Archivo ClientChain.cc: programa cliente.
// Contiene la funcion main del proyecto que usa las clases Alphabet, Symbol,
// Chain y Language para: obtener alfabétos, longitudes de cadenas,
// inversas de cadenas, prefijos de cadenas y sufijos de cadenas.

// Historial de revisiones
// 19/09/2023 - Creacion (primera version) del codigo

#include "Alphabet.h"
#pragma once


/**
 * @brief Clase Chain que tendrá que ver con la funcionalidad
 * del programa.
 * 
 * @public Constructores, sobrecarga de operadores, metodos.
 * @private std::vector<Symbol>
 */
class Chain {
  public:
    Chain();
    Chain(std::vector<Symbol> chain);

    friend bool operator<(const Chain& first_chain, const Chain& second_chain);
    friend std::ostream& operator<<(std::ostream& os, const Chain& chain);
    
    void Add(const Symbol& Symbol);
    std::vector<Symbol> GetSymbols() const;
    int GetSymbolsLength() const;

    // METODOS SOLVENTADORES
    Alphabet GetAlphabet(std::string aux);
    std::string Inverse(std::string aux);
    int Length(std::string aux);

  private:
    std::vector<Symbol> chain_;
};

std::ostream& operator<<(std::ostream& os, const Chain& chain);