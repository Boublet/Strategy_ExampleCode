#include "PlayerBoat_NoStra.h"


PlayerBoat_NoStra::PlayerBoat_NoStra() {
	this->name = "";
	this->level = 0;
	this->bonus = 0;
	this->typeOfNet = "";
}
PlayerBoat_NoStra::PlayerBoat_NoStra(string name, int level, double bonus, string typeOfNet) {
	this->name = name;
	this->level = level;
	this->bonus = bonus;
	this->typeOfNet = typeOfNet;

}
PlayerBoat_NoStra::PlayerBoat_NoStra(const PlayerBoat_NoStra& pb) {
	this->name = pb.name;
	this->level = pb.level;
	this->bonus = pb.bonus;
	this->typeOfNet = pb.typeOfNet;
}
void PlayerBoat_NoStra::setLevel(int level) {
	this->level = level;
}
void PlayerBoat_NoStra::setBonus(double bonus) {
	this->bonus = bonus;
}
void PlayerBoat_NoStra::setName(string name) {
	this->name = name;
}
void PlayerBoat_NoStra::setTypeOfNet(string type) {
	this->typeOfNet = type;
}
double PlayerBoat_NoStra::getFish() {
	if (this->typeOfNet == "BasicTrawlNet") {
		return level * 10 + bonus;
	}
	else if (this->typeOfNet == "TemperedMeshNet") {
		return level * 20 + bonus;
	}
	else if (this->typeOfNet == "HeavyDutyTrawlNet") {
		return level * 30 + bonus;
	}
	else {
		return 0;
	}
}
double PlayerBoat_NoStra::getCrab() {
	if (this->typeOfNet == "BasicTrawlNet") {
		return level * 5 + bonus;
	}
	else if (this->typeOfNet == "TemperedMeshNet") {
		return level * 10 + bonus;
	}
	else if (this->typeOfNet == "HeavyDutyTrawlNet") {
		return level * 15 + bonus;
	}
	else {
		return 0;
	}
}