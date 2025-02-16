# Proyecto: **libftprintf** - 42 Barcelona

Bienvenido al proyecto **libftprintf** de 42 Barcelona. En este desafío, crearás una librería llamada `libftprintf.a` que reemplace la función estándar `printf()` de C. Es un ejercicio clave para entender cómo funcionan las funciones variádicas y cómo manipular el formato de salida en C.

## 🚀 Objetivo

El objetivo es reimplementar la función `printf()` para soportar los siguientes modificadores de formato:

- `%c` - Imprime un solo carácter.
- `%s` - Imprime una cadena de caracteres.
- `%p` - Imprime un puntero (`void*`) en formato hexadecimal.
- `%d` - Imprime un número entero (base 10).
- `%i` - Imprime un número entero (base 10).
- `%u` - Imprime un número sin signo (base 10).
- `%x` - Imprime un número en formato hexadecimal (minúsculas).
- `%X` - Imprime un número en formato hexadecimal (mayúsculas).
- `%%` - Imprime el símbolo `%`.

## 🛠️ Requisitos

### Funciones Permitidas

- **`malloc`**, **`free`**, **`write`**
- **`va_start`**, **`va_arg`**, **`va_copy`**, **`va_end`**

### Archivos a Entregar

1. **Makefile** con las siguientes reglas:
   - `NAME`
   - `all`
   - `clean`
   - `fclean`
   - `re`
2. **Archivos `.c` y `.h**:
   - `libftprintf.c`
   - Archivos de cabecera (`*.h`)
   - Otros archivos necesarios, con subdirectorios si es preciso.

### Herramientas y Restricciones

- **No se debe implementar la gestión del buffer**, ya que este comportamiento lo maneja internamente la función `printf()` de la libc.
- **`ar`** debe ser usado para crear la librería estática (`libftprintf.a`).
- **No se permite usar `libtool`**.

### Prototipo de la Función

```c
int ft_printf(char const *, ...);

