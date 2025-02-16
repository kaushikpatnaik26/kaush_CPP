#include <iostream>
using namespace std;
int i = 0;
int  main() {
	for(i = 0 ; i < 5 ; i++) {
		//cout << i << endl;
		if(i==2) {
			break;
		}
	}
	cout<<"The looped breaked at i = "<< i << endl;
	return 0;
}
