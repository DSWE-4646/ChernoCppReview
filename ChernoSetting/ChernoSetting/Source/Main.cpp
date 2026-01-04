#include <iostream>

int main() 
{
    const int Rows = 5;
    const int Cols = 5;

    int ** Dynamic2D = new int* [Rows];
    for (int i = 0; i < Rows; i++)
    {
        Dynamic2D[i] = new int[Cols];
    }

    Dynamic2D[0][0] = 1;
    Dynamic2D[3][9] = 25;

    std::cout << Dynamic2D[0][0] << std::endl;
    std::cout << Dynamic2D[3][9] << std::endl;

    for (int i = 0; i < Rows; i++)
    {
        delete[] Dynamic2D[i];
    }
    delete[] Dynamic2D;
    
    return 0;
}
