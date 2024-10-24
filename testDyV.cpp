#include "DyV.h"
#include <vector>
#include <iostream>

int main(){

	std::vector<int> a{3,13,15,29,70};

	int valor=BusquedaBinaria(29,a,0,5);

	std::cout << valor << std::endl;

}
