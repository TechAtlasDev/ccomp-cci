# CCOMP-CCI

## IDE

El IDE que se ha usado por la mayoría de laboratorios durante el curso fue Code::Blocks, debido a que no cuenta con integraciones nativas de IA, por lo que los alumnos no pueden ser ayudados por la misma durante las prácticas.

## Pizarra de la clase:

https://excalidraw.com/#room=0023a14847dca0556807,wuYB5oFPdn08F1LpgvQXKg

## Temas de evaluaciones

- **Práctica 1:** Identificar si una palabra es palíndromo.
    - **Limitaciones:** No está permitido usar strings, arrays, vectores, únicamente operaciones aritméticas básicas, char e int.
    - **Solución:** Se le puede preguntar al usuario la cantidad de caracteres que tendrá la palabra, esto te permitirá saber cuál sería la mitad de la palabra, es decir, si el usuario responde que su palabra tiene 5 letras, significa que la mitad sería 3, por lo que esto se puede aprovechar para dividir dicha palabra, sumar los valores ascii de cada caracter de la mitad superior, y almacenarla en una variable, luego, hacer lo mismo con la mitad inferior de la palabra, finalmente se compara la suma, si la suma ascii de ambas mitades son iguales, significa que es palíndromo.

- **Práctica 2:** Calcular los decimales de una división entre dos números.
    - **Limitaciones:** Los números que serán divididos tienen que ser enteros, no se puede usar double.
    - **Solución:** Como ambos números son enteros, significa que la división será entera. Para obtener los decimales, se puede usar el residuo de la división. Primero se calcula la parte entera del resultado, luego se multiplica el residuo por 10 y se divide nuevamente por el divisor para obtener el primer decimal. Este proceso se repite multiplicando sucesivamente por 10 para obtener más decimales de precisión. (Se puede usar un while o un for: For para una cantidad limitada de dígitos | While para una cantidad ilimitada de dígitos)

- **Práctica 3:** Implementar una función recursiva que sea el equivalente a:
<pre>
    <code lang="cpp">
        for (int i = 0, int j = 0; i<70 || j % 25 == 0) {
            cout << "I: " << i << endl;
            cout << "J: " << j << endl;
            i++;
            j++;
        }
    </code>
    - **Limitaciones:**


- **Práctica 4:** Generar una matriz con datos ordenados de manera aleatoria y ordenarlos de la siguiente forma:
<pre>
    <code>
        +---+---+---+---+
        |   |   |   |   |
        |   |   |   |   |
        +---+---+---+---+
        |   |   |   |   |
        |   |   |   |   |
        +---+---+---+---+
        |   |   |   |   |
        |   |   |   |   |
        +---+---+---+---+
        |   |   |   |   |
        |   |   |   |   |
        +---+---+---+---+
    </code>

