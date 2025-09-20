#include <iostream>
#include <iomanip>
#include <vector>
#include "busca_seq_ordenada.hpp"
#include "busca_binaria.hpp"
#include "recursao.hpp"

#define RUN_TEST(name, expr, expected)                                 \
    do {                                                               \
        int result = (expr);                                           \
        std::cout << std::left << std::setw(25) << name                \
                  << ": " << ((result == (expected)) ? "OK" : "FAIL")  \
                  << std::endl;                                        \
    } while(0)

   

int main() {
   

    //Eexemplo de chamada da macro RUN_TEST
    //RUN_TEST("Titulo do teste", nome_da_funcao(entradas das funcao), resposta_esperada);
    // teste 1
    int arr[] = {4, 2, 1, 4, 2, 1};
    int tamanho = sizeof(arr) / sizeof(arr[0]);
    RUN_TEST("Busca ordenada", conta_especialidades_distintas(arr, tamanho), 3);
    
   
    RUN_TEST("Busca binaria", busca_binaria(5), 4);

    std::string palavra = "banana";
    char alvo = 'a';
    RUN_TEST("Recursao", recursao(palavra, alvo), 3);

    return 0;
}

