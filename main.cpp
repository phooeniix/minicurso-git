#include <iostream>
using namespace std;
void contRecursivo(int i){
	if(i<0)return;
	cout<<i<<" ";
	contRecursivo(i-1);
}
void chamaFUncao(){
	cout<<"Como assim"<<endl;
}
int main(){
	cout<<"Meu deus isso até que é legal";
	contRecursivo(10);
	chamaFUncao();	
	return 0;
}
