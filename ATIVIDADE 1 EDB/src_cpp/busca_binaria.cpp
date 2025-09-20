#include "busca_binaria.hpp"
#include <iostream> 
// aqui definimos o numero total de versoes e a versao que e "ruim" com base no exemplo dado.
int bad = 4;
int n = 5;
// aqui returna true se a versao ruim for => 4 e false se for menor que 4.
bool isBadVersion(int version ) { 
return version >= bad; 

}
int busca_binaria( int n) {
    int inicio = 1;
    int fim = n;
//aqui no laco de repeticao pegamos o meio, se ele for ruim o primeiro ruim vai esta no meio ou antes
//se ele nao for, a primeira versao ruim vai ficar depois do meio.
    while( inicio < fim){
          int meio = (inicio + fim)/2 ;
        if (isBadVersion(meio)){
            fim = meio;
        }
        else{
            inicio = meio + 1;
        }
    }
   return inicio;
}
