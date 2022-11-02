#pragma once

using namespace std;

#include "Midterm.h"

class EasyMidterm : public Midterm {
	public:
		EasyMidterm(string name, int score): Midterm(name, score) 
		{ }

		int getScore() {
			return 100;
		}
};