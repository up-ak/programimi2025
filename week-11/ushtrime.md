# C++ Structs and Classes

## Theoretical Concepts

**Structs vs. Classes:** Both can contain data members and functions, but classes offer more functionality for object-oriented programming.

```cpp
struct Point {
    int x;      // public by default
    int y;
};

class Point {
    int x;      // private by default
    int y;
public:
    void setX(int val) {
        cout << "U ndrru vlera e x";
        x = val; }
};
```

**Default Access Modifier:** Structs default to public, classes default to private.

**Encapsulation:** Classes support encapsulation by hiding their internal state from outside access, typically through private data members and public methods.

**Constructors and Destructors:**

```cpp
class Example {
public:
    // Constructor
    Example() { cout << "Created"; }
    // Destructor
    ~Example() { cout << "Destroyed"; }
};
```

## Ushtrime

**Të definohet klasa Libri sipas pikave në vijim:**

a. Klasa të ketë anëtarët: id(privat), emri(publik), autori(publik), numri i faqeve(privat).

b. Klasa të ketë të definuar një konstruktor pa parametra

c. Klasa të ketë të definuar një konstruktor me parametra përmes së cilit inicializohen të gjithë anëtarët e klasës

d. Për anëtarët privat të klasës të definohen funksioni për lexim dhe përcaktim të vlerës

e. Të krijohet një instancë e klasës Libri përmes konstruktorit pa parametra, kurse vlerat për anëtarët e saj të përcaktohen përmes instancës së krijuar

f. Të krijohet një instancë e klasës Libri përmes konstruktorit me parametra

g. Të printohet emri i librit nga të dyja instancat
