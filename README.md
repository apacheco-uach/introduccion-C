# Introducción a C/C++
 En este repositorio se encuentran los ejemplos básicos de programación en C

Puedes encontrar los cursos correspondientes a los ejercicios mostrados en este repositorio en el siguiente enlace.

https://edu.codigoiot.com/

### Requisitos
Para poder ejecutar los programas de este repositorio necesitas contar con lo siguiente:

- Ubuntu 20.04
- GCC
- Visual Studio Code
- Plugin C/C++ para Visual Studio Code

En este repositorio existen ejercicios relacionados con IoT, los cuales se ejecutan en plataformas especificas. A continuación se describen los requisitos para cada plataforma

#### Raspberry Pi

- Raspberry Pi Model 3B+ o superior
- Raspberry Pi OS
- Adaptador T-Clobber de 40 pines
- Cable plano de 40 pines

#### ESP32CAM

- ESP32CAM AI-Thinker
- Camara OV2640
- Programador FTDI con su cable
- IDE de Arduino 1.8 o superior
- Biblioteca PubSubClient para Arduino IDE

#### Ejercicios con circuitos electróncos

- Protoboard
- Resistencias de 220 ohms
- Resistencias de 1k ohm
- LEDs de colores
- Micro Push Button
- Cables Jumper

### Guías
Para poder configurar correctamente Visual Studio Code para trabajar con C/C++ puedes consultar el siguiente enlace.

[por definir]

### Funcionamiento

En el directorio raíz de este repositorio puedes encontrar una serie de carpetas numeradas, cada una de ellas incluye su propio archivo Readme.md en el cual se describen los detalles de cada programa.

Para editar, compilar y ejecutar los ejercicios de C/C++ desde Visual Studio Code, deberas clonar el repositorio y abrir la carpeta clonada. Este repostorio contiene los archivos de configuración launch.json y tasks.json, los cuales están configurados para la estructura sugerida de cada proyecto.

#### Estructura de proyecto

Cada proyecto en este repositorio cuenta con la siguiente estructura de carpetas

<pre><code>
00-nombre de proyecto - Carpeta que contiene el proyecto
bin - Capeta de ejecutables
main.c - Archivos
</pre></code>

Debido a esto, las variables de ejecución y compilación contienen el siguiente valor

`"${fileDirname}/bin/${fileBasenameNoExtension}"`

Por: [Hugo Vargas](https://github.com/hugoescalpelo)