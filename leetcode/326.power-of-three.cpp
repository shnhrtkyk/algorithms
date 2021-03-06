/*
 * [326] Power of Three
 *
 * https://leetcode.com/problems/power-of-three/description/
 *
 * algorithms
 * Easy (40.89%)
 * Total Accepted:    132.9K
 * Total Submissions: 324.9K
 * Testcase Example:  '27'
 *
 * Given an integer, write a function to determine if it is a power of three.
 *
 * Example 1:
 *
 *
 * Input: 27
 * Output: true
 *
 *
 * Example 2:
 *
 *
 * Input: 0
 * Output: false
 *
 * Example 3:
 *
 *
 * Input: 9
 * Output: true
 *
 * Example 4:
 *
 *
 * Input: 45
 * Output: false
 *
 * Follow up:
 * Could you do it without using any loop / recursion?
 *
 */
#include <iostream>
using namespace std;

class Solution {
 public:
  bool isPowerOfThree(int n) {
    if (n <= 0) return 0;

    while (n % 3 == 0) {
      n = n / 3;
    }
    return n == 1;
  }
};
