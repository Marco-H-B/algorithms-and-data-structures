# 👨‍💻 LeetCode: Espacio de Práctica de Enrique

> ¡Bienvenido, Enrique! Este es tu espacio personal para resolver problemas de **LeetCode en C++**.

---

## 🎯 Instrucciones de Trabajo

1. **Crear archivo para cada problema:**
   Guarda cada solución directamente en esta carpeta siguiendo el formato `XXXX_nombre_del_problema.cpp` (ejemplo: `0001_two_sum.cpp`, `0206_reverse_linked_list.cpp`).

2. **Estructura recomendada del archivo:**

   ```cpp
   /**
    * @file 0020_valid_parentheses.cpp
    * @author Enrique
    * @brief LeetCode #20 - Valid Parentheses
    * @difficulty Easy
    * @time O(N)
    * @space O(N)
    */

   #include <iostream>
   #include <string>
   #include <stack>
   #include <cassert>

   class Solution {
   public:
       bool isValid(const std::string& s) {
           std::stack<char> st;
           for (char c : s) {
               if (c == '(' || c == '{' || c == '[') {
                   st.push(c);
               } else {
                   if (st.empty()) return false;
                   char top = st.top();
                   if ((c == ')' && top != '(') ||
                       (c == '}' && top != '{') ||
                       (c == ']' && top != '[')) {
                       return false;
                   }
                   st.pop();
               }
           }
           return st.empty();
       }
   };

   int main() {
       Solution solver;
       assert(solver.isValid("()") == true);
       assert(solver.isValid("()[]{}") == true);
       assert(solver.isValid("(]") == false);
       std::cout << "✅ Tests completados exitosamente.\n";
       return 0;
   }
   ```

3. **Compilar y probar localmente en consola:**
   ```bash
   g++ -std=c++20 -O2 0020_valid_parentheses.cpp -o solution.exe
   ./solution.exe
   ```

---

## 🗺️ Problemas Iniciales Recomendados (NeetCode 150 - Core)

1. `0001_two_sum.cpp` (Hash Table / Arrays)
2. `0217_contains_duplicate.cpp` (Hash Set)
3. `0242_valid_anagram.cpp` (Frecuencias / Hash)
4. `0125_valid_palindrome.cpp` (Two Pointers)
5. `0020_valid_parentheses.cpp` (Stack)
6. `0206_reverse_linked_list.cpp` (Linked List)
7. `0704_binary_search.cpp` (Binary Search)
8. `0226_invert_binary_tree.cpp` (Trees / DFS)

---

## 🔗 Integración con la Wiki

Cuando resuelvas un problema, podemos compilar su ficha en:

- [[enrique-cpp|Hub C++ de Enrique]]
- [[index|Catálogo Maestro de la Wiki]]
