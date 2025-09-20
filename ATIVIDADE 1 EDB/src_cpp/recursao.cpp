#include "recursao.hpp"
#include <string>
#include <iostream>
using namespace std;

string palavra = "banana";
char alvo = 'a';
//aqui usamos o caso base, caso seja vazia retorna 0.
        int recursao(const std::string &str, char alvo) {
           if(str.empty()){
            return 0;
        }
//verifica se o indice da string e igual ao alvo, caso seja adiciona 1.
// depois faz isso com o resto da string. somando cada vez que for igual ao alvo.
           if( str[0] == alvo){
            return 1 + recursao(str.substr(1), alvo);
            
        }
        else{
         return recursao(str.substr(1), alvo);
        }

        }
        