#include <iostream>
using namespace std;

void stuff(char *x){
	*x = 'b';
	cout << *x;
}
int main() {
	char x = 'a';
	stuff(&x);
}