#include "YuukiAsuna.h"
std::vector<std::pair<int, int>> Asuna(int n, int Q)
{
	std::vector<std::pair<int, int>> ans;
	std::vector <int> S(2);
	for (int i = 1; i <= n; i++)
		for (int j = i + 1; j <= n; j++)
		{
			S[0] = i, S[1] = j;
			if (Query (S))
				ans.push_back({i, j});
		}

	return ans;
}
