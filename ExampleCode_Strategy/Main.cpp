// Giả sử rằng ta đang lập trình một trò chơi game đánh bắt cá
// Mỗi một người chơi sẽ có level và bonnus khác nhau
// Mỗi người sẽ điều khiển con thuyền trang bị các loại lưới đánh cá khác nhau
// Mỗi loại lưới sẽ cho ra các sãn lượng cá và cua riêng và hạn sử dụng khác nhau

#include "PlayerBoat.h"
#include "PlayerBoat_NoStra.h"

int main() {
	// ************ Khi sử dụng Strategy ************
	cout << "============== Khi su dung Strategy ==============" << endl;
	// Khởi tạo các strategy
	BasicTrawlNet_Stra* bsn = new BasicTrawlNet_Stra;
	TemperedMeshNet_Stra* tmn = new TemperedMeshNet_Stra;
	HeavyDutyTrawlNet_Stra* hdtn = new HeavyDutyTrawlNet_Stra;

	//Khởi tạo PlayerBoat sử dụng Strategy
	PlayerBoat player1("Nuyen Van A",15,20,bsn);
	cout << "Khi thuyen cua nguoi choi dung Basic Traw Net: " << endl;
	cout << "\tSan luong ca: " << player1.getFish() << endl;
	cout << "\tSan luong cua: " << player1.getCrab() << endl;
	player1.setStrategy(tmn);
	cout << "Khi thuyen cua nguoi choi dung Tempered Mesh Net Net: " << endl;
	cout << "\tSan luong ca: " << player1.getFish() << endl;
	cout << "\tSan luong cua: " << player1.getCrab() << endl;
	player1.setStrategy(hdtn);
	cout << "Khi thuyen cua nguoi choi dung Heavy Duty Trawl: " << endl;
	cout << "\tSan luong ca: " << player1.getFish() << endl;
	cout << "\tSan luong cua: " << player1.getCrab() << endl << endl;

	
	// ************ không sử dụng Strategy ************
	cout << "============== Khi khong su dung Strategy ==============" << endl;
	PlayerBoat_NoStra player2("Tran Thi B", 15, 20, "BasicTrawlNet");
	cout << "Khi thuyen cua nguoi choi dung Basic Traw Net: " << endl;
	cout << "\tSan luong ca: " << player2.getFish() << endl;
	cout << "\tSan luong cua: " << player2.getCrab() << endl;
	player2.setTypeOfNet("TemperedMeshNet");
	cout << "Khi thuyen cua nguoi choi dung Tempered Mesh Net Net: " << endl;
	cout << "\tSan luong ca: " << player2.getFish() << endl;
	cout << "\tSan luong cua: " << player2.getCrab() << endl;
	player2.setTypeOfNet("HeavyDutyTrawlNet");
	cout << "Khi thuyen cua nguoi choi dung Heavy Duty Trawl: " << endl;
	cout << "\tSan luong ca: " << player2.getFish() << endl;
	cout << "\tSan luong cua: " << player2.getCrab() << endl;

	return 0;
}
