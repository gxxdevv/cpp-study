//dia 1 de c++

#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct item {
    string nome;
    int quantidade;
};   

int main(){
    int contador = 0;
    vector<item> itens;
    
    item pocao;
    pocao.nome = "poção de cura";
    pocao.quantidade = 5;
    itens.push_back(pocao);
    
    item espada;
    espada.nome = "espada de ferro";
    espada.quantidade = 1;
    itens.push_back(espada);
    
    for (int i = 0; i < itens.size(); i++){
        cout << "jogador tem:" << itens[i].nome << "\nquantidade: " << itens[i].quantidade << endl;
    }    
    
    return 0;
}    
