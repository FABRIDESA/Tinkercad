# Parcial Domiciliario Sistemas de Procesamiento de Datos 


## Integrantes 
- Fabricio de Sa Torres


## Proyecto: Parte 1: Contador de 0 a 99 con Display 7 Segmentos y Multiplexación
![image](https://github.com/FABRIDESA/Tinkercad/assets/76821540/691caa3f-3054-4312-ab5b-a50e64114a61)


## Consigna
Diseñar un contador de 0 a 99 utilizando dos displays de 7 segmentos y tres botones para
controlar la cuenta. Debes implementar la técnica de multiplexación para mostrar los dígitos
en los displays. El contador debe comenzar en 0 y debe ser capaz de aumentar o disminuir
su valor en una unidad con los botones.


## Función principal
void loop():

Llama a la función keypressed() para dar funcionalidad a los botones y lograr manipular los números mostrados en los display (poder subir de a un número o bajar, o resetear a 0).

También llama a la función printCount(countDigit) para ejecutar el encendido y apagado de los displays UNIDAD y DECENA y mostrar en ellos las decenas y unidades correspondientes.

MULTIPLEXACIÓN: Llamando a esta última función, se logra la multiplexación de los display: 

Encender un único display, mostrar el número y luego apagarlo, para encender el display que le sigue. Encender y apagar el display a gran velocidad logra engañar el ojo humano,

que lo ve como si todo sucediera en simultáneo.

![image](https://github.com/FABRIDESA/Tinkercad/assets/76821540/817e2561-f759-41d0-8e9c-c5439fb936b7)


## :robot: Link al proyecto
- [proyecto]([https://www.tinkercad.com/things/aOYiibnDjWu](https://www.tinkercad.com/things/0sNdIdkgOSq-primera-parte-arduino/editel?sharecode=_PcYw7CHAT_DgpH73fcUKkK6Jb5aN0yTGrQ-i9Zv9Ws))
## :tv: Link al video del proceso
- [video]([https://www.youtube.com/watch?v=VyGjE8kx-O0](https://youtu.be/_Ry7mtURGDE?si=GADtNthtCDugCI--))

---
### Fuentes
https://youtu.be/_Ry7mtURGDE?si=GADtNthtCDugCI--

---
