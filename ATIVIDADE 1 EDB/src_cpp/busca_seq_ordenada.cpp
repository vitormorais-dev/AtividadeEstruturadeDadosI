#include "busca_seq_ordenada.hpp"
#include <vector>
#include <iostream>
using namespace std;

 int arr[] = {4, 2, 1, 4, 2, 1};
//Aqui utilizamos o bubble sort para a ordenacao dos vetores de forma com que ele vai
//colocando os valores maiores para o final. e o trocou serve para verificar se caso nao tenha mais trocas
// o vetor estara ordenado.
void bubble_sort(int arr[], int n){
    bool trocou;
    for(int i = 0; i < n-1; i++){
        trocou = false;
        for(int j = 0; j < n-i-1; j++){
            if(arr[j] > arr[j+1]){
                std::swap(arr[j], arr[j+1]);
                trocou = true;
            }
        }
        if(!trocou) break; 
    }
}
//aqui implementaremos a busca ordenada, caso ele econtre o alvo ele retorna o indice e se ele for para um numero 
// maior que o alvo ele para ja que o vetor sera crescente.
int busca_seq_ordenada(int arr[], int n, int alvo) {
    for(int i = 0; i < n; i++){
        if(arr[i] == alvo){
            return i; 
        }
        if(arr[i] > alvo){
            return -1; 
        }
    }
    return -1; 
}

//primeiro fazemos a ordenacao do vetor, depois ele percorre cada posicao procurando se o valor ja apareceu antes.
// se nao achar repetidos o contador incrementa.
int conta_especialidades_distintas(int arr[], int n){
    bubble_sort(arr, n); 
    int contador = 0;
    for(int i = 0; i < n; i++){
        if(busca_seq_ordenada(arr, i, arr[i]) == -1){
            contador++;
        }
    }
    return contador;
}
