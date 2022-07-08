# Tabela-Hash
#O que é Tabela Hash?
Tabela hash ou  tabela de dispersão é uma estrutura de dados especial, que associa chaves de pesquisa a valores. Seu objetivo é, a partir de uma chave simples, fazer uma busca rápida e obter o valor desejado.

#Como funciona?
Os elementos são alocados dentro da tabela utilizando uma função de dispersão, ou seja, um cálculo é realizado de acordo com a entrada para posicioná-los dentro da tabela.
A função de hashing utilizada neste algorítmo é o Método da Congruência linear que consiste em:
O valor de entrada é multiplicado por uma constante, tal que 0 < constante < 1,no caso 0,6180339887, logo em seguida a parte inteira da multiplicação é subtraída e o resultado é multiplicado pelo tamanho da tabela.

#O que são colisões?
Não existe função de hashing perfeita, logo é possível que duas entradas diferentes resultem na mesma posição. Há duas formas de tratar tais colisões:
Endereçamento Aberto: (função funcionando) Ao encontrar uma colisão uma posição livre é procurada para armazenar o valor.
Encadeamento Separado: Ao encontrar uma colisão uma lista encadeada é criada para armazenar mais valores em uma chave. (tentativa até então falha de usar um vetor de vectores).
Qual é mais eficiente?
O Encadeamento Separado é mais eficiente pois o Endereçamento aberto ao alocar o valor ao qualquer posição livre cria maiores possibilidades de colisão (mais chaves já ocupadas), ao contrário do primeiro que simplesmente aloca mais de um valor em uma chave.
