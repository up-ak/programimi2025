# Funksionet

- Grup urdhërash me një emër të caktuar
- Transformon hyrjet në dalje sipas një rregulle të caktuar
- Merr parametra, kthen rezultat

## Sintaksa bazë

```cpp
tipi_kthimit emri_funksionit(tipi_parametrit parametri) {
    // trupi i funksionit
    return vlera;
}
```

### Shembull

```cpp
int katrori(int x) {
    return x * x;
}

// Thirrja
int rezultati = katrori(5);  // rezultati = 25
```

## Konceptet kyçe

1. **Parametrat**: Vlerat që funksioni pranon
2. **Argumentet**: Vlerat që jepen gjatë thirrjes
3. **Return**: Vlera që kthen funksioni
4. **Void**: Funksion pa vlerë kthyese

## Llojet e funksioneve

1. **Funksione standarde**:

   - math.h: pow, sin, sqrt
   - iomanip: setw, setprecision

2. **Funksonet void**:

   ```cpp
   void pershendetje() {
       cout << "Pershendetje!";
   }
   ```

3. **Funksionet rekursive**:
   ```cpp
   int fibonacci(int n) {
       if (n <= 1) {
        return n;
       }

       return fibonacci(n-1) + fibonacci(n-2);
   }
   ```

## Deklarimi dhe definimi

```cpp
// Deklarimi
int shuma(int a, int b);

// Definimi/ Impelementimi
int shuma(int a, int b) {
    return a + b;
}
```

### Detyre

- Të krijohen dy funksione që verifikojnë nëse një numër është çift ose tek.
- Të krijohet një funksion që llogarit mesataren e elementeve në një varg.

## Variablat lokale

- Deklarohen brenda një funksioni/blloku
- Ekzistojnë vetëm brenda atij blloku

```cpp
void funksioni() {
    int x = 10;     // lokale
}   // x nuk ekziston më
```

## Variablat globale

- Deklarohen jashtë funksioneve
- Qasshme nga të gjitha funksionet

```cpp
int totalNxenesve = 0;     // globale

void shfaqTotalin() {
    cout << totalNxenesve; // përdoret këtu
}
```

### Detyrë: Sistemi i menaxhimit të nxënësve

Variablat globale që duhen deklaruar

1. Numri total i nxënësve (`totalNxenes`)
2. Kapaciteti maksimal i shkollës (`kapacitetiShkolles`)

Funksionet që duhen krijuar

1. `shtoNxenes(int numriNxenesve)` - te mos kalohet kapaciteti
2. `largoNxenes(int numriNxenesve)`
3. `shfaqStatistikat()`
   - Numrin total të nxënësve
   - Numrin e vendeve të lira

## Mbingarkimi i Funksioneve

Funksioni identifikohet nga:

- Emri
- Numri i parametrave
- Tipat e parametrave

### Mbingarkimi sipas numrit të parametrave

```cpp
int shuma(int a, int b) {
    return a + b;
}

int shuma(int a, int b, int c) {
    return a + b + c;
}

// Përdorimi
cout << shuma(5, 3);     // Thirrë funksionin e parë
cout << shuma(5, 3, 2);  // Thirrë funksionin e dytë
```

### Mbingarkimi sipas tipit të parametrave

```cpp
int max(int a, int b) {
    return (a > b) ? a : b;
}

double max(double a, double b) {
    return (a > b) ? a : b;
}

int max(int a, int b, int c) {
    return max(max(a, b), c);
}

// Përdorimi
cout << max(5, 3);         // Përdor versionin int
cout << max(5.5, 3.7);     // Përdor versionin double
cout << max(5, 3, 7);      // Përdor versionin me tre parametra
```

### Detyrë: Funksionet kombino()

Krijo dy funksione void kombino(a,b)

- funksioni i par i mbledh dy numra
- funksioni i dyt i bashkon dy tekse (string)
