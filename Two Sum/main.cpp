/*
	Leet Code: TwoSums Problem (Easy)
	
	Given an array of integers, return indices of the two numbers such that they add up to a specific target.
	You may assume that each input would have exactly one solution, and you may not use the same element twice.

	Expected: return [0, 1]
*/
#include <iostream>
#include <vector>

using namespace std;

vector<int> twoSum(vector<int>& nums, int target);

int main() {
	vector<int> nums = {2, 7, 11, 15};
	int target = 9;
	vector<int> result;
	
	result = twoSum(nums, target);

	for (int i = 0; i < result.size(); i++) {
		cout << result[i] << endl;
	}
}

vector<int> twoSum(vector<int>& nums, int target) {
	vector<int> temp;
	for (int i = 0; i < nums.size(); i++) {
		for (int j = 0; j < nums.size(); j++) {
			if (nums[i] + nums[j] == target) {
				temp.push_back(i);
				temp.push_back(j);
				return temp;
			}
		}
	}

	return temp;
}