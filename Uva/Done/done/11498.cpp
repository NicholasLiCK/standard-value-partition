#include <iostream>

using namespace std;

int main()
{
    int t=0,px, py, x, y;
    cin>>t;
    while (t>0)
    {
        cin >> px >> py;

		while (t--) {
			cin >> x >> y;

			if (x == px || y == py)
				cout << "divisa";
			else if (x < px && y > py)
				cout << "NO";
			else if (x > px && y > py)
				cout << "NE";
			else if (x > px && y < py)
				cout << "SE";
			else if (x < px && y < py)
				cout << "SO";
			cout << endl;

		}

		cin>>t;
    }
    return 0;
}
