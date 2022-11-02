#pragma once

using namespace std;

#include <string>

class Midterm {
	private:
		string name;
		int score;

	public:
		Midterm(string name, int score) {
			this->name = name;
			this->score = score;
		}

		string getName() {
			return this->name;
		}

		virtual int getScore() {
			return this->score;
		}

		void setName(string name) {
			this->name = name;
		}

		void setScore(int score) {
			this->score = score;
		}
};