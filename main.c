#include <stdlib.h> 
#include <stdio.h>  
#include <time.h> 

//Randomizador
int get_random(int min, int max) { 
  int random;
  random = (rand() % (max - min + 1) + min);
  if (random <= 10 && random != 1) {
    random = 2;
  } else if (random > 10 && random < 15) {
      random = 3;
  } else if (random >= 15 && random != 20) {
      random = 4;
  }
  return random;
}

//MAIN
int main () {
  srand(time(NULL));

//Declaração
  int dicePlayer, diceGoblin;

//Loop: combate
  do {
    int dicePlayer = get_random(1, 20);
    int diceGoblin = get_random(1, 20);
  
    printf("\nAtaque o Goblin! Role a iniciativa e veremos se acertou a CA do monstro.\n\n");

//Switch: ataque do jogador
    switch (dicePlayer) {
      case (1):
        printf("1?!\nEpic fail. Seu personagem caiu sozinho e se feriu na queda.\n");
        break;
      case (2):
        printf("Tirou entre 2 e 10.\nFaltou um tanto para acertar o Goblin, talvez ele seja um inimigo forte demais...\n");
        break;
      case 3:
        printf("Tirou entre 11 e 14.\nAcertou o golpe! Mas a armadura dele absorveu boa parte do impacto.\n");
        break;
      case 4:
        printf("Tirou entre 15 e 19.\nNossa! Esse pegou bonito. O Goblin mal viu o que lhe acertou.\n");
        break;
      case 20:
        printf("20!?\nEpic win. Seu personagem decepou o Goblin em um golpe.\n");
        break;
  }

//If: vitória do jogador
    if (dicePlayer == 4 || dicePlayer == 20) {
    printf("O combate acabou. Seu personagem saiu o vencedor do duelo.");
    break;
    } else { 
        printf("\nO Goblin vai atacar! Vamos ver se ele te acertou ou errou.\n\n");
  }
  
//Switch: ataque do inimigo
    switch (diceGoblin) {
      case (1):
        printf("1?!\nEpic fail. O Goblin caiu sozinho e se feriu na queda.\n");
        break;
      case (2):
        printf("Tirou entre 2 e 10.\nFaltou um tanto para ele te acertar, talvez ele seja um pouco lezado...\n");
        break;
      case 3:
        printf("Tirou entre 11 e 14.\nAcertou o golpe! Mas o seu escudo absorveu boa parte do impacto.\n");
        break;
      case 4:
        printf("Tirou entre 15 e 19.\nNossa! Esse pegou bonito. O Goblin te deu um couro agora.\n");
        break;
      case 20:
        printf("20!?\nEpic win. O Globin partiu seu personagem em dois.\n");
        break;
  }

//If: vitória do inimigo
    if (diceGoblin == 4 || diceGoblin == 20) {
      printf("O combate acabou. O Goblin saiu o vencedor do duelo.");
      break;
    }
    
//Loop: encerramento
  } while (diceGoblin != 20 || diceGoblin != 4 || dicePlayer != 4 ||dicePlayer != 20);
  return 0;
}
