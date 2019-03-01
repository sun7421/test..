#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;
char alphabet[8][8];
char h[26]= {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
void showAlphabet();
void randomAlphabet();

int main(){
	srand(time(0));	
	randomAlphabet();
	showAlphabet();
}

void showAlphabet(){
	int b=0;

	for(int i = 0; i < 8; i++){
		for(int j = 0; j < 8; j++){
			
			cout << alphabet[i][j]<<h[b++] ;
		}
		cout << "\n";
	}
	
}
void randomAlphabet()
{	
	for(int i = 0; i < 8; i++){
		for(int j = 0; j < 8; j++){
			
			cout << alphabet[i][j]<<h[rand()%26] ;
		}
		cout << "\n";
	}
	cout<<"\n";
}
		
	
	//cout<<rand()%26+1<<h;
	
	
	 


//Write definition of function randomAlphabet() here.


