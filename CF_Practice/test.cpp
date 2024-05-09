#include <iostream>

using namespace std;

int main()
{
    int matrix[100000][100000];

    for (int i = 0; i < 100000; i++)
    {
        for (int j = 0; j < 100000; j++)
        {
            matrix[i][j] = i + j;
        }
    }

    cout << matrix[0][0] << endl;

    return 0;
}