# Bazat e Programimit - C++ (Java 4)

## Përsëritje: Kushtezimet (if Statements)

Në javën e kaluar mësuam për kushtezimet që lejojnë programin të marrë vendime:

### if - Kushtezimi i Thjeshtë

```cpp
if (kushti) {
    // Ekzekutohet nëse kushti është i vërtetë
}
```

### if-else - Dy Degëzime

```cpp
if (kushti) {
    // Ekzekutohet nëse kushti është i vërtetë
} else {
    // Ekzekutohet nëse kushti është i gabuar
}
```

### if-else if-else - Shumë Degëzime

```cpp
if (kushti1) {
    // Blloku 1
} else if (kushti2) {
    // Blloku 2
} else if (kushti3) {
    // Blloku 3
} else {
    // Blloku i fundit
}
```

### Operatorët Relacionalë dhe Logjikë

```cpp
// Relacionalë: ==, !=, >, <, >=, <=
// Logjikë: && (DHE), || (OSE), ! (JO)

if (mosha >= 18 && mosha <= 65) {
    cout << "Moshë pune" << endl;
}
```

---

## 1. Operatori Ternar (Ternary Operator)

### Sintaksa

```cpp
variabla = kushti ? shprehja1 : shprehja2;
```

**Shpjegim**:

- Nëse `kushti` është i vërtetë → ekzekutohet `shprehja1`
- Nëse `kushti` është i gabuar → ekzekutohet `shprehja2`

### Shembuj Praktikë

#### Shembulli 1: Vlera Absolute

```cpp
int x = -5;
int vlera_absolute = (x >= 0) ? x : -x;
cout << "Vlera absolute: " << vlera_absolute << endl;  // Output: 5
```

#### Shembulli 2: Maksimumi i Dy Numrave

```cpp
int a = 15, b = 20;
int max = (a > b) ? a : b;
cout << "Maksimumi: " << max << endl;  // Output: 20
```

### Krahasimi me if-else

```cpp
// Me operator ternar (1 rresht)
int max = (a > b) ? a : b;

// Me if-else (5 rreshta)
int max;
if (a > b) {
    max = a;
} else {
    max = b;
}
```

### Kur të Përdoret Operatori Ternar

✅ **Përdorni kur**:

- Keni vetëm dy opsione
- Shoqërimi është i thjeshtë
- Kodi bëhet më i kompakt dhe i lexueshëm

❌ **Mos përdorni kur**:

- Keni logjikë komplekse
- Duhet të ekzekutoni shumë urdhëra
- Kodi bëhet i pakuptimtë

---

## 2. Urdhëri switch

### Çfarë është switch?

`switch` është një strukturë kontrolli që lejon zgjedhjen mes shumë opsioneve bazuar në vlerën e një variabli. Është alternativë më e pastër dhe më e lexueshme se `if-else if` kur krahasojmë të njëjtën variabël me vlera të ndryshme.

### Sintaksa Bazë

```cpp
switch (variabla) {
    case vlera1:
        // Kodi për vlera1
        break;
    case vlera2:
        // Kodi për vlera2
        break;
    case vlera3:
        // Kodi për vlera3
        break;
    default:
        // (Opsional) Kodi nëse asnjë case nuk përputhet
        break;
}
```

### Komponentët e switch

1. **`switch (variabla)`**: Variabla që kontrollohet
2. **`case vlera:`**: Çdo vlerë e mundshme
3. **`break;`**: Ndalon ekzekutimin dhe del nga switch
4. **`default:`**: Ekzekutohet nëse asnjë case nuk përputhet (opsional)

### Rregullat e switch

- Variabla duhet të jetë tip **`int`**, **`char`**, ose **`enum`** (JO `double`, `float`, `string`)
- `break` është i rëndësishëm - pa të, kodi vazhdon në case-in tjetër!
- `default` është opsional por rekomandohet

### Shembull: Ditët e Javës

```cpp
int dita;
cout << "Shkruani numrin e ditës (1-7): ";
cin >> dita;

switch (dita) {
    case 1:
        cout << "E Hënë" << endl;
        break;
    case 2:
        cout << "E Martë" << endl;
        break;
    case 3:
        cout << "E Mërkurë" << endl;
        break;
    case 4:
        cout << "E Enjte" << endl;
        break;
    case 5:
        cout << "E Premte" << endl;
        break;
    case 6:
        cout << "E Shtunë" << endl;
        break;
    case 7:
        cout << "E Diel" << endl;
        break;
    default:
        cout << "Numër i pavlefshëm!" << endl;
        break;
}
```

### Case të Shumëfishta (Fall-through)

Disa case mund të ekzekutojnë të njëjtin kod:

```cpp
char shkronja;
cin >> shkronja;

switch (shkronja) {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
    case 'y':
    case 'ë':
        cout << "Zanore" << endl;
        break;
    default:
        cout << "Bashkëtingëllore" << endl;
        break;
}
```

### Rëndësia e break

**Pa `break`**, kodi "bie" në case-in tjetër (fall-through):

```cpp
int x = 2;

// PA break
switch (x) {
    case 1:
        cout << "Një" << endl;
    case 2:
        cout << "Dy" << endl;     // Ekzekutohet
    case 3:
        cout << "Tre" << endl;    // Ekzekutohet gjithashtu!
}
// Output: Dy, Tre

// ME break
switch (x) {
    case 1:
        cout << "Një" << endl;
        break;
    case 2:
        cout << "Dy" << endl;
        break;                     // Ndalon këtu
    case 3:
        cout << "Tre" << endl;
        break;
}
// Output: Dy
```

### switch vs if-else if

**Përdorni switch kur**:

- ✅ Krahasoni të njëjtën variabël me vlera të shumta konstante
- ✅ Keni tip të thjeshtë (`int`, `char`)
- ✅ Dëshironi kod më të lexueshëm

**Përdorni if-else if kur**:

- ✅ Keni kushte komplekse (`&&`, `||`)
- ✅ Krahasoni intervale (`x > 10 && x < 20`)
- ✅ Përdorni `double`, `float`, `string`
- ✅ Krahasoni variabla të ndryshme

---

## 3. Urdhëri goto

### Çfarë është goto?

`goto` është urdhër që bën kërcim të pakushtëzuar në një etiketë (label) tjetër në program.

### Sintaksa

```cpp
label:
    // Kodi këtu

// Diku tjetër në program
goto label;  // Kërcon në etiketën "label"
```

### Shembull Bazë

```cpp
int count = 1;

start:  // Etiketa
    cout << "Count: " << count << endl;
    count++;

    if (count <= 5) {
        goto start;  // Kthehu te etiketa "start"
    }

cout << "Përfundoi!" << endl;
```

**Output**:

```
Count: 1
Count: 2
Count: 3
Count: 4
Count: 5
Përfundoi!
```

### Pse goto Konsiderohet i Keq?

🚫 **Problemet me goto**:

1. **Kod i pastrukturuar** - E vështirë për t'u lexuar dhe kuptuar
2. **"Spaghetti code"** - Kërcime nga të gjitha anët
3. **E vështirë për debug** - Nuk dihet ku do të shkojë programi
4. **Ka alternativa më të mira** - Loops dhe funksione janë më të qarta

### Alternativa më e Mirë - Përdorni Loops

```cpp
// ❌ Me goto (i keq)
int count = 1;
start:
    cout << count << endl;
    count++;
    if (count <= 5) goto start;

// ✅ Me while loop (mirë)
int count = 1;
while (count <= 5) {
    cout << count << endl;
    count++;
}

// ✅ Me for loop (më e mirë)
for (int count = 1; count <= 5; count++) {
    cout << count << endl;
}
```

**Rekomandim**: Shmangni përdorimin e `goto` në C++ modern!

---

## 4. Detyra Praktike për Klasë

### Detyra 1: Kalkulator me switch

**Përshkrim**: Krijoni një kalkulator që përdor `switch` për operacionet matematikore bazë.

**Kërkesa**:

- Lexoni dy numra dhe një operator (+, -, \*, /, %)
- Përdorni `switch` për të zgjedhur operacionin
- Shfaqni rezultatin
- Trajtoni rastet e gabimit (pjesëtim me zero, operator i pavlefshëm)

**Input shembull**: `10 + 5`  
**Output shembull**: `10 + 5 = 15`

---

### Detyra 2: Konvertimi i Notave (ECTS)

**Përshkrim**: Konvertoni notën nga sistemi 10-shkallor në sistemin ECTS (A, B, C, D, E, F).

**Kërkesa**:

- Lexoni notën në sistemin 10-shkallor (1-10)
- Përdorni `switch` për konvertimin:
  - 10 → A (Shkëlqyeshëm)
  - 9 → B (Shumë Mirë)
  - 8 → C (Mirë)
  - 7 → D (Mjaftueshëm)
  - 6 → E (Kalueshëm)
  - 1-5 → F (Dështim)
- Shfaqni notën ECTS dhe përshkrimin
- Përdorni operator ternar për të treguar statusin (KALUAR/DËSHTUAR)

**Input shembull**: `8`  
**Output shembull**:

```
Nota 10-shkallore: 8
Nota ECTS: C
Përshkrim: Mirë
Statusi: ✓ KALUAR
```

---

### Detyre Shtepie: Bileta Kinema (me if-else dhe operatorë ternarë)

**Përshkrim**: Llogaritni çmimin e biletës së kinemas bazuar në moshë dhe ditë.

**Kërkesa**:

- Lexoni moshën e personit
- Lexoni ditën e javës (1-7)
- Çmimi bazë: 8.00€
- Zbritje sipas moshës (përdorni if-else):
  - Nën 12 vjeç: 50% zbritje
  - 12-18 vjeç: 30% zbritje
  - Mbi 65 vjeç: 40% zbritje
  - Të tjerët: Asnjë zbritje
- Zbritje shtesë për ditët 1-5 (E Hënë - E Premte): 20% zbritje ekstra
- Shfaqni çmimin final dhe detajet

**Input shembull**: Mosha 15, Dita 3  
**Output shembull**:

```
Çmimi bazë: 8.00€
Zbritje mosha: 2.40€ (30%)
Zbritje dite: 1.12€ (20%)
Për të paguar: 4.48€
```
