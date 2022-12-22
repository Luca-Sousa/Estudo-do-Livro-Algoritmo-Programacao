# Resolução das Questões do Capítulo 1 - Introdução

### Questão 1:
    Defina o que é um Algoritmo.
 
### Resolução:
    Um algoritmo é um procedimento passo a passo para a solução de um problema, ou seja, uma sequência
    detalhada de ações a serem executadas para realizar alguma tarefa.

***

### Questão 2:
    Diferencie um algoritmo de um programa.
 
### Resolução:
    Chamamos de programa de computador um conjunto de instruções que será executado pelo processador em uma
    determinada sequência. Esse programa leva o computador a executar alguma tarefa. Como podemos perceber,
    um programa nada mais é que um tipo de algoritmo.

***

### Questão 3:
    Explique como um programa é executado em um computador.
 
### Resolução:
    O compilador, a partir do código em linguagem de alto nível, chamado de código-fonte, gera um arquivo
    com o código em linguagem de máquina, conhecido como código-objeto. Esse código-objeto fica em disco e
    só é carregado em memória no momento da execução. O interpretador faz o mesmo trabalho, porém não gera
    o arquivo em código-objeto.

***

### Questão 4:
    Defina o que é uma linguagem de programação de alto nível e uma linguagem de programação de baixo nível.
 
### Resolução:
    Classificamos as linguagens de programação segundo a sua proximidade com a linguagem de máquina. Quanto
    maior a semelhança com a linguagem de máquina, mais baixo é o nível da linguagem. As linguagens de
    programação mais semelhantes a linguagem de máquina são conhecidas como linguagens de baixo nível.
    Analogamente, linguagens de programação distantes da linguagem de máquina são conhecidas como
    linguagens de programação de baixo nível. Linguagens de programação de alto nível são mais próximas da
    linguagem natural e guardam pouca similaridade com a linguagem da máquina em que serão executadas.

***

### Questão 5:
    Dado um programa executável em um sistema operacional, o que é preciso fazer para que tal programa
    possa ser utilizado em outro sistema operacional?    
 
### Resolução:
    Um código-objeto compilado em um sistema operacional não poderá ser executado em um outro sistema
    operacional. Para que esse programa funcione nesses sistemas operacionais, o código-fonte, em linguagem
    de alto nível, deverá ser compilado neste sistema operacional.

***

### Questão 6:
    Explique por que um código java é portável em vários sistemas operacionais.
 
### Resolução:
    Para que o código em Java seja executado em algum (e ao mesmo tempo em qualquer) sistema operacional, 
    é necessário que mais uma camada de software esteja aí instalada. A camada funciona como um sistema
    operacional genérico, deixando transparentes as particularidades do sistema operacional real. Essa
    camada de software é chamada de Máquina Virtual, ou Java Virtual Machine (JVM). A JVM faz a tradução
    dos bytecodes para código executável naquele sistema operacional. Isto faz com que um programa escrito
    em java e que seja compilado para bytecode possa ser executado em qualquer máquina que tenha a JVM
    adequada instalada. Durante a execução, este código será traduzido em tempo real para a linguagem
    proprietária e executada. A tradução em tempo real pode ser entendida como uma espécie de interpretação.

***

### Questão 7:
    Porque a linguagem natural não é adequada para a construção de algoritmos para computador?
 
### Resolução:
    A linguagem natural não é adequada pois não possui rigidez sintática e nem rigidez semântica.

***

### Questão 8:
    Quais as vantagens e desvantagens da utilização de fluxograma e de pseudocódigo na construção de algoritmos?
 
### Resolução:
    * Vantagens do Fluxograma:
        1. Facilidade proporcionada para a compreensão do funcionamento do algoritmo, mesmo para os leigos;
        2. Algumas pessoas também se adaptam bem ao desenvolvimento de algoritmos sob essa representação;
        3. A utilização de fluxogramas continua sendo útil para apresentação de algoritmos em um nível de
        abstração alto, sem entrar nos detalhes de sua implementação.
    * Desvantagens do Fluxograma:
        1. A representação gráfica nao e prática; A correção de uma linha de pensamento pode implicar a
        reconstrução de muitas instruções;
        2. A construção de algoritmos mais complexos e longos pode se tornar extremamente trabalhosa,
        ocupando várias páginas.
 
    * Vantagens do Pseudocódigo:
        1. O código pronto para a execução (mesmo que seja após a compilação);
        2. Possui rigidez sintática e a semântica, que são imprescindíveis para que o algoritmo possa ser
        lido e executado pelo computador;
        3. Abre-se mão do código compilável para se ter um código menos rígido, menos dependente das
        peculiaridades que todo compilador tem;
        3. Utilização de idioma nativo.
    * Desvantagens do Pseudocódigo:
        1. Deve manter, tanto quanto possível, a rigidez semântica.