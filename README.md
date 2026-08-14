# 🚀 Algorithms and Data Structures

Una guía de supervivencia, código de referencia y repositorio colaborativo para dominar Algoritmos y Estructuras de Datos (enfocado en superar CC232 de la UNI y prepararse para la industria).

## 🎯 Objetivo

El propósito de este repositorio es doble:

1. **Para nosotros (Marco y Enrique):** Practicar lógica pura, y tener un registro de nuestro avance en plataformas de _competitive programming_ (LeetCode, Exercism).
2. **Para la comunidad:** Servir como una guía abierta, estructurada y limpia para que cualquier estudiante pueda entender este curso sin morir en el intento, separando claramente la teoría, las estructuras base y los algoritmos que las operan.

## 📂 Arquitectura del Repositorio

El repositorio está dividido intencionalmente para separar la _teoría_, las _herramientas_ y la _práctica_:

- `📚 teoria_y_recursos`: **Los Planos.** Aquí encontrarás apuntes, resúmenes, PDFs, cheat sheets y enlaces útiles (como animaciones de Visualgo). Es el _porqué_ de las cosas.
- `🧱 estructuras_de_datos`: **Los Contenedores.** Implementaciones puras de cómo se guarda la información (Ej: Listas Enlazadas, Pilas, Colas, Árboles, Grafos). Son los bloques de construcción.
- `⚙️ algoritmos_clasicos`: **Las Acciones.** Los procesos paso a paso que operan sobre los datos (Ej: Búsqueda Binaria, Algoritmo de Dijkstra, Métodos de Ordenamiento).
- `💻 resolucion_problemas`: **El Campo de Práctica.** Aquí es donde resolvemos retos diarios.
  - Para evitar conflictos y ver diferentes enfoques de una misma solución, esta carpeta se subdivide por plataforma (`leetcode/`, `exercism/`) y luego por autor (`/marco/`, `/enrique/`).

## 🤝 ¿Cómo trabajar y aportar aquí?

1. **Espacios separados para práctica:** En `💻 resolucion_problemas`, cada uno trabaja exclusivamente en su carpeta personal.
2. **Código Base Global:** Las carpetas de `🧱 estructuras_de_datos` y `⚙️ algoritmos_clasicos` son el código "oficial" del repo. Cualquier mejora aquí beneficia a toda la comunidad.
3. **Clean Code:** Nombres de variables y funciones en inglés. Los comentarios en español deben explicar el _porqué_, no el _qué_.
4. **Complejidad (Big O):** En la cabecera de las soluciones, algoritmos o estructuras complejas, siempre detallar la complejidad temporal y espacial (Ej: Tiempo $O(N)$, Espacio $O(1)$).
