#include<iostream>
using namespace std;

printO(int M ,int N){
	if (M>0&&N>0)
	{
		for(int i=0;i<M;i++){
			for(int j=0;j<N;j++){
				cout << 'O';
			}
			cout << '\n';
		}
	}
	else
	{
		cout << "Invalid input\n";
	}
	

}

int main(){
	
	printO(2,2);
	cout << "\n";
	
	printO(3,5);
	cout << "\n";	
	
	printO(5,3);
	cout << "\n";	
	
	printO(0,3);
	cout << "\n";	
	
	printO(7,0);
	cout << "\n";	
	
	return 0;
}