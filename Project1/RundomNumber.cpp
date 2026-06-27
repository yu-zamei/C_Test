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
	while (true) {
		std::cout << "4‚Â‚Ì”Žš:";
		for (int i = 0; i < 4; i++) {
			std::cout << answer[i] << "";
		}
		std::cout << std::endl;

		int guess[4];
		std::cout << "”Žš‚ð“ü—Í" << std::endl;

		for (int i = 0; i < 4; i++) {
			std::cout << i + 1 << "‚Â–Ú‚Ì”Žš:";
			std::cin >> guess[i];
		}
		std::cout << "”Žš:";
		for (int i = 0; i < 4; i++) {
			std::cout << guess[i] << " ";
		}
		std::cout << std::endl;

		int hit = 0;
		int blow = 0;

		for (int i = 0; i < 4; i++) {
			for (int j = 0; j < 4; j++) {
				if (guess[i] = answer[j]) {
					if (i == j) {
						hit++;
					}
					else {
						blow++;
					}
				}
				std::cout << "ƒqƒbƒg:" << hit << "@‚Â" << std::endl;
				std::cout << "ƒuƒ[:" << blow << "@‚Â" << std::endl;

				if (hit == 4) {
					std::cout << "ƒqƒbƒg‚Æ‚È‚é‚Ü‚ÅŒJ‚è•Ô‚·" << std::endl;
					break;
				}
				std::cout << "‚Q‚©‚ç‚U‚ðŒJ‚è•Ô‚·" << std::endl;
			}
		}

		return 0;
	}
}