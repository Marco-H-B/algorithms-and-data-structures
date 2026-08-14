# 🧱 Estructuras de Datos

Colección de implementaciones de referencia de estructuras de datos canónicas en **C++** (y Python para prototipado).

---

## 🎯 Propósito
Servir como base de código limpia, modular y didáctica de los contenedores y estructuras fundamentales usadas en ciencias de la computación.

---

## 📐 Estándar de Código y Estructura
Cada estructura debe implementarse como una clase/módulo reutilizable, acompañada de un archivo de prueba/demostración (`main.cpp` o tests) y su propio `README.md` explicativo.

### Reglas de Implementación:
1. **Idioma:** Código, clases, funciones y variables en **inglés**. Comentarios explicativos en **español**.
2. **Análisis de Complejidad:** Documentar en el encabezado de cada método la complejidad temporal y espacial en notación Big $O$:
   - Tiempo de inserción, búsqueda, eliminación y acceso.
   - Espacio en memoria auxiliar.
3. **Manejo de Memoria:** En C++, priorizar uso seguro de memoria, punteros inteligentes (`std::unique_ptr`, `std::shared_ptr`) o RAII cuando aplique.

---

## 📋 Estructuras a Implementar
- **Lineales:**
  - Listas Simplemente / Doblemente / Circularmente Enlazadas
  - Pilas (*Stacks*)
  - Colas (*Queues*, *Deques*, *Priority Queues*)
- **No Lineales:**
  - Árboles Binarios de Búsqueda (*BST*)
  - Árboles Auto-balanceados (*AVL*, *Red-Black Trees*)
  - Montículos (*Heaps*)
  - Árboles de Segmentos (*Segment Trees*) / *Fenwick Tree*
  - Tablas Hash (*Hash Maps*, *Hash Sets*)
  - Grafos (Matriz de Adyacencia, Lista de Adyacencia)
