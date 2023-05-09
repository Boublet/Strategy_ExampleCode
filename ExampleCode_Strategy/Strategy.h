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
	double  getFish(const int level, const double bonus) {
		return level * 10 + bonus;
	}
	double	getCrab(const int level, const double bonus) {
		return level * 5 + bonus;
	}
};

class TemperedMeshNet_Stra : public Strategy {
public:
	double  getFish(const int level, const double bonus) {
		return level * 20 + bonus;
	}
	double	getCrab(const int level, const double bonus) {
		return level * 10 + bonus;
	}
};

class HeavyDutyTrawlNet_Stra : public Strategy {
public:
	double  getFish(const int level, const double bonus) {
		return level * 30 + bonus;
	}
	double	getCrab(const int level, const double bonus) {
		return level * 15 + bonus;
	}
};

class NullNet : public Strategy {
public:
	double  getFish(const int level, const double bonus) {
		return 0;
	}
	double	getCrab(const int level, const double bonus) {
		return 0;
	}
};


#endif // !_STRATEGY_H
