# Solucao-1.3
Proposta de algoritmo para solução do problema 1.3: Transformar uma string (valor literal) em um inteiro, considerando todos os casos (erros de entrada, sinais, espaços, etc).

Foi desenvolvida uma função que converte o input para um vetor de chars, em seguida ela analisa cada caractere deste input e testa caso por caso procurando a validade deste input como inteiro. Se for válido, faz a conversão e apresenta o inteiro, se for inválido não faz a conversão e informa a invalidade, e se o valor estourar o limite da linguagem (2147483647) acusa esta violação.

A validade é de acordo com o padrão pt-BR, onde números não inteiros utilizam vírgula (,) ao invés de ponto (.). A pontuação de casas decimais também é vista como inválida pelo algoritmo.

O algoritmo foi desenvolvido na linguagem C++, para o console win32, na IDE Visual Studio 2017.
