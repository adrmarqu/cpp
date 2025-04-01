/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrmarqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 13:40:38 by adrmarqu          #+#    #+#             */
/*   Updated: 2025/03/24 12:08:23 by adrmarqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

#include "iter.hpp"
#include <iostream>
#include <string>

// Clase personalizada para probar iter con tipos de usuario
class MyClass
{
private:
    int value;

public:
    MyClass(int val = 0) : value(val) {}  // Constructor por defecto e inicialización
    int getValue() const { return value; }
    friend std::ostream &operator<<(std::ostream &os, const MyClass &obj)
    {
        os << obj.value;
        return os;
    }
};

// Función para imprimir elementos del array
template <typename T>
void display(const T &x)
{
    std::cout << x << " ";
}

// Función para modificar elementos del array (sólo para tipos no `const`)
template <typename T>
void increment(T &x)
{
    x += 1;
}

// Especialización para `std::string`
void appendExclamation(std::string &str)
{
    str += "!";
}

int main()
{
    // 1. Array de enteros
    int intArray[] = {1, 2, 3, 4, 5};
    std::cout << "Array de int antes de incrementar: ";
    iter(intArray, 5, display);
    std::cout << "\nArray de int después de incrementar: ";
    iter(intArray, 5, increment);
    iter(intArray, 5, display);
    std::cout << "\n\n";

    // 2. Array de flotantes
    float floatArray[] = {1.1f, 2.2f, 3.3f, 4.4f, 5.5f};
    std::cout << "Array de float: ";
    iter(floatArray, 5, display);
    std::cout << "\n\n";

    // 3. Array de dobles
    double doubleArray[] = {10.1, 20.2, 30.3, 40.4, 50.5};
    std::cout << "Array de double: ";
    iter(doubleArray, 5, display);
    std::cout << "\n\n";

    // 4. Array de caracteres
    char charArray[] = {'H', 'e', 'l', 'l', 'o'};
    std::cout << "Array de char: ";
    iter(charArray, 5, display);
    std::cout << "\n\n";

    // 5. Array de strings
    std::string strArray[] = {"Hola", "Mundo", "C++"};
    std::cout << "Array de strings antes de modificar: ";
    iter(strArray, 3, display);
    iter(strArray, 3, appendExclamation);
    std::cout << "\nArray de strings después de modificar: ";
    iter(strArray, 3, display);
    std::cout << "\n\n";

    // 6. Array de objetos de clase
    MyClass objArray[] = {MyClass(10), MyClass(20), MyClass(30)};
    std::cout << "Array de MyClass: ";
    iter(objArray, 3, display);
    std::cout << "\n\n";

    return 0;
}
