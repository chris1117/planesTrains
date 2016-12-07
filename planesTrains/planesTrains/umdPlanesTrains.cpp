/*
Name: Eranus Thompson
Description: A class that loads air planes and trains from containers
that have been unloaded from ships
*/

#ifndef planesTrains_H
#define planesTrains_H

#include <iostream>
#include <iomanip>
#include <stack>
#include <queue>

using namespace std;

const int MAX = 5;

class Dock {

public:
	Dock() {

		items = 0;
	}

	void unloadShip() {

	}

	int getItems() {

		return items;
	}

private:
	int items;

};

class Trains {

public:
	Trains() {

	}

	void loadTrains() {

	}
private:
	int items;
};

class Planes {

public:
	Planes() {

	}

	void loadPlanes() {

	}

private:
	int items;

};

class Transport { //for workers and also to calculate time

public:
	Transport() {

	}

	void move2Train() {

	}

	void move2Plane() {

	}

private:


};

int main() {


}

#endif