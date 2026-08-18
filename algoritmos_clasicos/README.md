# ⚙️ Algoritmos Clásicos (C++ Puro)

> Implementaciones puras, modulares y rigurosamente analizadas de los algoritmos y paradigmas de diseño fundamentales para **Algoritmos y Estructuras de Datos (CC232 - UNI)** y entrevistas técnicas.

---

## 🎯 Propósito del Directorio

Este directorio contiene las implementaciones base de algoritmos clásicos, organizados por paradigmas y familias de problemas. Es un espacio colaborativo entre Marco y Enrique enfocado en entender el flujo lógico, la demostración de correctitud y la cota asintótica de cada algoritmo.

---

## 📂 Organización por Categorías y Paradigmas

```text
algoritmos_clasicos/
├── README.md                      # 📖 Este documento de guía
│
├── ordenamiento/                  # 🔄 Algoritmos de Ordenamiento (Sorting)
│   ├── comparativos/              # O(N^2) y O(N log N)
│   │   ├── bubble_sort.cpp        # Bubble Sort optimizado con flag de corte
│   │   ├── selection_sort.cpp     # Selection Sort
│   │   ├── insertion_sort.cpp     # Insertion Sort (óptimo para arrays pequeños o casi ordenados)
│   │   ├── merge_sort.cpp         # Merge Sort (Divide & Conquer, estable)
│   │   ├── quick_sort.cpp         # Quick Sort (pivote aleatorio y mediana de tres)
│   │   └── heap_sort.cpp          # Heap Sort (in-place)
│   └── no_comparativos/           # O(N + K)
│       ├── counting_sort.cpp      # Counting Sort (números en rango acotado)
│       └── radix_sort.cpp         # Radix Sort (LSD / MSD)
│
├── busqueda_y_punteros/           # 🔍 Búsqueda y Técnicas de Punteros
│   ├── binary_search.cpp          # Búsqueda binaria clásica y sobre funciones monótonas
│   ├── two_pointers.cpp           # Dos punteros convergentes y divergentes
│   ├── sliding_window.cpp         # Ventana deslizante de tamaño fijo y variable
│   └── floyd_cycle_detection.cpp  # Punteros rápido y lento (Tortoise & Hare)
│
├── grafos/                        # 🕸️ Algoritmos sobre Grafos
│   ├── recorridos/                # BFS (Breadth-First) y DFS (Depth-First)
│   ├── caminos_minimos/           # Dijkstra, Bellman-Ford, Floyd-Warshall
│   ├── arboles_expansion_minima/  # Kruskal (con DSU) y Prim
│   └── ordenacion_topologica/     # Kahn (BFS con in-degree) y DFS con stack
│
├── programacion_dinamica/         # 🧩 Dynamic Programming (DP)
│   ├── knapsack_01.cpp            # Mochila 0/1 (Top-Down y Bottom-Up con optimización espacial)
│   ├── lcs.cpp                    # Longest Common Subsequence
│   ├── lis.cpp                    # Longest Increasing Subsequence (O(N^2) y O(N log N))
│   ├── coin_change.cpp            # Cambio de monedas (mínimas monedas / combinaciones)
│   └── edit_distance.cpp          # Distancia de Levenshtein
│
├── algoritmos_voraces/            # ⚡ Algoritmos Greedy
│   ├── interval_scheduling.cpp    # Selección de actividades
│   ├── fractional_knapsack.cpp    # Mochila fraccionaria
│   └── huffman_coding.cpp         # Codificación de Huffman
│
└── backtracking/                  # 🔙 Fuerza Bruta Inteligente
    ├── n_queens.cpp               # Problema de las N Reinas
    ├── sudoku_solver.cpp          # Resolutor de Sudoku
    └── subset_sum.cpp             # Generación de subconjuntos y permutaciones
```

---

## 📐 Reglas de Implementación

1. **Funciones Puras y Desacopladas:** Cada algoritmo debe estar encapsulado en una función o clase modular que reciba iteradores o contenedores genéricos (`std::vector<T>`, `std::span<T>`, etc.).
2. **Documentación Asintótica Obligatoria:** Especificar en el encabezado:
   - **Complejidad Temporal:** Mejor caso, caso promedio y peor caso ($O$, $\Omega$, $\Theta$).
   - **Complejidad Espacial Auxiliar:** Memoria adicional utilizada.
3. **Casos de Borde (Edge Cases):** Incluir pruebas para contenedores vacíos, de 1 elemento, elementos duplicados o arreglos ya ordenados/invertidos.

---

## 🔗 Fichas de Estudio Relacionadas en la Wiki

- [[sorting-algorithms|Guía Completa de Algoritmos de Ordenamiento]]
- [[searching-and-two-pointers|Búsqueda Binaria, Two Pointers y Ventana Deslizante]]
- [[graph-algorithms|Algoritmos Fundamentales de Grafos]]
- [[notacion-big-o|Fundamentos y Definición de Notación Big O]]
- [[big-o-cheatsheet|Cheat Sheet de Complejidad Big O]]
