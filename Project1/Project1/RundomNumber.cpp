#include<cstdlib>
#include<ctime>
#include<iostream>


int main() {
	srand(time(0));

	int answer[4];
	for (int i = 0; i < 4; i++) {
		while (true) {
			int candidate = rand() % 10;

			bool already_used = false;
			for (int j = 0; j < i; j++) {
				if (answer[j] == candidate) {
					already_used = true;
					break;
				}
			}
			if (!already_used) {
				answer[i] = candidate;
				break;
			}
		}
	}
//	std::cout << "隠す:";
	//for (int i = 0; i < 4; i++) {
		//std::cout << answer[1] << " ";
	//}
	//std::cout < , "\n\n"; 文字が隠れません????????????
	while (true) {
		std::cout << "4つの数字:";
		for (int i = 0; i < 4; i++) {
			std::cout << answer[i] << "";
		}
		std::cout << std::endl;

		int guess[4];//入力受付
		std::cout << "数字を入力" << std::endl;

		for (int i = 0; i < 4; i++) {
			std::cout << i + 1 << "つ目の数字:";
			std::cin >> guess[i];
		}
		std::cout << "数字:";
		for (int i = 0; i < 4; i++) {
			std::cout << guess[i] << " ";
		}
		std::cout << std::endl;

		int hit = 0;
		int blow = 0;

		for (int i = 0; i < 4; i++) {//取り出す
			for (int j = 0; j < 4; j++) {//取り出す
				if (guess[i] = answer[j]) {
					if (i == j) {
						hit++;//一つカウント
					}
					else {
						blow++;//一つカウント
					}
				}
				std::cout << "ヒット:" << hit << "　つ" << std::endl;//ヒット数える
				std::cout << "ブロー:" << blow << "　つ" << std::endl;//ブロー数える

				if (hit == 16) {
					std::cout << "ヒットとなるまで繰り返す" << std::endl;
					break;//ループ解除
				}
				std::cout << "２から６を繰り返す" << std::endl;//"ループする"
			}

		}

		return 0;
	}
}