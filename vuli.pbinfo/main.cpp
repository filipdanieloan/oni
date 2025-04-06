#include <iostream>
#include <fstream>
#include <math.h>
using namespace std;
long long int p[101][101];
int prim(long long int nr){
	int suma=0;
	while(nr){
		suma=suma+nr%10;
		nr=nr/10;
	}
	if(suma==0) return 0;
	for(int i=2;i*i<=suma;++i){
		if(suma % i == 0 ){
			return 0;
		}
	}
	return 1;
}
int main() {
	int i,j,k;
	ifstream fin("vuli.in");
	ofstream fout("vuli.out");
	fin>>k;
	for(i=0;i<=k;++i) {p[i][0]=1;}
	for(i=1;i<=k;++i){
		for(j=1;j<=i;++j){
				p[i][j]=p[i-1][j]+p[i-1][j-1];
		}
	}
	
	for(j=0;j<=k/2;++j){
		if(prim(p[k][j]))
			fout<<p[k][j]<<" ";
	}
}