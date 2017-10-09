#include <iostream>
#include <cstring>
using namespace std;



int click(char grid[12][10], char c, int r, char spot){
    int ret = 0;
    if (c == 96 || c == 107 || r == -1 || r == 12)
      return 0;
    else if (grid[c-96][r] == spot){
      //cout << "inside click" << endl;
      ret += click(grid, c-1, r, spot);
      ret += click(grid, c+1, r, spot);
      ret += click(grid, c, r-1, spot);
      ret += click(grid, c, r+1, spot);
      ret += 1;
      cout << ret << endl;
    }

    grid[c-97][r-1] = ' ';
    return ret;
}
    

int main(){

int n;
cin >> n;
for (int i = 0; i < n; i++){
    char arr[12][10];
    for (int j = 0; j < 12; j++){
      string temp;
      cin >> temp;
      const char* str = temp.c_str();
      for (int k = 0; k < 10; k++){
	arr[j][k] = str[k];
      }
    }
    int squares = 120;
    while (squares != 0){
      char col;
      int row;
      cin >> col;
      cin >> row;
      squares -= click(arr, col, row, arr[col-96][row]);
    }
    cout << squares << endl;
}
return 0;
}
    
