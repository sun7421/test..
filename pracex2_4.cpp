#include <iostream>
#include <cmath>

using namespace std;
	float av(float x,float y);
	
	
//Write prototype of av() here.

int main(){
    cout << av(-2.5,1.1) << "\n";
    cout << av(1,10000) << "\n";
    cout << av(8.5,2.4) << "\n";
    cout << av(0.1,0.0001) << "\n";
    cout << av(10,0.007) << "\n";
    cout << av(1,-2) << "\n";
    cout << av(15,100) << "\n";
    cout << av(123,5432) << "\n";
}

//Write function definition of av() here.
float av(float x,float y)
{	
	double maxxy,minxy;
	if(x<=0|y<=0)
		{
			x,y=0;
			return 0;
		}
	 if	(x>y) 
		{
		 maxxy=x;
		minxy=y;
		
		}
		else if(x=y)
			{	 maxxy,minxy=x;
	
			}
		else if(x<y)
		{
		float y=maxxy;
		float x=minxy;
		}
		if(maxxy/minxy<=100)
			{
				 float a=sqrt(x*y);
				return a;
			}
		else{ float k = av(x,(x+y)/2)+av(y,(x+y)/2);
			return k;
		}
		
	
