#include <iostream>
#include <vector>
#include <algorithm>

struct Player
{
	std::string name;
	int score;
};

int main()
{
	std::vector<Player> players = { {"Alice", 80},{"Bob", 90} };
	std::sort(players.begin(), players.end(), [](const Player& p1, const Player& p2) {
		return p1.score > p2.score; // Sort by score descending
		});

	for (const auto& player : players)
	{
		std::cout << player.name<< ":" << player.score << std::endl;
	}
}