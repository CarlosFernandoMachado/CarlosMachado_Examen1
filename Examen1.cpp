# include <iostream>

using std::cout;
using std::cin;
using std::endl;

char** tablero();
void borrar(char** &ataxx, int size);

int main(int argc, char*argv[]){
	int size = 11;
	char** ataxx = tablero();
	borrar(ataxx,size);
	return 0;
}
char** tablero(){
	int size = 11,temp;
	if (size % 2 != 0){
		temp = (size - 1) / 2;
	}else{
		temp = size / 2;
	}
	char** ataxx = new char*[size];
	for (int i = 0; i < size; i++){
		ataxx[i] = new char[size];
	}
	for(int i = 0; i < size; i++){
		for(int j = 0; j < size; j++){
			if ( i == 0 && j == temp){
				ataxx[i][j] = 'A';
			}else if ( j == 0 && i == temp){
				ataxx[i][j] = 'B';
			}else if ( j == size - 1 && i == temp){
				ataxx[i][j] = 'B';
			}else if ( i == size - 1 && j == temp){
				ataxx[i][j] = 'A';
			}else{
				ataxx[i][j] = '+';
			}
		}
	}
	return ataxx;
}
void borrar(char** &ataxx, int size){
	for (int i = 0; i < size; i++){
		delete[] ataxx[i];
	}
	delete[] ataxx;
}
