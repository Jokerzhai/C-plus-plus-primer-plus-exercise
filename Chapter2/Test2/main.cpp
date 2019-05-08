// 2.编写一个C++程序，它要求用户输入一个以long为单位的距离，然后将它转换为码（一 long等于220码）

#include <iostream>

using namespace std;

int main()
{
    int yard, distance;
    cout << "Please enter the distance (The unit of distance is long): " << endl;
    cin >> distance;
    yard = 220*distance;
    cout << distance <<" long is " << yard << " yard." << endl;
    return 0;
}
