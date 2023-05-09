#ifndef _STRATEGY_H
#define _STRATEGY_H

#include <iostream>

using namespace std;

class Strategy {
public:
	virtual ~Strategy() = default;
	virtual double  getFish(const int level, const double bonnus) = 0;
	virtual double	getCrab(const int level, const double bonnus) = 0;
};


class BasicTrawlNet_Stra : public Strategy {
public:
	double  getFish(const int level, const double bonnus) {
		return level + bonnus;
	}
	double	getCrab(const int level, const double bonnus) {
		return level * 0.5 + bonnus;
	}
};

class TemperedMeshNet_Stra : public Strategy {
public:
	double  getFish(const int level, const double bonnus) {
		return level * 2 + bonnus;
	}
	double	getCrab(const int level, const double bonnus) {
		return level * 1 + bonnus;
	}
};

class HeavyDutyTrawlNet_Stra : public Strategy {
public:
	double  getFish(const int level, const double bonnus) {
		return level * 3 + bonnus;
	}
	double	getCrab(const int level, const double bonnus) {
		return level * 1.5 + bonnus;
	}
};


#endif // !_STRATEGY_H
