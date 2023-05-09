#ifndef _PLAYERBOAT_NOSTRA_H
#define _PLAYERBOAT_NOSTRA_H

#include <iostream> 

using namespace std;

class PlayerBoat_NoStra {
private:
	string name;
	int level;
	double bonus;
	string typeOfNet;
public:
	PlayerBoat_NoStra();
	PlayerBoat_NoStra(string name, int level, double bonus,string typeOfNet);
	PlayerBoat_NoStra(const PlayerBoat_NoStra& pb);
	void setLevel(int level);
	void setBonus(double bonus);
	void setName(string name);
	void setTypeOfNet(string type);
	double getFish();
	double getCrab();
};

#endif // !_PLAYERBOAT_NOSTRA_H
