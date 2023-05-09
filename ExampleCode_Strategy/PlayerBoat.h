#ifndef _PLAYERBOAT_H
#define _PLAYERBOAT_H

#include "Strategy.h"
#include <string>

class PlayerBoat {
private:
	string name;
	int level;
	double bonus;
	Strategy* stra;
public:
	PlayerBoat();
	PlayerBoat(string name, int level, double bonus, Strategy* stra);
	PlayerBoat(const PlayerBoat& pb);
	double getFish();
	double getCrab();
	void setStrategy(Strategy* stra);

};

#endif // !_PLAYERBOAT_H
