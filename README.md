A ideia base é que um ser vivo necessita de outros seres vivos para sobreviver e procriar, mas 
um excesso de densidade populacional provoca a morte do ser vivo devido à escassez de comida. 
Os indivíduos vivem num mundo matricial e a geração seguinte é gerada a partir da geração 
anterior de acordo com as seguintes regras:

• Reprodução: Um ser vivo nasce numa célula vazia se essa célula vazia tiver exatamente 
3 seres vivos vizinhos. 
• Sobrevivência: Um ser vivo que tenha 2 ou 3 vizinhos sobrevive para a geração seguinte. 
• Morte por falta de comida: Um ser vivo com 4 ou mais vizinhos morre porque fica sem 
comida. 
• Morte por solidão: Um ser vivo com 0 ou apenas 1 vizinho morre de solidão.
A cada geração, as regras devem ser aplicadas para todos os seres vivos ao mesmo tempo 
(isto é no mesmo passo) para obtermos o próximo passo ou geração. 

Objetivo do projeto

O objetivo deste Projeto é criar um programa em C para simular o jogo da vida. Os 
indivíduos vivem numa matriz e o programa deve gerar a geração seguinte a partir das regras 
previamente apresentadas. Cada posição da matriz é uma célula que pode ter um “O” (para 
representar um ser vivo) ou um ponto “.” para indicar “vazio” ou “morto”. Cada célula tem um 
máximo de 8 células vizinhas (que podem ser representadas pelo caracter “+”).
Para simplificar, consideraremos que o mundo é plano (pois fica complicado definir que 
a última célula é vizinha da primeira em um mundo esférico).
O programa deverá implementar as funções e estruturas de dados necessárias para a 
execução da simulação e para a interface com o usuário. Vamos usar um padrão de projeto de 
sistemas interativos para construir o programa (padrão MVC). Além disso, o programa deverá 
permitir o armazenamento em arquivo das configurações das gerações iniciais para possíveis
futuras novas execuções.
