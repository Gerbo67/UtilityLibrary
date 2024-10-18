#pragma once
#include <iostream>
#include <cmath>

/**
 * @class Vector2
 * @brief Una clase que representa un vector en dos dimensiones.
 * 
 * La clase Vector2 proporciona una representación simple de un vector en el
 * plano bidimensional, junto con varias operaciones comunes que pueden realizarse 
 * en dichos vectores, tales como suma, resta, multiplicación por un escalar, 
 * normalización y cálculo de magnitud.
 */
class
Vector2 {
public:
    float x, y; ///< Coordenadas x e y del vector

    /**
     * @brief Constructor por defecto.
     * Inicializa las coordenadas del vector en (0, 0).
     */
    Vector2()
        : x(0), y(0) { }

    /**
     * @brief Constructor parametrizado.
     * @param x Coordenada x del vector.
     * @param y Coordenada y del vector.
     */
    Vector2(float x, float y) :
        x(x), y(y) { }

    /**
     * @brief Sobrecarga del operador + para sumar dos vectores.
     * @param other El otro vector a sumar.
     * @return Un nuevo vector que es la suma de este vector y el vector proporcionado.
     */
    Vector2
    operator+(const Vector2& other) const {
        return Vector2(x + other.x, y + other.y);
    }

    /**
     * @brief Sobrecarga del operador - para restar dos vectores.
     * @param other El otro vector a restar.
     * @return Un nuevo vector que es la resta de este vector y el vector proporcionado.
     */
    Vector2
    operator-(const Vector2& other) const {
        return Vector2(x - other.x, y - other.y);
    }

    /**
     * @brief Sobrecarga del operador * para multiplicar por un escalar.
     * @param scalar El escalar por el cual multiplicar el vector.
     * @return Un nuevo vector que es el producto de este vector y el escalar proporcionado.
     */
    Vector2
    operator*(float scalar) const {
        return Vector2(x * scalar, y * scalar);
    }

    /**
     * @brief Método para calcular la magnitud del vector.
     * @return La magnitud (longitud) del vector.
     */
    float
    magnitude() const {
        return std::sqrt(x * x + y * y);
    }

    /**
     * @brief Método para normalizar el vector.
     * @return Un nuevo vector que es la versión normalizada de este vector (con magnitud 1).
     */
    Vector2
    normalize() const {
        float mag = magnitude();
        if (mag == 0) {
            return Vector2(0, 0);
        }
        return Vector2(x / mag, y / mag);
    }
};