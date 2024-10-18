#pragma once
#include <iostream>
#include <cmath>

/**
 * @class Vector3
 * @brief Una clase que representa un vector en tres dimensiones.
 * 
 * La clase Vector3 proporciona una representación simple de un vector en el
 * espacio tridimensional, junto con varias operaciones comunes que pueden 
 * realizarse en dichos vectores, tales como suma, resta, multiplicación por 
 * un escalar, normalización y cálculo de magnitud.
 */
class
Vector3
{
public:
    float x, y, z; ///< Coordenadas x, y y z del vector

    /**
     * @brief Constructor por defecto.
     * Inicializa las coordenadas del vector en (0, 0, 0).
     */
    Vector3() :
        x(0), y(0), z(0) { }

    /**
     * @brief Constructor parametrizado.
     * @param x Coordenada x del vector.
     * @param y Coordenada y del vector.
     * @param z Coordenada z del vector.
     */
    Vector3(float x, float y, float z) :
        x(x), y(y), z(z) { }

    /**
     * @brief Sobrecarga del operador + para sumar dos vectores.
     * @param other El otro vector a sumar.
     * @return Un nuevo vector que es la suma de este vector y el vector proporcionado.
     */
    Vector3
    operator+(const Vector3& other) const {
        return Vector3(x + other.x, y + other.y, z + other.z);
    }

    /**
     * @brief Sobrecarga del operador - para restar dos vectores.
     * @param other El otro vector a restar.
     * @return Un nuevo vector que es la resta de este vector y el vector proporcionado.
     */
    Vector3
    operator-(const Vector3& other) const {
        return Vector3(x - other.x, y - other.y, z - other.z);
    }

    /**
     * @brief Sobrecarga del operador * para multiplicar por un escalar.
     * @param scalar El escalar por el cual multiplicar el vector.
     * @return Un nuevo vector que es el producto de este vector y el escalar proporcionado.
     */
    Vector3
    operator*(float scalar) const {
        return Vector3(x * scalar, y * scalar, z * scalar);
    }

    /**
     * @brief Método para calcular la magnitud del vector.
     * @return La magnitud (longitud) del vector.
     */
    float
    magnitude() const {
        return std::sqrt(x * x + y * y + z * z);
    }

    /**
     * @brief Método para normalizar el vector.
     * @return Un nuevo vector que es la versión normalizada de este vector (con magnitud 1).
     */
    Vector3
    normalize() const {
        float mag = magnitude();
        if (mag == 0) {
            return Vector3(0, 0, 0);
        }
        return Vector3(x / mag, y / mag, z / mag);
    }
};
