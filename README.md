# Estrutura de Dados com Algoritmos em Linguagem - C
#### Conjunto de Algoritmos para estudo da linguagem C. 

<p>  
<img align="right" src="https://user-images.githubusercontent.com/109990443/220428874-59b9e4b4-acaf-4fbb-ad7f-26768d06fd5e.png" width="400px">
<p></br>

Os algoritmos estão dipostos por tópicos, trata-se de um matérial que pode ser utilizado para revisão de estudos e consulta rápida, sobre estrutura de dados.
#### O algoritmo foram extraides a partir de estudos do livro: Estrutura de Dados com Algoritmos e C - (Marcos Aurelio Pcker Laureano), e realização dos exercícios propostos.


### Os tipos de dados: Homogênios(Vetores) ou Heterogênios(Registros):
Vetores 1:</br>
https://github.com/PriciLeite/Codigo_Estrutura_de_dados_C/blob/main/estrutura_de_dados_vetores.c</br>
Registros 1:</br>
https://github.com/PriciLeite/Codigo_Estrutura_de_dados_C/blob/main/estrutura_de_dados_Registros_Heterogenio.c</br>
Registros 2:</br>
https://github.com/PriciLeite/Codigo_Estrutura_de_dados_C/blob/main/estrutua_de_dados_Registros_Heterogeneos02.c
<p>
<img align="center" src="https://user-images.githubusercontent.com/109990443/220440034-e1b6c410-5820-4f4b-a6a1-aaac21b2b5a3.jpg" width="400px"> 
<img align="center" src="https://user-images.githubusercontent.com/109990443/220445814-6e4df22f-cc4e-491a-8ffc-3a1cb59d82f3.jpg" width="300px">
<p>





Como se dá a alocação dos dados e como manipulalos: Por VALOR ou referência de ENDEREÇO de memória por ponteiros.
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

