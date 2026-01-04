#include <iostream>
#include <vector>

class Grid2D
{
    int rows;
    int cols;
    std::vector<int> data;

public:
    Grid2D(int r, int c) :
        rows(r), cols(c), data(r * c, 0) {}

    int& operator() (int r, int c)
    {
        if (r < 0 || r >= rows || c < 0 || c >= cols) {
            throw std::out_of_range("Index out of bounds");
        }
        return data[r * cols + c];
    }
    int getRows() const { return rows; }
    int getCols() const { return cols; }

};

int main()
{
    Grid2D grid(3, 3);
    grid(0, 0) = 1;
    grid(0, 1) = 2;
}