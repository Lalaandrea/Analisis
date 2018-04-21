for (i = n - 1, j = 0; i >= 0; i--, j++)	//O(n)
	s2[j] = s[i];				//O(1)
for (i = 0, i < n; i++)						//O(n)
	s[i] = s2[i];				//O(1)
