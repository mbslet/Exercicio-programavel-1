# Utilização do  Conway's Game of Life em C+
##Sobre o Conway's Game of Life:

  "A ideia básica do "jogo" é começar com uma configuração simples de células vivas (organismos) que são colocadas em um tabuleiro 2D de vários métodos. Isto constitui a primeira geração. As "leis genéticas" de Conway para nascimentos, mortes e sobrevivência (**as quatro regras**) são então aplicadas e a nova geração é então colocada de acordo. Geração a geração os "jogador(es)" observam as várias imagens que surgem."

**Regras**: 

- Qualquer célula viva com menos de dois vizinhos vivos morre de solidão.
- Qualquer célula viva com mais de três vizinhos vivos morre de superpopulação.
- Qualquer célula morta com exatamente três vizinhos vivos se torna uma célula viva.
- Qualquer célula viva com dois ou três vizinhos vivos continua no mesmo estado para a próxima geração.

###Para acessar:

  - Dê um **git clone** no repositório 
  - Para compilar, basta digitar **make**
  - Para rodar o jogo, digite **make run**

###Para o usuário:

Ao iniciar o jogo, irá aparecer um menu de opções para que o usuário escolha o que deseja.

Das opções tem-se:

- Escolha **1**: Colocar um Block
- Escolha **2**: Colocar um Blinker
- Escolha **3**: Colocar um Glider
- Escolha **4**: Colocar a Gosper Glider Gun
- Escolha **0**: Executar as regras

Após o usuário escolher uma dessas opções, o programa pede duas **coordenadas** (**x** e **y**) ao usuário, e assim poderá escolher certos lugares para colocar as opções.

Para cada uma das opções tem um limite para **x** e para **y**, por conta de seus diferentes formatos. E então o usuário deverá digitar a opção **0**, fazendo com que execute as regras no campo. 

Logo em seguida o programa pede que informe o **número de iterações**, que será uma condição de parada do programa.

O programa finaliza após o fim das iterações.



