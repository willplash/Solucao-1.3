# Solucao-1.3
Solucao para o problema de conversao do valor literal (string) para inteiro (int).

Programa desenvolvido em C++ com orientação à objetos. 

Neste algoritmo entradas (strings) com espaços, sinais que não são números (exceto os sinais de + ou - desde que estejam no início da string, e a vírgula dos números reais) serão descartadas como entradas válidas e consequentemente não serão convertidas. O algoritmo noticiará esta invalidez da entrada.

Entradas com números reais (constituídas de caracteres de 0 a 9 com vírgula) são consideradas válidas e convertidas para inteiros, mas através do truncamento do número (descarte de tudo após a vírgula). O algoritmo retornará o inteiro equivalente.

Entradas que sejam maior que 2147483647 ou menor que -2147483647 excedem a capacidade da linguagem C++ e serão descartadas, com o algoritmo noticiando este problema.
