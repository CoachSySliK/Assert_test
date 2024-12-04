#include <iostream>
#include <cassert>

using namespace std;

float travelTime(float distance, float speed) {
	assert(speed > 0);
	return distance / speed;
}

int main(void)
{
	cout << "Enter distance: ";
	float distance;
	cin >> distance;
	
	cout << "Enter speed: ";
	float speed;
	cin >> speed;
	
	cout << travelTime(distance, speed);
	
	return 0;
}