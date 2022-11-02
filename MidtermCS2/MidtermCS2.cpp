using namespace std;

#include <iostream>
#include <vector>
#include "Midterm.h"
#include "EasyMidterm.h"

int question16Helper(vector<int> nums, int index) {
    if (index >= nums.size()) {
        return 0;
    }

    return nums.at(index) + question16Helper(nums, index + 2);
}

int question16(vector<int> nums) {
    int evenIndex = 0;
    int oddIndex = 1;

    return question16Helper(nums, evenIndex) - question16Helper(nums, oddIndex);
}

bool question17(vector<vector<int>> matrix) {
    int rowSum = 0;
    int colSum = 0;

    for (int i = 0; i < matrix.size(); i++) {
        for (int j = 0; j < matrix[i].size(); j++) {
            rowSum += matrix[i][j];
        }

        for (int j = 0; j < matrix[i].size(); j++) {
            colSum += matrix[j][i];
        }

        if (rowSum != colSum) {
            return false;
        }

        rowSum = 0;
        colSum = 0;
    }

    return true;
}

int main() {
    vector<int> nums = {4, 2, 7, 11, 10};
    vector<vector<int>> matrix = {
        {3, 2, 1},
        {1, 7, 3},
        {2, 2, 5}
    };

    Midterm exam("Joe", 99);
    Midterm* test;

    EasyMidterm easyTest("Phil", 1);
    test = &easyTest;

    cout << question16(nums) << endl;
    cout << question17(matrix) << endl;
    cout << exam.getScore() << endl;
    cout << test->getScore() << endl;
}
