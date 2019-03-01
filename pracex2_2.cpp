#include<iostream>
#include<fstream>
#include<cstdlib>
using namespace std;

void sort(float x[], int N){
	for(int i = 1; i < N; i++){
		for(int j = i; j > 0; j--){
			if(x[j] < x[j-1]){
				float temp = x[j];
				x[j] = x[j-1];
				x[j-1] = temp;
			}else{
				break;
			} 
		}
	}
}

int main(){
	//Write your code here
		string source;
		ifstream source("score1.txt");
			atof(source.c_str());
			
	string i;
	while(getline(source,i));
		atof(i.c_str());
		int a[];
		cout<< sort(a[i],20) <<"/n";
		


	
	return 0;
}

