# 🚀 Algorithms and Data Structures & Segundo Cerebro

> Repositorio colaborativo de **Marco** y **Enrique** para el dominio experto de **Algoritmos y Estructuras de Datos (CC232 - UNI)** y preparación técnica para la industria de software, potenciado con un **Segundo Cerebro (Patrón LLM Wiki de Andrej Karpathy)**.

---

## 🎯 Propósito del Proyecto

1. **Entrenamiento de Alto Rendimiento:** Practicar algoritmia, resolución de problemas y optimización asintótica en plataformas como [LeetCode](https://leetcode.com/) y [Exercism](https://exercism.org/).
2. **Segundo Cerebro Compilado (Wiki):** Mantener una base de conocimiento persistente, interconectada y auto-mantenible con fichas de conceptos, análisis Big O, patrones de diseño y resúmenes de cada ejercicio resuelto en [[index|Catálogo Maestro]].
3. **Código Canónico Abierto:** Servir de referencia limpia y didáctica con implementaciones puras en **C++** (y prototipos en Python) de estructuras de datos y algoritmos clásicos.

---

## 🏛️ Arquitectura del Repositorio

El repositorio implementa una separación estricta entre **Fuentes en Bruto** (código ejecutable y apuntes) y la **Wiki Compilada** (Segundo Cerebro):

```text
algorithms-and-data-structures/
├── AGENTS.md                  # 🤖 Orquestador local del agente ([[AGENTS|Ver Protocolos]])
├── README.md                  # 📖 Este documento (Guía centralizada)
│
├── 🧠 wiki/                   # 🏛️ SEGUNDO CEREBRO (LLM Wiki / Obsidian Vault)
│   ├── index.md               # 🗂️ Catálogo maestro ([[index]])
│   ├── log.md                 # 📜 Registro cronológico ([[log]])
│   ├── autores/               # 👨‍💻 Hubs de Autores ([[marco]], [[enrique]])
│   ├── lenguajes/             # 🔵 Hubs de Lenguaje ([[marco-c++]], [[enrique-c++]])
│   ├── conceptos/             # 💡 Fichas de conceptos ([[notacion-big-o]], [[cpp-namespaces]], [[cpp-strings-parsing]], [[logica-booleana]], [[aritmetica-y-casting]])
│   ├── estructuras/           # 🧱 Fichas de contenedores ([[linear-structures]], [[trees-and-bst]], [[hash-tables]])
│   ├── algoritmos/            # ⚙️ Fichas de algoritmos ([[sorting-algorithms]], [[searching-and-two-pointers]], [[graph-algorithms]])
│   ├── ejercicios/            # 📝 Fichas compiladas en C++
│   │   └── cpp/
│   │       ├── marco/         # Fichas de Marco ([[exercism-lasagna]], [[exercism-last-will]], etc.)
│   │       └── enrique/       # Fichas de Enrique
│   └── sintesis/              # 📚 Síntesis CC232 ([[guia-cc232-uni]], [[big-o-cheatsheet]])
│
├── 📚 teoria_y_recursos/      # 📄 Fuentes en Bruto: Apuntes, enlaces de Visualgo, PDFs de clase
├── 🧱 estructuras_de_datos/   # 💻 Fuentes en Bruto: Clases puras C++ de estructuras canónicas
├── ⚙️ algoritmos_clasicos/     # 💻 Fuentes en Bruto: Implementaciones puras de algoritmos
└── 💻 resolucion_problemas/   # 🎯 Fuentes en Bruto: Soluciones a retos de programación
    ├── Exercism/
    │   ├── marco/             # Espacio de práctica personal de Marco
    │   └── enrique/           # Espacio de práctica personal de Enrique
    └── LeetCode/
        ├── marco/             # Espacio de práctica personal de Marco
        └── enrique/           # Espacio de práctica personal de Enrique
```

---

## 🧠 ¿Cómo funciona el Segundo Cerebro (`wiki/`)?

Inspirado en el diseño propuesto por Andrej Karpathy:

- **Conocimiento que se acumula, no que se recalcula:** A diferencia del RAG tradicional, cada ejercicio o tema nuevo se compila en fichas interconectadas dentro de `wiki/`.
- **Navegación con Catálogo Maestro:** Todo concepto, estructura, algoritmo o ejercicio está catalogado en [[index|wiki/index.md]] con enlaces y resumen.
- **Trazabilidad con Historial:** Cada acción relevante queda registrada en [[log|wiki/log.md]].
- **Compatible con Obsidian:** Al abrir el repositorio en [Obsidian](https://obsidian.md/), el **Graph View** (Vista Gráfica) conecta automáticamente todas las notas mediante enlaces `[[...]]`.

---

## 🛠️ Reglas de Convivencia y Convenciones

1. **Aislamiento en Práctica:** En `resolucion_problemas/`, cada autor trabaja en su propia carpeta sin sobreescribir ni interferir con la del otro.
2. **Código Base Compartido:** Las implementaciones en `estructuras_de_datos/` y `algoritmos_clasicos/` son de autoría colaborativa y deben ser impecables.
3. **Clean Code & Idiomas:**
   - Nombres de clases, métodos y variables en **inglés**.
   - Comentarios explicativos y documentación en **español**.
4. **Análisis de Complejidad Obligatorio:** En cada solución o estructura, incluir la notación Big O de tiempo y espacio auxiliar (Ej: $O(N \log N)$ tiempo, $O(1)$ espacio, consultar [[big-o-cheatsheet]]).
5. **Conventional Commits & Autocommit:** Todos los commits deben seguir el estándar de [[AGENTS|autocommit.md]] (`FEAT`, `FIX`, `DOCS`, `STYLE`, `REFACTOR`, `PERF`, `TEST`).
