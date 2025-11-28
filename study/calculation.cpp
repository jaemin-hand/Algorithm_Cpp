#include<iostream>
#include<vector>
#include<numeric>
using namespace std;
int main() {
	char name1[10];
	cout << "[정산 프로그램]" << endl;
	cout << "이름을 입력하세요 : ";
	cin >> name1;

	cout << name1 << "의 소비를 입력하세요" << endl << "다 입력하셨으면 \"끝\" 를 입력하세요\n\n";
	cout << "이름 금액  <-- 형식으로 입력하세요" << endl;
	cout << "예) 부두식당 90000" << endl;
	cout << "입력 : ";

	vector<string> f1_title_v;
	vector<int> f1_price_v;

	while (1) {
		string title;
		int price = 0;
		cin >> title;

		if (title == "끝") {
			break;
		}

		cin >> price;


		f1_title_v.push_back(title);
		f1_price_v.push_back(price);

		cout << "입력 : ";
	}


	char name2[10];
	cout << "이름을 입력하세요 : ";
	cin >> name2;

	cout << name2 << "의 소비를 입력하세요" << endl << "다 입력하셨으면 \"끝\" 를 입력하세요\n\n";
	cout << "이름 금액  <-- 형식으로 입력하세요" << endl;
	cout << "예) 부두식당 90000" << endl;
	cout << "입력 : ";
	vector<string> f2_title_v;
	vector<int> f2_price_v;

	while (1) {
		string title;
		int price = 0;
		cin >> title;

		if (title == "끝") {
			break;
		}

		cin >> price;


		f2_title_v.push_back(title);
		f2_price_v.push_back(price);

		cout << "입력 : ";
	}

	int f1_total = accumulate(f1_price_v.begin(), f1_price_v.end(), 0);
	int f2_total = accumulate(f2_price_v.begin(), f2_price_v.end(), 0);

	cout << "\n\n========================\n\n";

	cout << name1 << "의 총 소비 금액 : " << f1_total << "원\n";

	cout << name2 << "의 총 소비 금액 : " << f2_total << "원\n";

	if (f1_total > f2_total) {
		cout << name1 << "이가 " << name2 << "보다 " << f1_total - f2_total << "원 더 소비했습니다.\n";
		cout << name1 << "의 소비내역 " << endl;
		for (int i = 0; i < f1_title_v.size(); i++) {
			cout << " [" << f1_title_v[i] << " " << f1_price_v[i] << "] ";
			if (i + 1 != f1_title_v.size()) {
				cout << "+";
			}
		}
		cout << " = " << f1_total << "/ 2" << endl;
		cout << f1_total / 2 << " - " << f2_total / 2 << endl;
		cout << " = " << (f1_total / 2) - (f2_total / 2) << endl;
		cout << name2 << "이가 " << name1 << "에게 " << (f1_total / 2) - (f2_total / 2) << "원을 보내세요" << endl;

	}
	else if (f1_total < f2_total) {
		cout << name2 << "이가 " << name1 << "보다 " << f2_total - f1_total << "원 더 소비했습니다.\n";
		for (int i = 0; i < f1_title_v.size(); i++) {
			cout << " [" << f1_title_v[i] << " " << f1_price_v[i] << "] ";
			if (i + 1 != f1_title_v.size()) {
				cout << "+";
			}
		}
		cout << " = " << f2_total << "/ 2" << endl;
		cout << f2_total / 2 << " - " << f1_total / 2 << endl;
		cout << " = " << (f2_total / 2) - (f1_total / 2) << endl;
		cout << name1 << "이가 " << name2 << "에게" << (f2_total / 2) - (f1_total / 2) << "원을 보내세요" << endl;
	}



	return 0;
}