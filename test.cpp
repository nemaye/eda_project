
#include<iostream>
#include <math.h> 

using namespace std;
int cosine(int x){
	float rad = x*3.1415926/180;
	double cos;
	cout<<rad<<" rad\n";
	cos = 1 - pow(rad,2)/2 + pow(rad,4)/24 - pow(rad,6)/720 + pow(rad,8)/40320;
	cout<<cos<<" cos\n";
	return cos;
}

int main(){
	int n = 90;
	double ans;
	ans = cosine(n);
	cout<<ans;
}