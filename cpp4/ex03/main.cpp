/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrmarqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 17:22:17 by adrmarqu          #+#    #+#             */
/*   Updated: 2025/02/02 14:07:00 by adrmarqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"
#include "AMateria.hpp"

int main()
{
	IMateriaSource* src = new MateriaSource();
	
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	
	ICharacter* me = new Character("me");
	AMateria* tmp;
	
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	
	ICharacter* bob = new Character("bob");
	
	me->use(0, *bob);
	me->use(1, *bob);
	
	delete bob;
	delete me;
	delete src;
	/*
    Creamos el MateriaSource para aprender materias
    IMateriaSource* src = new MateriaSource();
    src->learnMateria(new Ice());  // Aprende una materia de tipo "ice"
    src->learnMateria(new Cure()); // Aprende una materia de tipo "cure"

    // Creamos los personajes
    ICharacter* me = new Character("me");
    ICharacter* bob = new Character("bob");

    AMateria* tmp;

    // Creamos materias desde MateriaSource y las equipamos
    tmp = src->createMateria("ice"); // Crea una materia de tipo "ice"
    me->equip(tmp); // Equipa la materia "ice" en el personaje "me"

    tmp = src->createMateria("cure"); // Crea una materia de tipo "cure"
    me->equip(tmp); // Equipa la materia "cure" en el personaje "me"

    // Utilizamos las materias equipadas por "me" en "bob"
    me->use(0, *bob); // "me" usa la materia en la posición 0 (ice) sobre "bob"
    me->use(1, *bob); // "me" usa la materia en la posición 1 (cure) sobre "bob"

    // Vamos a comprobar lo que pasa con un personaje sin materias equipadas
    ICharacter* alice = new Character("alice");
    alice->use(0, *bob); // Este uso no debería hacer nada porque alice no tiene materias equipadas
    alice->unequip(0); // No tiene ninguna materia que quitar, pero lo llamamos para asegurarnos de que no hay errores.

    // Equipa un personaje con más materias y luego las usa
    ICharacter* charlie = new Character("charlie");
    tmp = src->createMateria("ice");
    charlie->equip(tmp);
    tmp = src->createMateria("cure");
    charlie->equip(tmp);

    charlie->use(0, *bob); // "charlie" usa su materia de "ice" sobre "bob"
    charlie->use(1, *bob); // "charlie" usa su materia de "cure" sobre "bob"

    // Probar con un inventario completo y ver qué pasa al intentar equipar una nueva materia
    tmp = src->createMateria("ice");
    me->equip(tmp);  // "me" tiene espacio, por lo que debería poder equipar esta nueva materia

    tmp = src->createMateria("cure");
    me->equip(tmp);  // "me" debería poder equipar la materia de tipo "cure" también

    // Limpiamos los objetos
    delete bob;    // Eliminamos al personaje bob
    delete alice;  // Eliminamos al personaje alice
    delete charlie;// Eliminamos al personaje charlie
    delete me;     // Eliminamos al personaje me
    delete src;    // Eliminamos MateriaSource (la fuente de las materias)
*/
    return 0;
}

