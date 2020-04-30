//projekt glownej klasy

class Game {

public:
	Game();

	void generateMap();
	void check_connection();
	void addPlayer();
	void delPlayer();
	int getNumberOfPlayers();

private:
	int numOfPlayers;

};