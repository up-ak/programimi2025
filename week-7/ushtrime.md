## Matricat

### Hyrje në Matrica

Matrica është varg dy-dimensional me rreshta dhe kolona. Në C++, rreshtat dhe kolonat fillojnë me indeksin 0.

Shembull i deklarimit të matricës 3x4:

```cpp
int V[3] = { 1, 2, 3 }
int A[3][4] = {
    {2, 4, 7, 1},
    {5, -1, 3, 5},
    {3, 2, 1, 14}
};
```

### Operacionet me Matrica

#### 1. Leximi dhe Shkrimi i Anëtarëve

```cpp
int vlera = A[1][3];
A[2][0] = 13; // ndryshimi i elementit
```

#### 2. Llogaritja e Shumës së Matricës

```cpp
int shuma = 0;
for(int i = 0; i < m; i++) {
    for(int j = 0; j < n; j++) {
        shuma += A[i][j];
    }
}
```

### Matrica Katrore

Matrica katrore ka numër të njëjtë të rreshtave dhe kolonave. Karakteristikat e veçanta:

- Elementet në diagonale (i == j)
- Elementet mbi diagonale (i < j)
- Elementet nën diagonale (i > j)

Shembull i krijimit të matricës katrore me vlera specifike:

```cpp
const int n = 5;
int A[n][n];

for(int i = 0; i < n; i++) {
    for(int j = 0; j < n; j++) {
        if(i < j){
            A[i][j] = -1; // Mbi diagonale
        }
        else if(i == j){
            A[i][j] = 0; // Në diagonale
        }
        else {
            A[i][j] = 1; // Nën diagonale
        }
    }
}
```

## Detyra Shtesë

Për matricë katrore 3x3:

1. Gjetja e numrit të elementeve pozitive
2. Gjetja e numrit të elementeve negative
3. Llogaritja e shumës së elementeve mbi diagonale
4. Llogaritja e shumës së elementeve nën diagonale

Për matricë katrore 4x4:

1. Leximi i anetarve nga tastjera
2. Gjetja e numrit të elementeve tek
3. Llogaritja e prodhimit së elementeve mbi diagonale
4. Llogaritja e prodhimit së elementeve nën diagonale
