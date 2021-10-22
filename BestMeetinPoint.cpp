/* C++ program to find best meeting point in 2D array*/
#include <bits/stdc++.h>
using namespace std;
#define ROW 3
#define COL 5

int minTotalDistance(int grid[][COL]) {
	if (ROW == 0 || COL == 0)
		return 0;
	
	vector<int> vertical; //find x cordinate travelling row wise
	vector<int> horizontal;//find y coordinate travelling column wise
	
	// Find all members home's position
	for (int i = 0; i < ROW; i++) {
		for (int j = 0; j < COL; j++) {
			if (grid[i][j] == 1) {
				vertical.push_back(i);
				horizontal.push_back(j);
			}
		}
	}
	
	// Sort positions so we can find most
	// beneficial point
	sort(vertical.begin(),vertical.end());//sort so that we can find median
	sort(horizontal.begin(),horizontal.end());
	
	// middle position will always beneficial
	// for all group members but it will be
	// sorted which we have already done
	int size = vertical.size()/2; //finding median
	int x = vertical[size]; //median of x cordinates
	int y = horizontal[size]; //median of y cordinates
	
	// Now find total distance from best meeting
	// point (x,y) using Manhattan Distance formula
	int distance = 0;
	for (int i = 0; i < ROW; i++)
		for (int j = 0; j < COL; j++)
			if (grid[i][j] == 1)
				distance += abs(x - i) + abs(y - j);
	
	return distance;
}

// Driver program to test above functions
int main() {
	int grid[ROW][COL] = {{1, 0, 0, 0, 1}, 
                          {0, 0, 0, 0, 0},
                          {0, 0, 1, 0, 0}};
	cout << minTotalDistance(grid);
	return 0;
}
