#include<iostream>
#include<vector>

/*
void brisanje(std::vector<int>& vektor,int br_el){
    vektor.pop_back();

}*/


int main(){
    std::vector<int> vektor;
    int br_el=5;
    int elem;
    for(int i=0;i<br_el;i++){
        std::cout<<"Unesi element vektora:";
        std::cin>>elem;
        vektor.push_back(elem);
    }
    vektor.pop_back();
    //brisanje(vektor,br_el);
    /*for(int i=0;i<vektor.size();i++){
        std::cout<<""<<vektor[i];
    }*/
    return 0;

}
