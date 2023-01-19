# Estrutura de Dados com Algoritmos em Linguagem C
 Conjunto de Algoritmos elaborados para estudo da linguagem C. 

 Trata-se de um matérial que pode ser utilizado para revisão de estudos, sobre estrutura de dados diretamente no hardware. Como se dá a alocação dos dados e como manipulalos, seja por VALOR ou referência de ENDEREÇO de memória por ponteiros.

 Por meio de alocações Estáticas(Antecede o tamanho da alocação) e Dinâmicas(Alocação definida em execução). Utilizando ponteiros para referênciar alocações previamente feitas na Stack. Vetores em arrays.

 Funções de alocação de memória Malloc / Calloc / Realloc / Free.

MALLOC: foi possivel fazer alocação de memória DINÂMICA, ou seja, em periodo de EXCUÇÃO DO PROGRAMA, por meio de VETORES que não tinha seus valores previamente definidos. Por isso dito em EXECUÇÃO. Após definido a quantidade de ÍNDICES DO VETOR foi possível atribuir para cada POSIÇÃO um valor para ser gravado na STACK. 

REALLOC: Foi feito a realocação do tamanho desses VETORES após ter feito uma alocação e precisou inserir novos indices para o VETOR.

CALLOC: TAMBÉM foi possivel fazer alocação de memória DINÂMICA, foi feito a  declaração de uma Matriz de duas dimensões que exigiu dois ponteiros. PONTEIRO PARA PONTEIRO. 
Um PONTEIRO p -> i linhas 
Um PONTEIRO p[K] -> J colunas   
    
    onde,
&p[k][x] -> Retorna variação de posição de linhas e colunas.   

Em Ponteiro para Ponteiro, um exemplo pratico de como a chamando à uma função por REFERÊNCIA, gere um PONTEIRO PARA PONTEIRO, quando inicializado um outro ponteiro dentro do Main( );  

