#include<iostream>
using namespace std;

char before(char a){
    char b;
    if(a >= 'A' and a <= 'Z'){
        b = a - 1;
        if(a == 'A') b = 'Z';
    }else b = '0';
    return b;
}

int main(){
	//Test Case
	cout << before('A') << "\n";
	cout << before('B') << "\n";
	cout << before('P') << "\n";
	cout << before('T') << "\n";
	cout << before('Z') << "\n";
	cout << before('a') << "\n";
	cout << before('0') << "\n";
	cout << before('c') << "\n";
	return 0;
}
