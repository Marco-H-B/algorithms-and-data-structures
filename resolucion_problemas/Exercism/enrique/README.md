# 👨‍💻 Exercism: Espacio de Práctica de Enrique

> ¡Bienvenido, Enrique! Este es tu espacio personal para resolver retos en la pista de **C++ en Exercism**.

---

## 🎯 Instrucciones de Configuración Rápida

Para descargar tus ejercicios directamente a este directorio:

```bash
# 1. Configurar tu token de Exercism (si no lo has hecho aún)
exercism configure --token=TU_TOKEN_PERSONAL

# 2. Configurar tu workspace apuntando a esta carpeta
exercism configure --workspace="E:\development\algorithms-and-data-structures\resolucion_problemas\Exercism\enrique"
```

---

## 📂 Estructura de tu Carpeta

Cuando descargues un ejercicio con el CLI de Exercism, se creará dentro de una subcarpeta `cpp/`:

```text
resolucion_problemas/Exercism/enrique/
├── README.md                      # 📖 Este documento de guía
└── cpp/                           # 🔵 Pista de C++
    ├── lasagna/                   # Ejemplo de ejercicio
    │   ├── lasagna.h
    │   ├── lasagna.cpp
    │   ├── lasagna_test.cpp
    │   └── CMakeLists.txt
    ├── log-levels/
    └── raindrops/
```

---

## ⚡ Ciclo de Desarrollo Paso a Paso

1. **Descargar el reto:**

   ```bash
   exercism download --track=cpp --exercise=<nombre-ejercicio>
   ```

2. **Entrar al directorio del ejercicio:**

   ```bash
   cd cpp/<nombre-ejercicio>
   ```

3. **Compilar y verificar tests con CMake:**

   ```bash
   cmake -B build -S .
   cmake --build build
   ctest --test-dir build --output-on-failure
   ```

4. **Enviar tu solución a la plataforma:**
   ```bash
   exercism submit <nombre-ejercicio>.cpp <nombre-ejercicio>.h
   ```

---

## 🗺️ Ejercicios Recomendados para Iniciar

1. `lasagna` (Sintaxis básica, funciones y constantes)
2. `last-will` (Namespaces y resolución de ámbito `::`)
3. `log-levels` (Strings, parsing y `find`/`substr`)
4. `pacman-rules` (Lógica booleana y evaluación de cortocircuito)
5. `raindrops` (Operador módulo y conversiones)
6. `reverse-string` (Manipulación de punteros e iteradores)
7. `space-age` (Tipos flotantes y constantes matemáticas)
