#include<iostream>
#include <vector>
#include "vector.hpp"

void unosVek_br(std::vector<int>& vektor,int br_el){
    int broj;
    for(int i=0;i<br_el;i++){
        std::cout<<"unesi broj:";
        std::cin>>broj;
        vektor.push_back(broj);
    }
}
std::vector<int> noviVek(std::vector<int>& vek1,std::vector<int>& vek2){
    std::vector<int> novi;
    for(int i=0;i<vek1.size();i++){
            int isti=0;
        for(int j=0;j<vek1.size();j++){
            if(vek1[i]==vek2[j]){
                isti=1;
                break;
            }
        }
        if(!isti){
            novi.push_back(vek1[i]);

        }
    }
    return novi;
}

void ispisVek(std::vector<int>& vektor){
    std::cout << "Elementi vektora su:";
    for(int i=0;i<vektor.size();i++){
            std::cout<<""<<vektor[i];

    }
    std::cout << std::endl;
}

int main(){
    std::vector<int> vek1;
    std::vector<int> vek2;
    int br_el;
    std::cout<< "unesite broj elemenata: ";
    std::cin>>br_el;
    std::cout<< "Prvi vektor:\n";
    unosVek_br(vek1,br_el);
    std::cout<< "Drugi vektor:\n";
    unosVek_br(vek2,br_el);
    std::vector<int> vek3=noviVek(vek1,vek2);
    ispisVek(vek3);
}
