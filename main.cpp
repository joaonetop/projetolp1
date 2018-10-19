/* 
 * File:   main.cpp
 * Author: kayorenato
 *
 * Created on October 18, 2018, 11:45 AM
 */
#include <iostream>
#include <stdlib.h>

using namespace std;

enum op{
    cadastrar=1,alterar,pesquisar,excluir,sair
};

int qtd_prod;

typedef struct{
    char produto[20];
    char marcar[10];
    float preco;
    int qtd;
    
}produto;

void menu(*produtos){
    int operecao;
    cout << "Digite o que voce deseja fazer: \n";
    cout << "1 - Cadastrar Produto \n 2 - Alterar Produto\n 3 - Pesquisar\n 4 - Excluir\n 5 - Sair";
    cin >> operecao; 
    
    switch ( operacao )  
    {  
       case 1:  
          func_cadastrar(*produtos);  
          break;  
       case 2:  
          func_alterar(*produtos);  
          break;  
       case 3:  
          func_pesquisar(*produtos);  
          break; 
       case 4:  
          func_excluir(*produtos);  
          break;
       case 5:  
          exit();
          system("pause");
          break;  
    } 
};

int func_pesquisar(*produtos){
    
    return 0;
};

int func_cadastrar(*produtos){
    
    qtd_prod++;
    return 0;
};

int func_alterar(*produtos){
    return 0;
};

int func_excluir(*produtos){
    return 0;
};
    

int func_cadastrar(*produtos){
    return 0;
};


int main() {
    produto produtos[10];
    menu(*produtos);
    return 0;
}

