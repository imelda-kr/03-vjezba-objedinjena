#include<iostream>
#include<vector>
#include<algorithm>


int main(){
    std::vector<int> vek {5,6,4,2,3};
    std::sort(vek.begin(),vek.end());
    std::vector<int>::iterator manji=std::min_element(vek.begin(),vek.end());
    vek.insert(manji,0);
    int suma=0;
    for(int i=0;i<vek.size();i++){
        suma+=vek[i];
     }
     std::vector<int>::iterator najveci = std::max_element(vek.begin(), vek.end());
     vek.insert(najveci+1,suma);
     for(int i=0;i<vek.size();i++){
         int n=vek[i];
        std::cout<<n<<" ";
     }

    return 0;

}

