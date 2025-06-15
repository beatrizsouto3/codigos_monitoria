#include <iostream>
#include <string>
using namespace std;
int main(){
  string senha = "abc", senhaInserida, novaSenha;
  int RG, escolha, foto = 0;
  float valorFoto, totalGasto = 0, fotos[5];
  char usuario;

  cout << "\n\tBem-vindo a galeria fotografica VoceNaVitrine.com";
  do{
    cout << "\n\tInsira o tipo de usuario: ";
    cin >> usuario;
    cout << "\n\tInsira o RG: ";
    cin >> RG;
    cout << "\n\tInsira uma senha: ";
    cin >> senhaInserida;
    if(((usuario != 'F')&&(usuario != 'f')) || (senhaInserida != senha)){
      cout << "\n\tInformacoes invalidas. Tente novamente.";
    }
  }while(((usuario != 'F')&&(usuario != 'f')) || (senhaInserida != senha));

  system("cls");
  do{
    cout << "\n\t-----------------------------------";
    cout << "\n\t1 - Adicionar foto";
    cout << "\n\t2 - Total gasto";
    cout << "\n\t3 - Mudar Senha";
    cout << "\n\t4 - Sair";
    cout << "\n\t-----------------------------------";
    cout << "\n\tInsira sua escolha: ";
    cin >> escolha;

    switch(escolha){
      case 1:
      if(foto<6){
        cout << "\n\tQual o valor da nova foto que queira adicionar?: ";
        cin >> valorFoto;
        foto++;
        for(int i=0; i<foto; i++){
          fotos[foto - 1] = valorFoto;
        }
        totalGasto += valorFoto;
      } else {
          cout << "\n\tJa foram adicionadas o maximo de fotos.";
      }
      break;

      case 2: 
      cout << "\n\tTotal gasto: " << totalGasto << endl;
      break;

      case 3:
      cout << "\n\tInsira uma nova senha: ";
      cin >> novaSenha;
      senha = novaSenha;
      break;

      case 4:
      for(int i=0; i<foto; i++){
        cout << "\n\tFoto " << i+1 << " : R$" << fotos[i];
      }
      cout << "\n\tObrigado por usar a galeria!";
    }
  }while (escolha!=4);
}