// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
// 	long long t;
// 	cin >> t; // Read the number of test cases
// 	while (t--)
// 	{
// 		long long a, b, c;
// 		cin >> a >> b >> c; // Read the three integers a, b, c

// 		bool answer = false; // Initialize answer as false

// 		// Check if multiplying 'a' by some positive integer can make the sequence an AP
// 		long long new_a = 2 * b - c; // Calculate the potential new value for 'a'
// 		if (new_a / a > 0 && new_a % a == 0) // Check if new_a is a positive multiple of 'a'
// 			answer = true;

// 		// Check if multiplying 'b' by some positive integer can make the sequence an AP
// 		long long new_b = (a + c) / 2; // Calculate the potential new value for 'b'
// 		if (new_b / b > 0 && new_b % b == 0 && (c - a) % 2 == 0) // Check if new_b is a positive multiple of 'b' and (c-a) is even
// 			answer = true;

// 		// Check if multiplying 'c' by some positive integer can make the sequence an AP
// 		long long new_c = 2 * b - a; // Calculate the potential new value for 'c'
// 		if (new_c / c > 0 && new_c % c == 0) // Check if new_c is a positive multiple of 'c'
// 			answer = true;

// 		// Output the result for the current test case
// 		if (answer)
// 			cout << "YES" << endl;
// 		else
// 			cout << "NO" << endl;
// 	}
// 	return 0;
// }

// // Time Complexity (TC): O(1)
// // Space Complexity (SC): O(1)


#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t; // Number of test cases
	cin >> t;
	while (t--)
	{
		long long start, jumps; // 'start' is the initial position, 'jumps' is the number of jumps
		cin >> start >> jumps;

		long long final_pos; // Variable to store the final position after all jumps

		// Determine the effect of the number of jumps on the position
		if (jumps % 4 == 1)
			final_pos = -jumps; // If jumps % 4 == 1, move left by 'jumps'
		else if (jumps % 4 == 2)
			final_pos = 1; // If jumps % 4 == 2, move right by 1
		else if (jumps % 4 == 3)
			final_pos = jumps + 1; // If jumps % 4 == 3, move right by 'jumps + 1'
		else if (jumps % 4 == 0)
			final_pos = 0; // If jumps % 4 == 0, no net movement

		// Adjust the final position based on the parity of the starting position
		if (start % 2 == 0)
			final_pos = start + final_pos; // If starting position is even, add the calculated position
		else
			final_pos = start - final_pos; // If starting position is odd, subtract the calculated position

		cout << final_pos << endl; // Output the final position
	}
	return 0;
}

// Time Complexity (TC): O(1)
// Space Complexity (SC): O(1)
