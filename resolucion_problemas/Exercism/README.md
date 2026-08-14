# 💧 Exercism

Resolución de ejercicios de la plataforma [Exercism.org](https://exercism.org/).

---

## 🚀 Configuración del CLI de Exercism
Para que los ejercicios se descarguen automáticamente en tu carpeta personal:

- **Para Marco:**
  ```powershell
  exercism configure -w "E:\development\algorithms-and-data-structures\💻 resolucion_problemas\Exercism\marco"
  ```

- **Para Enrique:**
  ```powershell
  exercism configure -w "<ruta_a_tu_repo>\💻 resolucion_problemas\Exercism\enrique"
  ```

---

## 🔄 Flujo de Trabajo Típico
1. Descargar el ejercicio con el CLI:
   ```bash
   exercism download --exercise=<nombre-ejercicio> --track=cpp
   ```
2. Resolver el problema en local pasando los tests unitarios.
3. Subir la solución a Exercism:
   ```bash
   exercism submit <archivos_de_solucion>
   ```
4. Guardar en Git con Conventional Commits:
   ```bash
   git commit -m "FEAT(exercism): resolver ejercicio <nombre> en <lenguaje>"
   ```
