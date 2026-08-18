# 🎯 Resolución de Problemas y Práctica Algorítmica

> Espacio de entrenamiento práctico para resolver retos en plataformas como **Exercism** y **LeetCode**, aplicando el **Método Noveira** (Anti-Vibe Coding) y registrando el aprendizaje en el Segundo Cerebro.

---

## 🏛️ Arquitectura de Carpetas y Regla de Aislamiento

Para garantizar que **Marco** y **Enrique** puedan practicar a su propio ritmo, comparar enfoques y evitar conflictos de Git al trabajar en ramas o el repositorio común, la práctica está estrictamente separada por autor:

```text
resolucion_problemas/
├── README.md                      # 📖 Este documento de guía
│
├── Exercism/                      # 🧪 Pistas guiadas por conceptos y TDD (CMake)
│   ├── README.md                  # Guía de configuración del Exercism CLI y CMake
│   ├── marco/                     # 👨‍💻 Práctica individual de Marco
│   └── enrique/                   # 👨‍💻 Práctica individual de Enrique
│
└── LeetCode/                      # ⚡ Retos de algoritmia y entrevistas técnicas
    ├── README.md                  # Guía de plantillas, categorías y testing local
    ├── marco/                     # 👨‍💻 Práctica individual de Marco
    └── enrique/                   # 👨‍💻 Práctica individual de Enrique
```

> [!IMPORTANT]
> **Regla de Convivencia:** Cada desarrollador solo agrega y modifica archivos dentro de su propia carpeta (`/marco` o `/enrique`). Nunca sobreescribir ni modificar las soluciones del compañero.

---

## 🧠 Metodología de Resolución (Anti-Vibe Coding / Método Noveira)

Antes de escribir código apresurado o depender de autocompletados:

1. **Diseñar en Papel Primero:** Trazar casos de prueba a mano y dibujar el flujo de datos.
2. **Identificar la Cota Asintótica:** Determinar qué complejidad temporal y espacial ($O(N)$, $O(\log N)$, etc.) es requerida por los límites del problema.
3. **Manejar Casos de Borde (Edge Cases):** Nulos, arreglos vacíos, números negativos, desbordamientos de enteros (`long long`).
4. **Implementar con Clean Code:** Nombres de variables significativos en inglés y lógica modular.
5. **Validar con Pruebas Unitarias:** Ejecutar la suite de tests locales antes de enviar la solución.
6. **Compilar en el Segundo Cerebro:** El agente o tú mismo crean una ficha en `wiki/ejercicios/cpp/<autor>/` y la indexan en [[index|wiki/index.md]].

---

## 🛠️ Enlaces Rápidos a Plataformas

- 🧪 [[resolucion_problemas/Exercism/README|Guía de Exercism]]
- ⚡ [[resolucion_problemas/LeetCode/README|Guía de LeetCode]]
- 👨‍💻 [[marco|Espacio de Marco en la Wiki]] | [[marco-cpp|Hub C++ de Marco]]
- 👨‍💻 [[enrique|Espacio de Enrique en la Wiki]] | [[enrique-cpp|Hub C++ de Enrique]]
