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


## Función principal y Multiplexación
void loop():

Llama a la función keypressed() para dar funcionalidad a los botones y lograr manipular los números mostrados en los display (poder subir de a un número o bajar, o resetear a 0).

También llama a la función printCount(countDigit) para ejecutar el encendido y apagado de los displays UNIDAD y DECENA y mostrar en ellos las decenas y unidades correspondientes.

MULTIPLEXACIÓN: Llamando a esta última función, se logra la multiplexación de los display: 

Encender un único display, mostrar el número y luego apagarlo, para encender el display que le sigue. Encender y apagar el display a gran velocidad logra engañar el ojo humano,

que lo ve como si todo sucediera en simultáneo.

![image](https://github.com/FABRIDESA/Tinkercad/assets/76821540/817e2561-f759-41d0-8e9c-c5439fb936b7)

## Otras funciones
printDigit(int digit):

RESUMEN: Desarrolla el cómo se encenderán las leds, pero no lo ejecuta.

Es una función que recibe como parámetro un número entero que va del 0 al 9.

Primero apaga todas las leds del 7 segmentos.

Segundo, aplica una funcionalidad diferente para cada número recibido.

Va a encender los leds que forman el número recibido.

![image](https://github.com/FABRIDESA/Tinkercad/assets/76821540/26cfb3cb-a8b4-4146-ba7d-56c1683b4268)

prendeDigito(int digito):

RESUMEN: Desarrolla el cómo se encenderán los display, pero no lo ejecuta.

Recibe como parámetro UNIDAD o DECENA, que corresponden a los display 7 seg a derecha e izquierda respectivamente.

Cuando recibe UNIDAD como parámetro se lo establece como LOW para encenderlo, y a DECENA como HIGH para apagarlo. 

Cuando recibe DECENA prende DECENA y apaga UNIDAD. 

De otra manera, apaga ambos. (int digito = 0) o (int digito = APAGADOS)

![image](https://github.com/FABRIDESA/Tinkercad/assets/76821540/ffb58622-744d-41f4-8939-d2e7f6d353d0)

printCount(int count):

RESUMEN: Desarrolla el orden de encendido de displays, la MULTIPLEXACIÓN.

Llama a la función prendeDigito() que desarrolla el cómo hacerlo según condiciones.

También llama a la función printDigit() para castear la decena y la unidad del número recibido y

desarrollar en qué orden serían mostrados con respecto al encendido y apagado de los display.

![image](https://github.com/FABRIDESA/Tinkercad/assets/76821540/0eba8496-3743-4fa6-8651-eb3fc04329a9)

int keypressed(void):

RESUMEN: Función para chequear el estado de los botones.

Permite leer el estado anterior de los botones para que no sume +1 ni reste -1
ni resetee infinitamente.

![image](https://github.com/FABRIDESA/Tinkercad/assets/76821540/cafb2587-329d-4a90-82cf-980a982822b0)


## :robot: Link al proyecto
- [proyecto]([https://www.tinkercad.com/things/aOYiibnDjWu](https://www.tinkercad.com/things/0sNdIdkgOSq-primera-parte-arduino/editel?sharecode=_PcYw7CHAT_DgpH73fcUKkK6Jb5aN0yTGrQ-i9Zv9Ws))
## :tv: Link al video del proceso
- [video]([https://www.youtube.com/watch?v=VyGjE8kx-O0](https://youtu.be/_Ry7mtURGDE?si=GADtNthtCDugCI--))

---
### Fuentes
https://youtu.be/_Ry7mtURGDE?si=GADtNthtCDugCI--

---
