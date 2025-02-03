#include <iostream>
using namespace std;

class Forest {
	private:
		int trees;

	public:
		void standing() {
			cout << "Tree is standing.\n";
		}
 
		void moving() {
			cout << "Man is moving.\n";
		}

		void flying() {
			cout << "Bird is flying.\n";
		}
};

int main() {
	Forest a;

	a.moving();
	a.standing();
	a.flying();
    //b.moving();
}