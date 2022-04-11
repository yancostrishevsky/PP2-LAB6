# Implementacja klasy czysto abstrakcyjnej `Shape`, majacej funkcje:
1. `bool isIn(int x, int y) const = 0;`, ktora zwraca informacje czy dany punkt jest wewnatrz figury czy nie
2. Proszę zaimplementować klasę `Rectangle` dziedziczącą po `Shape` i implementującą powyższą metodę.
   Implementacja klasy powinna być dokonana w nowo-utworzonych plikach: rectangle.h i rectangle.cpp
3. Proszę zaimplementować klasę `Circle` dziedziczącą po `Shape` i implementującą jej metodę.
   Implementacja klasy powinna być dokonana w nowo-utworzonych plikach: circle.h i circle.cpp
4. Proszę zaimplementować klasę-kompozyt `ShapeComposite` dziedziczącą po `Shape` i implementującą jej metodę.
   Klasa ta w konstruktorze powinna przyjąć:
    - dwie instancje `shared_ptr<Shape>`
    - operacje na zbiorach `enum class ShapeOperation`: `INTERSECTION`, `SUM`, `DIFFERENCE`
    - w oparciu o to bedzie mozna cala hierarchie figur polaczyc w jedno drzewo,
      dla ktorego bedzie mozna zapytac czy dany punkt jest w hierarchii, czy nie (metoda `isIn`).
5. Opcjonalnie mozna sobie zaimplementowac klase `Stage` rysujaca na konsole.
