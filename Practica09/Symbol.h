// Universidad de La Laguna
// Escuela Superior de Ingenierıa y Tecnologıa
// Grado en Ingenierıa Informatica
// Asignatura: Computabilidad y Algoritmia
// Curso: 2º
// Practica 9: Implementación de un simulador de Máquinas de Turing
// Autor: Tomas Javes Tommasone
// Correo: alu0101515458@ull.edu.es
// Fecha: 14/11/2023
// Archivo Symbol.h: Clase Symbol.

// Historial de revisiones
// 14/11/2023 - Creacion (primera version) del codigo

#pragma once

#include<set>
#include<iostream>
#include<string>
#include<vector>
#include<fstream>

/**
 * @brief Clase Symbol que tendrá que ver con la funcionalidad
 * del programa.
 * 
 * @public Constructores, sobrecarga de operadores y un método.
 * @private Char
 */
class Symbol {
  public:
    Symbol();
    Symbol(char symbol);

    friend std::ostream& operator<<(std::ostream& os, const Symbol& symbol);
    friend bool operator==(const Symbol& first_symbol, const Symbol& second_symbol);
    friend bool operator<(const Symbol& first_symbol, const Symbol& second_symbol);
    friend bool operator!=(const Symbol& first_symbol, const Symbol& second_symbol);
    friend std::istream& operator>>(std::istream& is, Symbol& symbol);

    char GetSymbol() const;

  private:
    char char_;
};

std::ostream& operator<<(std::ostream& os, const Symbol& symbol);
bool operator==(const Symbol& first_symbol, const Symbol& second_symbol);
bool operator<(const Symbol& first_symbol, const Symbol& second_symbol);
bool operator!=(const Symbol& first_symbol, const Symbol& second_symbol);
std::istream& operator>>(std::istream& is, Symbol& symbol);