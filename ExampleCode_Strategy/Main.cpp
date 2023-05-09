// Giả sử rằng ta đang lập trình một trò chơi game đánh bắt cá
// Mỗi một người chơi sẽ có level và bonnus khác nhau
// Mỗi người sẽ điều khiển con thuyền trang bị các loại lưới đánh cá khác nhau
// Mỗi loại lưới sẽ cho ra các sãn lượng cá và cua riêng và hạn sử dụng khác nhau
// Test coi nó có thay đổi khum
#include "PlayerBoat.h"

int main() {
	BasicTrawlNet_Stra* bsn = new BasicTrawlNet_Stra;
	TemperedMeshNet_Stra* tmn = new TemperedMeshNet_Stra;
	HeavyDutyTrawlNet_Stra* hdtn = new HeavyDutyTrawlNet_Stra;

	PlayerBoat player1("Vo Chi Trung", 5, 100, bsn);
	cout << "Fish player 1: " << player1.getFish() << endl;
	cout << "Crab player 1: " << player1.getCrab() << endl;
	player1.setStrategy(tmn);
	cout << "Fish player 1: " << player1.getFish() << endl;
	cout << "Crab player 1: " << player1.getCrab() << endl;
	player1.setStrategy(hdtn);
	cout << "Fish player 1: " << player1.getFish() << endl;
	cout << "Crab player 1: " << player1.getCrab() << endl;

	return 0;
}
