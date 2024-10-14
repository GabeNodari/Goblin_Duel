# Simulador de combate

Este projeto simula um combate entre um jogador e um goblin utilizando um sistema de rolagem de dados. O jogador deve atacar o goblin, e ambos têm chances de vitória baseadas em resultados aleatórios de um dado de 20 lados (d20). Tal projeto foi feito com fins de estudo na linguagem C.

**Funcionalidades:**

* Uso de funções para a geração de números aleatórios com agrupamento de resultados. <br>
* Condicional switch para determinar o resultado do ataque de cada combatente. <br>
* Laço do-while para continuar o combate até que um dos combatentes vença. <br>
* Mensagens personalizadas para cada resultado de ataque, proporcionando uma narrativa envolvente. <br>

**Tecnologias:**

* C: Usado para criar a lógica da simulação e a interação entre o usuário e o programa. <br>
* Funções da biblioteca stdlib.h e time.h: <br>

  srand(time(NULL)): Gera uma semente baseada no tempo atual para criar números aleatórios. <br>
  rand() % (max - min + 1) + min: Gera um número aleatório dentro do intervalo dado, simulando a chance de encontrar um shiny Pokémon. <br>

**Como Usar:**

Compile e rode o código em C usando um compilador como gcc.
