# Estrutura de Dados com Algoritmos em Linguagem - C
#### Conjunto de Algoritmos para estudo da linguagem C. 

<p>  
<img align="right" src="https://user-images.githubusercontent.com/109990443/220428874-59b9e4b4-acaf-4fbb-ad7f-26768d06fd5e.png" width="400px">
<p></br>

Os algoritmos estão dipostos por tópicos, trata-se de um matérial que pode ser utilizado para revisão de estudos e consulta rápida, sobre estrutura de dados.
#### Os algoritmos são dos estudos do livro: Estrutura de Dados com Algoritmos e C - (Marcos Aurelio Pcker Laureano), e resolução dos exercícios propostos.


### Os tipos de dados: Homogênios(Vetores) ou Heterogênios(Registros):
Vetores 1:</br>
https://github.com/PriciLeite/Codigo_Estrutura_de_dados_C/blob/main/estrutura_de_dados_vetores.c</br>
Registros 1:</br>
https://github.com/PriciLeite/Codigo_Estrutura_de_dados_C/blob/main/estrutura_de_dados_Registros_Heterogenio.c</br>
Registros 2:</br>
https://github.com/PriciLeite/Codigo_Estrutura_de_dados_C/blob/main/estrutua_de_dados_Registros_Heterogeneos02.c
<p>
<img align="center" src="https://user-images.githubusercontent.com/109990443/220440034-e1b6c410-5820-4f4b-a6a1-aaac21b2b5a3.jpg" width="300px"> 
<img align="center" src="https://user-images.githubusercontent.com/109990443/220445814-6e4df22f-cc4e-491a-8ffc-3a1cb59d82f3.jpg" width="300px">
<p>





Como se dá a alocação dos dados e como manipulalos: Por VALUE TYPE (Struct) ou REFERENCE TYPE (Heap) com ponteiros.
Por meio de alocações Estáticas(Alocação automática pelo compilador) e Dinâmicas(Alocação dinamicamente programada). Os ponteiros por sua vez irão referênciar endereços de memória de alocações na Stack.(Havendo alteração da stack, haverá alteração de valor  na impressão de referência, mantém-se o endereço referênciado inalterado). Vetores, arrays, matrizes e classes em OOP (Orientado a objetos) configuram alocação na memória Heap.

As funções para alocação Dinâmica são: Malloc / Calloc / Realloc / Free.

MALLOC: Alocação em periodo de EXCUÇÃO do programa por meio de VETORES que não tinha seus valores previamente definidos. Por isso dito em EXECUÇÃO. Após definido a quantidade de ÍNDICES DO VETOR foi possível atribuir para cada POSIÇÃO um valor para ser inserido na Heap. 

REALLOC: Realocação do tamanho desses VETORES após primeira alocação e posterior inserção de novos índices de reserva para o vetor.

CALLOC: PONTEIRO -> PONTEIRO. Alocação DINÂMICA na declaração de uma Matriz de duas dimensões Matriz[][] exigindo dois ponteiros. 

p* -> i linhas 
p[K]* -> J colunas   
    
    onde,
&p[k][x] -> Retorna variação de posição de linhas e colunas.   

Inicialização de p* em Main(), chama-se p[k]* -> p*


