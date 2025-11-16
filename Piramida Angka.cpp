// by Fernando Saputra ( 2021210069 )

#include <iostream>

using namespace std;

int main (){
	
	int num;
	cout << "Masukkan Nilai n : ";
	cin >> num;
	
	for (int i=1; i <= num; i++){
		for (int j=1; j <= num-i; j++){
			cout << "   ";
		}
		for (int k=1; k <= i; k++){
			if (i <= 9) cout << "     " << i;
			else cout << "    " << i;
		}
		cout << endl;
	}
	return 0;
}
