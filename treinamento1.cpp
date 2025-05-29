//Elabore um algoritmo que: 
//Solicite um número inteiro N ao usuário.
//Declare um vetor V com N elementos inteiros.
//Gere os elementos do vetor de tal forma que o primeiro seja N e os próximos sejam sempre iguais ao dobro do anterior.
//Solicite um número inteiro X ao usuário e busque este elemento no vetor. Caso exista, troque X pelo menor elemento existente no vetor e o menor elemento por X. Caso não exista, informe ao usuário. Mostre o vetor antes e depois da mudança.
#include <iostream>
using namespace std;
int main() {
    int n, i, anterior, x, menor, indice_menor, indice_x, aux;

    cout << "\n\tInsira um numero inteiro: ";
    cin >> n;

    int v[n];
    v[0] = n;
    anterior = n;
    for(i=1; i<n; i++){
      v[i] = anterior * 2;
      anterior = v[i];
      }

    cout << "\n\tVetor antes da mudança: \n";
    for(i=0; i<n; i++){
      cout << " " << v[i] << endl;
    }

    cout << "\n\tInsira um numero inteiro: ";
    cin >> x;
    
    indice_x = -1;
    for(i=0; i<n; i++){
        if(v[i] == x){
            indice_x = i;
        } 
    }
    if(indice_x == -1){
        cout << "\n\tElemento não encontrado.";
    } else{
         menor = v[0];
        indice_menor = 0;
        for(i = 1; i < n; i++) {
            if(v[i] < menor) {
                menor = v[i];
                indice_menor = i;
            }
        }

        aux = v[indice_x];
        v[indice_x] = v[indice_menor];
        v[indice_menor] = aux;
    }
    
    cout << "\n\tVetor depois da mudança: \n";
    for(i=0; i<n; i++){
      cout << " " << v[i] << endl;
    }
}