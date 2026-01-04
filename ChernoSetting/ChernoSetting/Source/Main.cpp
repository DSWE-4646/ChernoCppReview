#include <iostream>

int main() 
{
    const int X = 5;
    const int Y = 5;
    const int Z = 5;

    int*** Dynamic3D = new int** [X];
    for (int i = 0; i < X; i++)
    {
        Dynamic3D[i] = new int* [Y];
        for (int j = 0; j < Y; j++)
        Dynamic3D[i][j] = new int[Z];
    }

    Dynamic3D[0][0][0] = 1;
    Dynamic3D[3][2][3] = 25;

    std::cout << Dynamic3D[0][0] << '\n';
    std::cout << Dynamic3D[3][2][3] << '\n';

    for (int i = 0; i < X; i++)
    {
        for (int j = 0; j <Y; j++)
        {
            delete[] Dynamic3D[i][j];
        }
        delete[] Dynamic3D[i];
    }
    delete[] Dynamic3D;
    
    return 0;
}
