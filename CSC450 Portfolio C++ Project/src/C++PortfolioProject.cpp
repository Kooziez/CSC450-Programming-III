/*
 * C++PortfolioProject.cpp
 *
 *  Created on: Mar 21, 2026
 *      Author: Cody Ihle
 */
#include <iostream>
#include <thread>

using namespace std;

//Function that counts up to 20
void countingUp () {
	cout << "Counting Up to 20:" << endl;
	for (int i = 0; i <= 20; i++) {
		cout << i;
		if (i != 20) {
			cout << ", ";
		}

	}
	cout << endl;

}
//Function that counts down to 0
void countingDown () {
	cout << "Counting Down from 20:" << endl;
	for (int i = 20; i >= 0; i--) {
		cout << i;
		if (i != 0) {
			cout << ", ";
		}
	}
	cout << endl;
}

int main () {
	//Thread 1 counting up
	thread t1(countingUp);
	t1.join();
	//Thread 2 counting down
	thread t2(countingDown);
	t2.join();

	return 0;
}



