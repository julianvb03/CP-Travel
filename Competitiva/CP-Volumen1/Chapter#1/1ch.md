## Memoizacion

La memoización es una tecnica de optimización en la que se almacenan los resultados de una subrutina en una memoria intermedia o buffer y devolviendo ese valor de nuevo cuando se llame a esa subrutina con los mismos valores de entrada, es lo que se hace en programación dinamica por ejemplo y es un caso particular de cache.

```c++
    int array[10];
    memset(array, -1, sizeof array);
```

## Tipo de Problemas
Estos son los tipos de problemas que se ven encompeticiones
<table align="center">
  <thead>
    <tr>
      <th>Tipo de problema</th>
      <th>Frecuencia</th>
    </tr>
  </thead>
  <tbody>
    <tr>
      <td>Ad hoc</td>
      <td>1-2</td>
    </tr>
    <tr>
      <td>Estructuras de datos (Pesadas)</td>
      <td>0-1</td>
    </tr>
    <tr>
      <td>Búsqueda completa (iterativa/recursiva)</td>
      <td>1-2</td>
    </tr>
    <tr>
      <td>Divide y venceras</td>
      <td>0-1</td>
    </tr>
    <tr>
      <td>Voraz (no clásico)</td>
      <td>1</td>
    </tr>
    <tr>
      <td>Programación dinámica (no clasico)</td>
      <td>1-2</td>
    </tr>
    <tr>
      <td>Grafos (salvo flujo de red/ emparejamiento)</td>
      <td>1</td>
    </tr>
    <tr>
      <td>Matematicas</td>
      <td>1-2</td>
    </tr>
    <tr>
      <td>Procesamiento de cadenas</td>
      <td>1</td>
    </tr>
    <tr>
      <td>Geometría computacional</td>
      <td>1</td>
    </tr>
    <tr>
      <td>Poco habituales / novedosos</td>
      <td>2-3</td>
    </tr>
  </tbody>
</table>

## Habilidades a Practicar constantemente
- Velocidad de tipeo
- Clasificación de algoritmos (Descripción en unas 3 plabras)
- Analisís del Algoritmo:
    - ¿Es capas mi algoritmo con su complejidad espacio tiempo de lograr los limites?
    - Un computador procesa +- 100M de operaciones por segundo.
    - Empieza a programar cuando estes seguro de que el algoritmo es correcto y lo suficientemente rapido.
- Prueba el codigo, busca casos limites, compara casos identicos y consecutivos y aumenta el tamaño de los casos de prueba hasta los limites del enunciado.
  
<table align="center">
  <thead>
    <tr>
      <th>n</th>
      <th>Peor algoritmo Ac</th>
    </tr>
  </thead>
  <tbody>
    <tr>
      <td><= [10..11]</td>
      <td>O(n!), O(n^6)</td>
    </tr>
    <tr>
      <td><= [15..18]</td>
      <td>O(2^n * n^2)</td>
    </tr>
    <tr>
      <td><= [18..22]</td>
      <td>O(2^n * n)</td>
    </tr>
    <tr>
      <td><= [24..26]</td>
      <td>O(2^n)</td>
    </tr>
    <tr>
      <td><= 100</td>
      <td>O(n^4)</td>
    </tr>
    <tr>
      <td><= 450</td>
      <td>O(n^3)</td>
    </tr>
    <tr>
      <td><= 1,5K</td>
      <td>O(n^2,5)</td>
    </tr>
    <tr>
      <td><= 2,5K</td>
      <td>O(n^2 log n)</td>
    </tr>
    <tr>
      <td><= 10K</td>
      <td>O(n^2)</td>
    </tr>
    <tr>
      <td><= 200K</td>
      <td>O(n^1,5)</td>
    </tr>
    <tr>
      <td><= 4,5M</td>
      <td>O(n log n)</td>
    </tr>
    <tr>
      <td><= 10M</td>
      <td>O(n log log n)</td>
    </tr>
    <tr>
      <td><= 100M</td>
      <td>O(n), O(long n), O(1)</td>
    </tr>
  </tbody>
</table>

### Testeo 
```
Linux
g++ archivo
./a.out < entrada > misalida
diff misalida salida

Windows PowerShell
g++ archivo
Get-Content .\Inputs.txt | .\a.exe > .\MiSalida.txt
Compare-Object (Get-Content .\MiSalida.txt) (Get-Content .\Salida.txt)
```