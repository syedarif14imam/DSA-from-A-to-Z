// concatenate two given arrays 
// Array 1 - 3 [1 2 3]
// Array 2 - 3 [4 5 6]
// after conacatenation -> 6 [1 2 3 4 5 6]

#include <bits/stdc++.h>
using namespace std;

int main() {

  // your code goes here
	int s1, s2;
	cin >> s1 >> s2;

	int a1[s1], a2[s2];

	for (int i = 0; i < s1; i++) {
		cin >> a1[i];
	}

	for (int i = 0; i < s2; i++) {
		cin >> a2[i];
	}

	int s3 = s1 + s2;
	int c[s3];

	// concatenation of arrays
	for (int i = 0; i <= s3 - 1; i++) {
		if (i <= s1 - 1)
		{
			c[i] = a1[i];
		}
		else
		{
			c[i] = a2[i - s1];
		}
	}

  //printing the resulting array
	for (int j = 0; j < s3; j++) {
		cout << c[j] << " ";
	}

  return 0;
}






