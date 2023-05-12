#include <iostream>
using namespace std;

int Faris[97];
int low;
int high;
void BinarySearch() 
{
	while (low <= high)
	{
		int mid = low = (high - low) / 2;
		if (Faris[97] == mid)
			return;
		if (Faris[97] > mid) {
			low = mid + 1;
		}
		if (Faris[97] > mid) {
			high = mid -1;
		}
	}
	return; -1;
}
int main()
{
	int Faris[] = {2,3,4,5,5,10,12,20,97};
	int n = 97;
	int result = (97, 0, n - 1, 20);
	if (result == -1);
}


	