# C++ Modules - 42 Barcelona

The C++ Modules pool is a comprehensive series of ten projects (Module 00 through Module 09) developed at 42 Barcelona. It is designed to master Object-Oriented Programming (OOP) in C++98, progressing from fundamental concepts to advanced software architecture. The curriculum covers namespaces, classes, member functions, references, canonical orthodox class forms, memory management, inheritance, subtype polymorphism, abstract classes, interfaces, exception handling, C++ type casting, templates, and Standard Template Library (STL) containers and algorithms.

# Prerequisites

To compile and run exercises across all C++ modules, ensure you have:

- A C++ compiler supporting the C++98 standard: clang++ (recommended on macOS) or g++ (on Linux)
- GNU Make
- Standard C++ Library (libstdc++ or libc++)

# Configuration

1. Clone the repository:
```bash
git clone https://github.com/adrmarqu/cpp.git
cd cpp
```

2. Each module and individual exercise contains its own standalone Makefile configured with mandatory 42 compiler flags:
`-Wall -Wextra -Werror -std=c++98`

No additional external configuration or third-party libraries are required.

# Execution

Navigate into any specific exercise directory, build the executable with Make, and run it:

```bash
# Example 1: Module 00 - PhoneBook
cd cpp0/ex01
make
./phonebook

# Example 2: Module 04 - Polymorphism & Interfaces
cd ../../cpp4/ex03
make
./materia

# Example 3: Module 09 - Bitcoin Exchange
cd ../../cpp9/ex00
make
./btc input.txt

# Example 4: Module 09 - PmergeMe (Ford-Johnson sort)
cd ../ex02
make
./PmergeMe 3 5 9 7 4 1
```

# Project Structure

```
cpp/
├── cpp0/                    # Module 00: Namespaces, classes, member functions, stdio streams, static
│   ├── ex00/                # Megaphone: std::cout, std::toupper string manipulation
│   ├── ex01/                # PhoneBook: Contact and PhoneBook classes, input validation
│   └── ex02/                # Account: Static variables, timestamps, transaction tracking
├── cpp1/                    # Module 01: Memory allocation, references, pointers to members, switch
│   ├── ex00/                # Zombie: Stack vs heap allocation (newZombie vs randomChump)
│   ├── ex01/                # Moar brainz!: Array heap allocation (zombieHorde)
│   ├── ex02/                # HI THIS IS BRAIN: Pointers vs references comparison
│   ├── ex03/                # Unnecessary violence: Weapon class, HumanA (ref) vs HumanB (ptr)
│   ├── ex04/                # Sed is for losers: File stream string replacement (ifstream/ofstream)
│   ├── ex05/                # Harl 2.0: Pointers to member functions
│   └── ex06/                # Harl filter: Switch statement handling logging levels
├── cpp2/                    # Module 02: Ad-hoc polymorphism, operator overloading, canonical form
│   ├── ex00/                # Orthodox Canonical Form: Fixed point representation, raw bits
│   ├── ex01/                # Fixed point conversion: Float and integer conversion, operator<<
│   ├── ex02/                # Overloaded operators: Arithmetic, comparison, increments, min/max
│   └── ex03/                # BSP: Binary space partitioning (point inside triangle test)
├── cpp3/                    # Module 03: Inheritance and object hierarchies
│   ├── ex00/                # ClapTrap: Base class attributes, energy, attack damage
│   ├── ex01/                # ScavTrap: Derived class, specialized guardGate mode
│   ├── ex02/                # FragTrap: High fives request, alternate stat balancing
│   └── ex03/                # DiamondTrap: Multiple and virtual inheritance diamond resolution
├── cpp4/                    # Module 04: Subtype polymorphism, abstract classes, interfaces
│   ├── ex00/                # Polymorphism: Animal, Dog, Cat, virtual makeSound, WrongAnimal
│   ├── ex01/                # Brain: Deep copy vs shallow copy verification
│   ├── ex02/                # Abstract class: AAnimal pure virtual functions
│   └── ex03/                # Interfaces: AMateria, Character, MateriaSource (ICharacter, IMateriaSource)
├── cpp5/                    # Module 05: Repetition and exception handling
│   ├── ex00/                # Bureaucrat: Grade validation (1-150), custom exception hierarchy
│   ├── ex01/                # Form: Signing validation and grade thresholds
│   ├── ex02/                # Concrete Forms: ShrubberyCreation, RobotomyRequest, PresidentialPardon
│   └── ex03/                # Intern: Dynamic form creation using function pointers
├── cpp6/                    # Module 06: C++ Type casting mechanisms
│   ├── ex00/                # ScalarConverter: Static conversion of char, int, float, double literals
│   ├── ex01/                # Serialization: reinterpret_cast using uintptr_t
│   └── ex02/                # Identify: dynamic_cast on base pointers and references (std::bad_cast)
├── cpp7/                    # Module 07: C++ Templates
│   ├── ex00/                # Functions: swap, min, and max function templates
│   ├── ex01/                # Iter: Function template taking array, length, and callable
│   └── ex02/                # Array: Class template with dynamic memory and bounds checking
├── cpp8/                    # Module 08: Templated containers, iterators, and STL algorithms
│   ├── ex00/                # easyfind: STL container value lookup using std::find
│   ├── ex01/                # Span: Sequence container calculating shortest and longest span
│   └── ex02/                # MutantStack: Making std::stack iterable through container adapter iterators
└── cpp9/                    # Module 09: Standard Template Library (STL)
    ├── ex00/                # Bitcoin Exchange: Historical currency rate lookup via std::map
    ├── ex01/                # Reverse Polish Notation: Postfix mathematical evaluation with std::stack
    └── ex02/                # PmergeMe: Ford-Johnson merge-insertion sort using std::vector and std::deque
```

# Commands and Makefile Targets

Every exercise subfolder includes a standard Makefile with these targets:

- make or make all: Compiles the source files with -Wall -Wextra -Werror -std=c++98 and produces the binary
- make clean: Removes compiled object files (.o) and dependency files (.d)
- make fclean: Removes object files and the generated executable
- make re: Performs a clean rebuild (fclean followed by make all)

# Module Highlights

- Orthodox Canonical Form: Ensuring all C++ classes adhere to proper resource management by implementing a default constructor, copy constructor, copy assignment operator, and destructor.
- Memory Safety: Rigorous avoidance of memory leaks, shallow copying hazards, dangling pointers, and undefined behavior.
- Advanced Algorithms: The Ford-Johnson merge-insertion sorting algorithm implemented in Module 09 minimizes the number of comparisons when sorting large integer sequences.

# Author Details

Author: Adrià Márquez Nebot
Github: https://github.com/adrmarqu
LinkedIn: https://www.linkedin.com/in/adria-marquez
Portfolio: https://adrmarqu.github.io
