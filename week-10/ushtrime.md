## 1. Referencat në funksione

Në C++, parametrat mund t'i kalojmë në funksione në dy mënyra kryesore: me vlerë (pass by value) dhe me referencë (pass by reference).

### Kalimi me vlerë (Pass by Value)

Krijohet një kopje e variablit. Ndryshimet brenda funksionit **nuk** ndikojnë në variablin origjinal.

```cpp
void ndryshoMeVlere(int x) {
    x = 10; // Ndryshon vetëm kopjen lokale
}
```

### Kalimi me referencë (Pass by Reference)

Funksioni merr adresën e variablit origjinal duke përdorur operatorin `&`. Ndryshimet brenda funksionit **ndikojnë** në variablin origjinal.

```cpp
void ndryshoMeReference(int &x) {
    x = 10; // Ndryshon variablin origjinal
}
```

## 2. Direktivat Paraprocesorike

```cpp
#define PI 3.14

// Përdorimi
double syprina = PI * rrezja * rrezja;
```

### Përkufizimi i makrove

```cpp
#define MAX(a, b) (a > b ? a : b)

// Përdorimi
int m = MAX(5, 3);    // Zëvendësohet me: int m = (5 > 3 ? 5 : 3);
```

### Dallimi mes makrove dhe funksioneve

1. Makrot zëvendësohen nga paraprocesori para kompajllimit
2. Funksionet ekzekutohen gjatë kohës së ekzekutimit
3. Makrot nuk kontrollojnë tipat e të dhënave

**Kujdes**:

- Makrot nuk kanë kontroll të tipave
- Kujdes me kllapat në makro për të shmangur gabimet
- Funksionet janë më të sigurta se makrot

## 3. Numerimet (Enums)

Numerimet në C++ janë tipe të dhënash që na lejojnë të krijojmë një grup konstantesh të emëruara.

### Shembull i Thjeshtë - Ditët e Javës

```cpp
enum DitetEJaves {
    HENE,    // 0
    MARTE,   // 1
    MERKURE, // 2
    ENJTE,   // 3
    PREMTE,  // 4
    SHTUNE,  // 5
    DIELE    // 6
};

int main() {
    DitetEJaves dita = HENE;

    if(dita == HENE) {
        cout << "Sot eshte e hene!" << endl;
    }
    return 0;
}
```

### Detyre: Numerimet për Makinat

enum Makina (VETURE, KAMION, AUTOBUS)

Te krijohet funksioni `pershkruajMakinen(Makina m)` qe e pershkruan funksionin e makines.

## 4. Strukturat (Structs)

Strukturat në C++ janë tipe të dhënash që na lejojnë të grupojmë të dhëna të ndryshme në një njësi të vetme.

Sintaksa bazë:

```cpp
struct EmriStruktures {
    tipi1 fusha1;
    tipi2 fusha2;
    tipi3 fusha3;

    // Mundemi të shtojmë edhe funksione
    void funkcioni() {
        // kodi
    }
};
```

### Shembull

```cpp
struct Pika {
    double x;
    double y;

    void printo() {
        cout << "(" << x << ", " << y << ")" << endl;
    }
};

int main() {
    Pika p = {3.0, 4.0};
    // p.x = 34.2;
    // p.y = 223.5
    p.printo();  // Printon: (3, 4)
    return 0;
}
```

### Detyra

#### Detyrë 1: Struktura Drejtkendshi

Krijoni një strukturë `Drejtkendshi` që ka:

- Fushat: gjatesia, gjeresia
- Funksionin `siperfaqja()` që kthen sipërfaqen
- Funksionin `perimetri()` që kthen perimetrin
- Bonus: Shtoni një funksion që kontrollon nëse është katror

#### Detyrë 2: Struktura Personi

Krijoni një strukturë `Personi` që përmban:

- Fushat: emri, mbiemri, mosha
- Funksionin `lexoPersonin()` që lexon të dhënat nga tastiera
- Funksionin `printoPersonin()` që i printon të dhënat në format të lexueshëm
- Krijo nje program qe lexon 10 persona dhe ne fund i printon ata

#### Detyrë 3: Struktura Vetura

Krijoni një strukturë `Vetura` që kombinon:

- Enum `Marka` me vlerat: BMW, AUDI, MERCEDES, VOLKSWAGEN
- Enum `NgjyraVetures` me vlerat: ZEZE, BARDHE, HIRI, KUQE
- Fushat: viti i prodhimit, marka dhe ngjyra
- Bonus: Shtoni një funksion që tregon nëse makina është e vjetër (mbi 10 vjet)

#### Detyrë 4: Struktura Kursi

Krijoni një strukturë `Kursi` që menaxhon:

- Fushat: emri, numriIStudenteve, numriMaksimal
- Funksionin `shtoStudent()` që:
  - Kontrollon nëse ka vend të lirë
  - Rrit numrin e studentëve nëse ka vend
  - Kthen true/false varësisht nga suksesi
- Bonus: Shtoni një funksion `largoStudent()` që zvogëlon numrin e studentëve
