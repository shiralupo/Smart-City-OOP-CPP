# Smart-City-OOP-CPP

## Project Overview
This project is an advanced Object-Oriented Programming (OOP) system built in **C++** to model and manage a smart city's infrastructure. It handles various urban entities such as public parks, bus stops, and sports facilities, focusing on complex architectural design, generic programming, and recursive data structures.

## Key OOP Concepts & Features Demonstrated
* **Abstract Classes & Polymorphism:** Designed a base abstract class `CityEntity` from which specific entities (`Park`, `BusStop`, `SportFacility`) inherit.
* **Multiple & Virtual Inheritance (The Diamond Problem):** Successfully resolved the diamond problem using virtual inheritance for the `GreenChargingStation` class, which inherits from both `Park` and `BusStop`.
* **Generic Programming (Templates):** Implemented a generic generic `filter` function using `template<class T, class Predicate>` and custom Functors (e.g., `IsBusStop`, `IsInZone`) to seamlessly filter entities.
* **Custom STL-Compatible Iterator:** Developed a custom `CircularIterator` that overloads standard operators (`==`, `!=`, `*`, `++`, `--`) to iterate over the city entities in a cyclic manner.
* **Recursive Data Structures:** Built a `CityZone` class to manage a hierarchical and recursive representation of city zones and sub-zones, allowing recursive counting and searching of entities.

## File Structure & Credits
To strictly separate the interface and implementation as required by the project architecture, the entire business logic and class definitions were implemented exclusively in header files:
* **Core Architecture & Logic (`.h` files):** Developed entirely by me (includes `CityEntity.h`, `CityManager.h`, `CityFilter.h`, `CircularIterator.h`, `CityZone.h`, etc.).
* **Testing & Execution (`main.cpp`):** Provided by the academic course staff to test the generic functions and class hierarchy.

## Technologies
* **Language:** C++
* **Concepts:** OOP, STL, Templates, Recursion, Custom Iterators, Virtual Inheritance.
