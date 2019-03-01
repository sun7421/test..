#include<iostream>
#include<string>
#include<cstdlib>
using namespace std;

template <typename T>
int countIf(T arr[],int length,T target){
	//Write your code here
	int a=0;
	for(int j=0;j<length;j++)
	{
	if(arr[j]==target)
		{
			a++;
		}
	}
		return a;

	//arr[] = atoi(arr[].c_str()) ;


}


int main(){
	int a[] = {1,0,2,3,4,0,1,0,0,5,1,9};
	cout << countIf(a,12,0) << "\n";
	cout << countIf(a,12,8) << "\n";
	
	char b[] = "CPECMU";
	cout << countIf(b,6,'C') << "\n";
	cout << countIf(b,6,'E') << "\n";
	
	return 0;
}
