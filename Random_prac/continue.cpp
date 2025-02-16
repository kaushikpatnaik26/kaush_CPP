#include <iostream>
using namespace std;
int main() {
    
    cout << "All the odd nos form 0 - 50 :  " << endl;
    int i = 0;
    for(i = 0; i < 50 ; i++) {
        if(i%2 == 0){
            continue;
        } 
    cout << i << " " ;
    }
 return 0;
}
