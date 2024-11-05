#include<iostream>
#include <vector>
#include "vector.hpp"
/*
void unosVek_br(std::vector<int>& vektor, int br_el) {
    int broj;
    for (int i = 0; i < br_el; i++) {
        std::cout << "Unesi broj: ";
        std::cin >> broj;
        vektor.push_back(broj);
    }
}*/

void unosVek_inter(std::vector<int>& vektor,int donja_gr,int gornja_gr){
    int broj;
    while(true){
        std::cout << "unesite element vektora:";
        std::cin >> broj;
        if(broj>=donja_gr && broj<=gornja_gr){
            vektor.push_back(broj);
        }
        else{
            std::cout << "Broj nije u zadanom intervalu." << std::endl;
            break;
        }

    }

}
/*
void ispisVek(std::vector<int>& vektor, int br_el){
    std::cout << "Elementi vektora su:";
    for(int i=0;i<br_el;i++){
            std::cout<<""<<vektor[i];

    }
    std::cout << std::endl;
}*/

void ispisVek(std::vector<int>& vektor){
    std::cout << "Elementi vektora su:";
    for(int i=0;i<vektor.size();i++){
            std::cout<<""<<vektor[i];

    }
    std::cout << std::endl;
}

int main(){
    std::vector<int> vektor;
    int br_el;
    unsigned int gornja_gr,donja_gr;
    std::cout << "unesite broj elemenata: ";
    std::cin >> br_el;
    /*
    unosVek_br(vektor,br_el);
    ispisVek(vektor,br_el);*/
    std::cout << "unesite prvi broj intervala:";
    std::cin >> donja_gr;
    std::cout << "unesite drugi broj intervala:";
    std::cin >> gornja_gr;
    unosVek_inter(vektor,donja_gr,gornja_gr);
    ispisVek(vektor);

}
