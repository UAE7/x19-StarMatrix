#include <iostream>
#include <vector>

using namespace std;

void readSizes(int& rows, int& columns);
void displayStars(int rows, int columns, vector< vector<char> > stars);
int main(){
vector< vector<char> > stars;
int rows, columns;
readSizes(rows, columns);
for (int r = 0; r < rows; r++)
{

stars.push_back(vector<char>());
for (int c = 0; c < columns; c++)
{
stars[r].push_back('*');
}
}
displayStars(rows, columns, stars);


return 0;
}
void readSizes(int& rows, int& columns){
bool valid = false;
while (!valid)
{
cout << "Enter rows and columns of stars:\n";
cin >> rows >> columns;

if (cin.fail() || rows <= 0 || columns <= 0)
{
cin.clear();
cin.ignore(100, '\n');

cout << "The rows and columns of stars must be not zero or negative. Try again\n";
}else{
valid = true;
}
}
}
void displayStars(int rows, int columns, vector< vector<char> > stars){

for (int r = 0; r < rows; r++)
{
for (int c = 0; c < columns; c++)
{
cout << stars[r][c];
}
cout << '\n';
}
}

