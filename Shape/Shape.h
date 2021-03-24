#pragma once
using namespace std;
class Shape
{
private:
	int firstSide;
	int secondSide;
	int thirdSide;
	int height;

public:
	Shape(int firstSide, int secondSide, int thirdSide, int height) {
		this->firstSide = firstSide;
		this->secondSide = secondSide;
		this->thirdSide = thirdSide;
		this->height = height;
	}

	Shape(int height) {
		this->height = height;
	}



public:
	void firstSideSet(int firstSide)
	{
		this->firstSide = firstSide;
	};

	int firstSideGet() {
		return this->firstSide;
	}

	void secondSideSet(int secondSide)
	{
		this->secondSide = secondSide;
	};

	int secondSideGet() {
		return this->secondSide;
	}

	void thirdSideSet(int firstSide)
	{
		this->thirdSide = thirdSide;
	};

	int thirdSideGet() {
		return this->thirdSide;
	}

	void heightSet(int height)
	{
		this->height = height;
	};

	int heightGet() {
		return this->height;
	}


	double triangleSquareGet() {
		return (secondSideGet() / 2) * heightGet();
	}

	int trianglePerimetrGet() {
		return firstSideGet() + secondSideGet() + thirdSideGet();
	}

	double circleSquareGet() {
		return 3.14 * (heightGet() / 2) * (heightGet() / 2);
	}
	double circleLengthGet() {
		return 2 * 3.14 * (heightGet() / 2);
	}
};

