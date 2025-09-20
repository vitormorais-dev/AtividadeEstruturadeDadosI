# ESPECIFICACOES DAS FUNCOES
1) Algoritmo de Busca Binaria
   
Comecamos definindo bad=4 e n=5. Na funcao isBadVersion usamos version como parametro, ela ira retornar true se a versao for maior ou igual a versao ruim e false caso a versao for menor, ela depende da variavel bad e retorna um boolean. a funcao busca_binaria recebe n como parametro e entao ela inicia com o inicio e termina com n, usamos um loop enquanto (inicio < fim) e calcula meio(inicio+fim)/2, caso ele seja ruim ele ira mover fim para meio e caso nao ele move inicio para meio + 1. e entao retorna inicio que e o primeiro elemento ruim.

2) Algoritmo da Busca Sequencial Ordenada

Primeiro colocamos um vetor que foi usado de exemplo na questao. na funcao Bubble_sort ela recebe arry e n como parametros e nao tem retorno pois e void. O bubble sort comeca com trocou= false, entao  compara elementos do vetor e caso estejam desordenados usa swap para trocar eles de lugar assim fazendo a ordenacao. a funcao busca_seq_ordenada recebe como paramentros arr, n e alvo, alvo sera o elemento a ser buscado ele compara o elemento com o alvo para ver se sao iguais e retorna o indice do elemento se for encontrado, caso nao seja retorna -1. a funcao conta_especialidades_distintas recebe arr e n como parametros, ela chama bubble sort para ordenar o vetor e inicia um contador em 0 e depois de ordenado ela chama busca_seq_ordenada e entao se o retorno for -1 ou seja se for um elemento distinto ele incrementa no contador fazendo a contagem.

3) Algoritmo de Recursao

Recebe palavra e alvo que e a letra que vamos usar no exemplo. A funcao recursao recebe como parametros str que e a string que sera feita a contagem e tambem recebe alvo que e o char que vamos usar, ela ira nos retornar a quantidade de vezes que alvo aparece na String. Caso base: se a string estiver vazia ela ira retornar 0. entao ele verifica o string, se for igual a alvo ele retorna 1+(str.substr(1),alvo) assim ele chama o resto da string e vai somando as vezes que o caractere esta na string.
