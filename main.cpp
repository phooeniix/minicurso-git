#include <iostream>
using namespace std;
void contRecursivo(int i){
	if(i<0)return;
	cout<<i<<" ";
	contRecursivo(i-1);
}
int main(){
	cout<<"Meu deus isso até que é legal";
	contRecursivo(10);
	return 0;
}
