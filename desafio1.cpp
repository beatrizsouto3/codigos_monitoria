//desafio 1 - monitoria
#include <iostream>
using namespace std;
int main() {
    int n, opcao, totem, maior;
    bool temTotem = false, ordenado = false;
    
    cout << "\n\tInsira a quantidade de totens: ";
    cin >> n;
    int totens[n];
    
    cout << "\n\t\t\tM E N U";
    cout << "\n\t1 - Adicionar totem";
    cout << "\n\t2 - Ordenar totens";
    cout << "\n\t3 - Verificar ordenação";
    cout << "\n\t4 - Quebrar a pedra" << endl;
    
    do{
        cout << "\n\tInsira a escolha: ";
        cin >> opcao;
        switch(opcao){
            case 1: cout << "\n\tEscolha: Adicionar totem.";
            if(temTotem == false){
                for(int i=0; i<n; i++){
                    do{
                        cout << "\n\tInsira o " << (i+1) << "º totem: ";
                        cin >> totem;
                        if((totem>100)||(totem<0)){
                            cout << "\n\tEnumeração não permitida.";
                        } else{
                            totens[i] = totem;
                        }
                    } while((totem>100)||(totem<0));
                    temTotem = true;
                }
                cout << "\n\tSeus totens foram definidos!";
            } else{
                cout << "\n\tVocê ja definiu os totens. Selecione outro item do menu ou saia.";
            }
            break;
            
            case 2: cout << "\n\tEscolha: Ordenar totens.";
            if(temTotem == true){
                for(int x=0; x<n; x++){
                    for(int i=0; i<n; i++){
                        if(totens[i] > totens [i+1]){
                            maior = totens[i];
                            totens[i] = totens[i+1];
                            totens[i+1] = maior;
                            ordenado = true;
                        }
                    }
                }
                cout << "\n\tOrdenação feita!";
            } else{
                cout << "\n\tVocê ainda não definiu os totens.";
            }
            break;
            
            case 3: cout << "\n\tEscolha: Verificar ordenacao.";
            if(temTotem == true){
                cout << "\n\tValores dos totens: ";
                for(int i=0; i<n; i++){
                    cout << "\n\tTotem " << (i+1) << " : " << totens[i] << endl;
                }
                if(ordenado == true){
                    cout << "\n\tOs totens estão corretamente ordenados";
                } else{
                    cout << "\n\tOs totens ainda não estão ordenados";
                }
            } else{
                cout << "\n\tVocê ainda não definiu os totens.";
            }
            break;
            
            case 4: cout << "\n\tQuebra a pedra... encerrando sistema...";
            break;
        }
    }while(opcao != 4);
}