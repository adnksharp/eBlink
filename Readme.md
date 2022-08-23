# Blink nodeMCU ESP8266

[![blink-node.png](https://i.postimg.cc/G2kqjHCz/blink-node.png)](https://postimg.cc/DJwrvfmb)

Parpadeo de uno de los LEDs integardos de la placa nodeMCU ESP8266.

## Funcionamiento
### Variables
- ```LED```: pin a usar (**GPIO16**, `16` o **D0**, `D0`).
- ```out```: estado de la salida.

## Funcionamiento
Cada 200 milisegundos el valor de **out** cambia entre `true` y `false` para poner el pin `LED` en `out` usando la función `digitalWrite`.
