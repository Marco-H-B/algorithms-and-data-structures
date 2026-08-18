# 🧱 Estructuras de Datos Canónicas (C++ Puro)

> Implementaciones limpias, robustas y didácticas de contenedores y estructuras de datos en **C++ moderno (C++20)** para el curso **CC232 (UNI)** y preparación para la industria.

---

## 🎯 Propósito del Directorio

Este directorio es un **código base colaborativo** de Marco y Enrique. A diferencia de las carpetas personales de resolución de problemas, el código aquí presente sirve como **referencia canónica** para estudiar, reutilizar y comprender los fundamentos internos de cómo funcionan los contenedores de la STL (`std::vector`, `std::list`, `std::unordered_map`, `std::priority_queue`, etc.) desde cero.

---

## 📂 Estructura Sugerida de Contenedores

```text
estructuras_de_datos/
├── README.md                      # 📖 Este documento de guía
│
├── lineales/                      # 🔗 Estructuras lineales
│   ├── singly_linked_list/        # Lista simplemente enlazada
│   ├── doubly_linked_list/        # Lista doblemente enlazada
│   ├── circular_linked_list/      # Lista circular
│   ├── stack/                     # Pila (LIFO) basada en nodos y en array dinámico
│   └── queue/                     # Cola (FIFO) y Deque
│
├── arboles/                       # 🌲 Árboles y jerarquías
│   ├── binary_search_tree/        # BST clásico (inserción, búsqueda, eliminación)
│   ├── avl_tree/                  # Árbol AVL auto-balanceado (rotaciones LL, RR, LR, RL)
│   ├── red_black_tree/            # Árbol Rojo-Negro (conceptos y recoloreo)
│   ├── trie/                      # Prefijos de cadenas (Prefix Tree)
│   └── segment_tree/              # Consultas de rango y actualización
│
├── heaps/                         # ⛰️ Montículos y colas de prioridad
│   ├── binary_heap/               # Min-Heap y Max-Heap con Heapify en O(N)
│   └── priority_queue/            # Cola de prioridad basada en Heap
│
├── hash/                          # 🗝️ Tablas Hash y funciones de dispersión
│   ├── hash_table_chaining/       # Resolución de colisiones por Encadenamiento
│   └── hash_table_open_addressing/# Sondeo lineal, cuadrático y Double Hashing
│
├── conjuntos_disjuntos/           # 🧩 Disjoint Set Union (DSU / Union-Find)
│   └── union_find/                # Con optimizaciones: Union by Rank y Path Compression
│
└── grafos/                        # 🕸️ Representaciones de grafos
    ├── adjacency_matrix/          # Matriz de adyacencia
    └── adjacency_list/            # Lista de adyacencia (pesados y no pesados)
```

---

## 📐 Estándar de Código y Buenas Prácticas

1. **Nomenclatura y Lenguaje:**
   - Nombres de clases, métodos, tipos y variables en **inglés** (ej: `insert()`, `remove()`, `size()`, `Node<T>`).
   - Comentarios explicativos y documentación de métodos en **español**.
2. **Plantillas (Templates) y Tipado Genérico:**
   - Diseñar las estructuras usando `template <typename T>` para soportar cualquier tipo de dato.
3. **Gestión de Memoria y RAII:**
   - Manejo explícito de punteros y destrucción de memoria en el destructor `~Container()` para evitar fugas de memoria (_memory leaks_).
4. **Cabecera de Complejidad Big O:**
   - Cada clase o método principal debe incluir su análisis asintótico temporal y espacial:
   ```cpp
   /**
    * @brief Inserta un nuevo elemento en el árbol AVL y reequilibra si es necesario.
    * @time O(log N) - Altura acotada por balanceo estricto.
    * @space O(log N) - Pila de recursión.
    */
   void insert(const T& value);
   ```

---

## 🔗 Fichas de Estudio Relacionadas en la Wiki

- [[linear-structures|Estructuras Lineales: Listas, Pilas y Colas]]
- [[trees-and-bst|Árboles Binarios de Búsqueda, AVL y Heaps]]
- [[hash-tables|Tablas Hash, Funciones Hash y Manejo de Colisiones]]
- [[big-o-cheatsheet|Cheat Sheet de Complejidad Big O]]
