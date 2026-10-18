#include <iostream>
using namespace std;

int countPaths(int maze[4][4], int row, int col) {
    if (row >= 4 || col >= 4 || maze[row][col] == 0)
        return 0;

    if (row == 3 && col == 3)
        return 1;

    return countPaths(maze, row + 1, col) + countPaths(maze, row, col + 1);
}

int main() {
    int maze[4][4] = {
        {1, 0, 0, 0},
        {1, 1, 0, 1},
        {0, 1, 0, 0},
        {1, 1, 1, 1}
    };

    cout << "Number of paths: " << countPaths(maze, 0, 0) << endl;
    return 0;
}
