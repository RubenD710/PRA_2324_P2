#include <vector>
template <typename T>
int BusquedaBinaria(T x, std::vector<T>& v, int ini, int fin){
	T valor = x;
	int start = ini;
	int end = fin;

	if (com > end){
		return -1;
	}

	int medio= (start+end)/2;
	if (v[medio]==valor){
		return medio;
	}else if(v[medio] > valor){
		return BusquedaBinaria(valor,v,start,medio-1);
	}else{
		return BusquedaBinaria(valor,v,medio+1,end);
	}
}

void QuickSort(std::vector<T>& v, int ini, int fin){
	
	int start = ini;
	int end = fin;

	if(start<end){
		int pivot = Partition(v,start,end);
		QuickSort(v, start, pivot - 1);
		QuickSort(v,pivot + 1, fin);
	}
}

int Partition(v, int ini, int fin){
	int start = ini;
	int end = fin;

	T x = v[end]
	int i = start;
	for (int j=start; j<end-1){
		if (v[j] <= x){
			
		}
	}
}

