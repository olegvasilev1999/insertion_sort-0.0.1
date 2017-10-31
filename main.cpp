# insertion_sort-0.0.1

#include <iostream>
#include <sstream>

using namespace std;

bool read_numbers(int & n, int * array)
{
	string string;
	getline(cin, string);
	istringstream stream(string);

	bool success = true;

	for (int i = 0; i < n; ++i) {
		if (!(stream >> array[i])) {
			success = false;
			break;
		}
	}
	return success;
}

int main() {
	int n;
	string str;
	
	getline(cin, str);
	istringstream stream(str);
	
	if (stream >> n) {
	int * array = new int [n];
		if (read_numbers(n, array)) {
			int a, j; 
			for (int i = 1; i < n; i++){
				a = array[i];
				j = i - 1; 
				while (array[j] > a && j >= 0){
					array[j + 1] = array[j];
					array[j] = a;
					j--;
				}
			}

			for (int i = 0; i < n; i++) {
				cout << array[i] << " ";
			}
		}
		else {
			cout << "An error has occured while reading input data.";
		}
	}

	cin.get();
	cin.get();
	return 0;
}
