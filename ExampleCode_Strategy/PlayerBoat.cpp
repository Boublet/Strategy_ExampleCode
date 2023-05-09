#include "PlayerBoat.h"

#include "PlayerBoat.h"

PlayerBoat::PlayerBoat() {
	this->name = "";
	this->level = 0;
	this->bonus = 0;
	this->stra = nullptr;
}

PlayerBoat::PlayerBoat(string name, int level, double bonus, Strategy* stra) {
	this->name = name;
	this->level = level;
	this->bonus = bonus;
	this->stra = stra;
}

PlayerBoat::PlayerBoat(const PlayerBoat& pb) {
	this->name = pb.name;
	this->level = pb.level;
	this->bonus = pb.bonus;
	this->stra = pb.stra;
}
void PlayerBoat::setStrategy(Strategy* stra) {
	this->stra = stra;
}
double PlayerBoat::getFish() {
	return this->stra->getFish(this->level, this->bonus);
}
double PlayerBoat::getCrab() {
	return this->stra->getCrab(this->level, this->bonus);
}

