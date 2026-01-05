#include <iostream>
#include <vector>
#include <algorithm>

struct Player
{
	std::string name;
	int score;

	bool operator<(const Player& other) const
	{
		return score < other.score; // Sort by score ascending
	}
};

int main()
{
	std::vector<Player> players = { {"Alice", 80},{"Bob", 90} };
	std::sort(players.begin(), players.end());

	for (const auto& player : players)
	{
		std::cout << player.name<< ":" << player.score << std::endl;
	}
}