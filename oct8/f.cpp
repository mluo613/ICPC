#include <iostream>
using namespace std;


void increment(char array[][], int row, int column, int x, int y){
    if (array[row][column] == 'X' || array[row][column] == 'D')
      return;
    else if (array[row][column] == 'A'){
      array[row][column] = 'B';
      return;
    }
    else if (array[row][column] == 'B'){
      array[row][column] = 'C';
      return;
    }
    else if (array[row][column] == 'C'){
      array[row][column] = 'D';
      if (row != 0)
	  increment(array, row-1, column, x, y);
      if (row != x)
	  increment(array, row+1, column, x, y);
      if (column != 0)
	  increment(array, row, column-1, x, y);
      if (column != y)
	  increment(array, row, column +1, x, y);
    }
    return;
}


int main(){
  
 int n;
cin >> n;

for (int z = 0; z < n; z++){
    int row, column;
    cin >> row;
    cin >> column;
    char *input = new char[row][column];
    for (int q = 0; q < row; q++){
	string temp;
	cin >> temp;
	const char * s = temp.c_str();
	for (int i = 0; i < column; i++)
	  input[q][i] = s[i];
    }
    
    int itr;
    cin >> itr;
    
    for (int i = 0; i < itr; i++){
      int r,c;
      cin >> r;
      cin >> c;
      increment(input, r, c, rows, columns);
    }
    
    for(int i = 0; i < rows; i++){
	for (int j = 0; j < columns; j++){
	    cout << input[i][j];
	}
	cout << endl;
    }
}
  
  
  
  
return 0;
}