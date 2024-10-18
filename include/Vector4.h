#pragma once
#include <iostream>
#include <cmath>

/**
 * @class Vector4
 * @brief Una clase que representa un vector en cuatro dimensiones.
 * 
 * La clase Vector4 proporciona una representación simple de un vector en el
 * espacio cuatridimensional, junto con varias operaciones comunes que pueden 
 * realizarse en dichos vectores, tales como suma, resta, multiplicación por 
 * un escalar, normalización y cálculo de magnitud.
 */
class
Vector4
{
public:
    float x, y, z, w; ///< Coordenadas x, y, z y w del vector

    /**
     * @brief Constructor por defecto.
     * Inicializa las coordenadas del vector en (0, 0, 0, 0).
     */
    Vector4() :
        x(0), y(0), z(0), w(0) { }

    /**
     * @brief Constructor parametrizado.
     * @param x Coordenada x del vector.
     * @param y Coordenada y del vector.
     * @param z Coordenada z del vector.
     * @param w Coordenada w del vector.
     */
    Vector4(float x, float y, float z, float w) :
        x(x), y(y), z(z), w(w) { }

    /**
     * @brief Sobrecarga del operador + para sumar dos vectores.
     * @param other El otro vector a sumar.
     * @return Un nuevo vector que es la suma de este vector y el vector proporcionado.
     */
    Vector4
    operator+(const Vector4& other) const {
        return Vector4(x + other.x, y + other.y, z + other.z, w + other.w);
    }

    /**
     * @brief Sobrecarga del operador - para restar dos vectores.
     * @param other El otro vector a restar.
     * @return Un nuevo vector que es la resta de este vector y el vector proporcionado.
     */
    Vector4
    operator-(const Vector4& other) const {
        return Vector4(x - other.x, y - other.y, z - other.z, w - other.w);
    }

    /**
     * @brief Sobrecarga del operador * para multiplicar por un escalar.
     * @param scalar El escalar por el cual multiplicar el vector.
     * @return Un nuevo vector que es el producto de este vector y el escalar proporcionado.
     */
    Vector4
    operator*(float scalar) const {
        return Vector4(x * scalar, y * scalar, z * scalar, w * scalar);
    }

    /**
     * @brief Método para calcular la magnitud del vector.
     * @return La magnitud (longitud) del vector.
     */
    float
    magnitude() const {
        return std::sqrt(x * x + y * y + z * z + w * w);
    }

    /**
     * @brief Método para normalizar el vector.
     * @return Un nuevo vector que es la versión normalizada de este vector (con magnitud 1).
     */
    Vector4
    normalize() const {
        float mag = magnitude();
        if (mag == 0) {
            return Vector4(0, 0, 0, 0);
        }
        return Vector4(x / mag, y / mag, z / mag, w / mag);
    }
};
