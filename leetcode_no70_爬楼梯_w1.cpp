/*------------------------------------------------------------------|
假设你正在爬楼梯。需要 n 阶你才能到达楼顶。							|
																	|
每次你可以爬 1 或 2 个台阶。你有多少种不同的方法可以爬到楼顶呢？	|
																	|
注意：给定 n 是一个正整数。											|
																	|
示例 1：															|
																	|
输入： 2															|
输出： 2															|
解释： 有两种方法可以爬到楼顶。										|
1.  1 阶 + 1 阶														|
2.  2 阶															|
示例 2：															|
																	|
输入： 3															|
输出： 3															|
解释： 有三种方法可以爬到楼顶。										|
1.  1 阶 + 1 阶 + 1 阶												|
2.  1 阶 + 2 阶														|
3.  2 阶 + 1 阶														|
																	|
来源：力扣（LeetCode）												|
链接：https://leetcode-cn.com/problems/climbing-stairs				|
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。|
-------------------------------------------------------------------*/

/*	斐波那契数列
*	执行用时：0 ms, 在所有 C++ 提交中击败了100.00%的用户
*	内存消耗：5.8 MB, 在所有 C++ 提交中击败了81.91%的用户
*/

#include <iostream>
#include <string>

using namespace std;

int climbStairs(int n) 
{
	int x = { 0 };
	int y = { 1 };
	int result = { 0 };

	for (int i = 1; i <= n; i++)
	{
		result = x + y;
		x = y;
		y = result;
	}

	return result;
}

int main()
{
	int floor = { 5 };

	cout << climbStairs(floor) << endl;

	return 0;
}