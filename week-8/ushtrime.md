# Funksionet dhe Vektorët e Derivuar

## 1. Formimi i vektorit të ri (Filtrimi)

Kur duam të krijojmë një vektor të ri vetëm me disa numra nga një vektor tjetër, përdorim një numërues të dytë (zakonisht `k`).

### Shembull 1: Numrat Çift

Krijimi i vektorit `B` vetëm me numrat çift të vektorit `A`.

```cpp
int A[5] = {2, 5, 8, 3, 10};
int B[5];
int k = 0; // Indeksi për vektorin e ri B

for(int i = 0; i < 5; i++) {
    if(A[i] % 2 == 0) { // Nëse numri është çift
        B[k] = A[i];
        k++;
    }
}

// Shtypja e B
for(int i = 0; i < k; i++) {
    cout << B[i] << " ";
}
```

### Detyra 1

Kopjoni kodin e mësipërm dhe modifikoni kushtin që në vektorin `B` të futen vetëm **numrat tek** te nje matrice.

```cpp
int A[2][5] = {
    {2, 5, 8, 3, 10},
    {23, 55, 83, 32, 10}
};
int B[10];

// for(int i = 0; i < m; i++) {
//     for(int j = 0; j < n; j++) {
//         shuma += A[i][j];
//     }
// }
```

---

## 2. Funksionet e Thjeshta

Funksioni është bllok kodi që kryen një punë.

### Shembull 2: Funksioni për Katrorin

Një funksion që merr një numër dhe kthen katrorin e tij.

```cpp
int katrori(int x) {
    return x * x;
}

int main() {
    int n = 5;
    cout << katrori(n); // Shtyp 25
    return 0;
}
```

### Detyra 2

Shkruani funksionin `kubi(int x)` që kthen numrin në fuqinë e tretë ($x^3$).

---

## 3. Funksionet në Seri

Përdorimi i funksioneve për të thjeshtuar formulat e gjata.

### Shembull 3: Faktorieli

Llogaritja e $S = 1! + 2! + ... + n!$

```cpp
// Funksioni ndihmës
long faktorieli(int n) {
    long f = 1;
    for(int i = 1; i <= n; i++) {
        f = f * i;
    }
    return f;
}

int main() {
    int n = 4;
    long shuma = 0;

    for(int i = 1; i <= n; i++) {
        shuma = shuma + faktorieli(i);
    }

    cout << "Shuma = " << shuma;
    return 0;
}
```

### Detyra 3

Modifikoni shembullin për të llogaritur shumën: $S = 1! + 3! + 5!$ (vetëm për numrat tek).

---

## 4. Funksionet me Vektorë

Kur dërgojmë vektorin në funksion, duhet të dërgojmë edhe madhësinë e tij.

### Shembull 4: Shuma e Vektorit

```cpp
int shumaVektorit(int V[], int n) {
    int s = 0;
    for(int i = 0; i < n; i++) {
        s = s + V[i];
    }
    return s;
}

int main() {
    int A[] = {10, 20, 30};
    // Thirrja: emri i vektorit dhe numri i elementeve
    cout << "Shuma eshte: " << shumaVektorit(A, 3);
    return 0;
}
```

### Detyra 4

Krijoni funksionin `mesatarjaVektorit(int V[], int n)` që kthen mesataren e numrave (Shuma / n).
