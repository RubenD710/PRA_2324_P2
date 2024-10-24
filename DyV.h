#include <vector>
template <typename T>
int BusquedaBinaria(T x, std::vector<T>& v, int ini, int fin){
	T num = x;
	int com = ini;
	int end = fin;

	if (com > end){
		return -1;
	}

	int medio= (com+end)/2;
	if (v[medio]==num){
		return medio;
	}else if(v[medio] > num){
		return BusquedaBinaria(num,v,com,medio-1);
	}else{
		return BusquedaBinaria(num,v,medio+1,end);
	}
}

