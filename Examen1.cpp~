# include <iostream>

using std::cout;
using std::cin;
using std::endl;

char** tablero();
void borrar(char** &ataxx, int size);
void mover(char** &ataxx, int size, int a, int b, int c, int d, char pl, char altr);
void imprimir(char** &ataxx, int size);
bool ganador(char** &ataxx, int size);

int main(int argc, char*argv[]){
	int size = 11,turno = 1;
	bool validar = true,menu = true;
	char** ataxx = tablero();
	imprimir(ataxx,size);
	while (menu){
		if(turno % 2 != 0){
			cout << "--------------------------JUGADOR-1----------------------------" << endl;
			char pl1 = 'A';
			int a,b,c,d;
			while (validar){
				cout << "Ingrese las coordenadas de la pieza que quiere mover" << endl;
				cout << "Ingrese la posicion en i: ";
				cin >> a;
				cout << "Ingrese la posicion en j: ";
				cin >> b;
				if (ataxx[a][b] == pl1 && a >= 0 && a <= 10 && b >= 0 && b <= 10){
					validar = false;
				}else{
					cout << "Porfavor ingrese una posicion valida" << endl;
				}
			}
			validar = true;
			while (validar){
				cout << "Ingrese las coordenadas a donde se quiere mover" << endl;
				cout << "Ingrese la posicion en i: ";
				cin >> c;
				cout << "Ingrese la posicion en j: ";
				cin >> d;
				int temp,temp2,temp3,temp4;
				if (a + 2 < 11){
					temp = a + 2;
				}else
					temp = a;
				if (a - 2 >= 0){
					temp2 = a - 2;
				}else 
					temp2 = a;
				if (b + 2 < 11){
					temp3 = b + 2;
				}else
					temp3 = b;
				if (b - 2 >= 0){
					temp4 = b - 2;
				}else
					temp4= b;
				if (ataxx[c][d] == '+' && c >= temp2 && c <= temp && d >= temp4 && d <= temp3){
					validar = false;
				}else{
					cout << "Porfavor ingrese una posicion valida, no se puede mover donde ya hay piezas" << endl;
				}
			}
			validar = true;
			mover(ataxx,size,a,b,c,d,pl1,'B');
			imprimir(ataxx,size);
			menu = ganador(ataxx,size);
			turno ++;
		}else{
			cout << "--------------------------JUGADOR-2----------------------------" << endl;
			char pl2 = 'B';
			int a,b,c,d;
			while (validar){
				cout << "Ingrese las coordenadas de la pieza que quiere mover" << endl;
				cout << "Ingrese la posicion en i: ";
				cin >> a;
				cout << "Ingrese la posicion en j: ";
				cin >> b;
				if (ataxx[a][b] == pl2 && a >= 0 && a <= 10 && b >= 0 && b <= 10){
					validar = false;
				}else{
					cout << "Porfavor ingrese una posicion valida" << endl;
				}
			}
			validar = true;
			while (validar){
				cout << "Ingrese las coordenadas a donde se quiere mover" << endl;
				cout << "Ingrese la posicion en i: ";
				cin >> c;
				cout << "Ingrese la posicion en j: ";
				cin >> d;
				int temp,temp2,temp3,temp4;
				if (a + 2 < 11){
					temp = a + 2;
				}else
					temp = a;
				if (a - 2 >= 0){
					temp2 = a - 2;
				}else 
					temp2 = a;
				if (b + 2 < 11){
					temp3 = b + 2;
				}else
					temp3 = b;
				if (b - 2 >= 0){
					temp4 = b - 2;
				}else
					temp4= b;
				if (ataxx[c][d] == '+' && c >= temp2 && c <= temp && d >= temp4 && d <= temp3){
					validar = false;
				}else{
					cout << "Porfavor ingrese una posicion valida, no se puede mover donde ya hay piezas" << endl;
				}
			}
			validar = true;
			mover(ataxx,size,a,b,c,d,pl2,'A');
			imprimir(ataxx,size);
			menu = ganador(ataxx,size);
			turno --;
		}
	}
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
void mover(char** &ataxx, int size, int a, int b, int c, int d, char pl, char altr){
	ataxx[c][d] = ataxx[a][b];
	if(c == a + 2 || d == b + 2 || c == a - 2 || d == b - 2){
		ataxx[a][b] = '+';
	}
	if (ataxx[c+1][d+1] == altr){
		ataxx[c+1][d+1] = pl;
	}
	if (ataxx[c+1][d-1] == altr){
		ataxx[c+1][d-1] = pl;
	}
	if (ataxx[c-1][d+1] == altr){
		ataxx[c-1][d+1] = pl;
	}
	if (ataxx[c-1][d-1] == altr){
		ataxx[c-1][d-1] = pl;
	}
	if (ataxx[c+1][d] == altr){
		ataxx[c+1][d] = pl;
	}
	if (ataxx[c-1][d] == altr){
		ataxx[c-1][d] = pl;
	}
	if (ataxx[c][d+1] == altr){
		ataxx[c][d+1] = pl;
	}
	if (ataxx[c][d-1] == altr){
		ataxx[c][d-1] = pl;
	}

}
void imprimir(char** &ataxx, int size){
	cout << " 012345678910" << endl;
	for (int i = 0; i < size; i++){
		for (int j = 0; j < size; j++){
			if(j == 0){
				cout << i;
			}
			if(j == size - 1){
				cout << ataxx[i][j] << endl;
			}else{
				cout << ataxx[i][j];
			}
		}
	}
}
bool ganador(char** &ataxx, int size){
	int cont1 = 0, cont2 = 0;
	bool val1 = true,val2 = true, val3 = true;
	for (int i = 0; i < size; i++){
		for (int j = 0; j < size; j++){
			if (ataxx[i][j] == 'A')
				cont1 += 1;
				val1 = false;
		}
	}
	for (int i = 0; i < size; i++){
		for (int j = 0; j < size; j++){
			if (ataxx[i][j] == 'B')
				cont2 += 1;
				val2 = false;
		}
	}
	for (int i = 0; i < size; i++){
		for (int j = 0; j < size; j++){
			if (ataxx[i][j] == '+')
				val3 = false;
		}
	}
	if (val3){
		if (cont1 < cont2){
			cout << "HA GANADO EL JUGADOR B";
		}else if (cont1 > cont2){
			cout << "HA GANADO EL JUGADOR A";
		}else{
			cout << "EMPATE";
		}
		return false;
	}else if (val1){
		cout << "Ha ganado el jugador B";
		return false;
	}else if(val2){
		cout << "Ha ganado el jugador A";
		return false;
	}
	return true;
}
