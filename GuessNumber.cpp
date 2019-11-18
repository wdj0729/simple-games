#include<iostream>
#include <random>
using namespace std;

//난수 1~100 생성
int getRandomNumber() {
	random_device rn;
	mt19937_64 rnd(rn());

	uniform_int_distribution<int> range(1, 100);

	return range(rnd);
}

int main() {
	int answer = getRandomNumber(); //정답

	cout << "1~100 사이의 랜덤한 숫자를 7번 안에 맞혀보세요!" << "\n";
	cout << "힌트는 정답보다 높은 숫자 혹은 낮은 숫자인지 알려드립니다!" << "\n";

	for (int i = 0; i < 7; i++) {
		cout << "숫자를 말해주세요: ";
		int num;
		cin >> num;

		if (num == answer) {
			cout << "대단하네요. 정답입니다!";
			return 0;
		}
		else {
			if (num < answer) {
				cout << "더 높은 숫자입니다!" << '\n';
			}
			else {
				cout << "더 낮은 숫자입니다!" << '\n';
			}
		}
	}

	cout << "안타깝게도 못 맞추셨네요. 다음에 또 도전하세요!";

	return 0;
}