/*7.编写一个程序，要求用户输入小时数和分钟数。在main()函数中，将这两个值传递给一个void函数，后者以下面这样的格式显示这两个值:
Enter the number of hours:9
Enter the number of minutes:28
Time:9:28
*/

#include <iostream>

using namespace std;

void Time(int h, int m);
int main()
{
    int hours,minutes;
    cout << "Enter the number of hours: " ;
    cin >> hours;
    cout << "Enter the number of minutes: ";
    cin >> minutes;
    cout << "Time: ";
    Time(hours,minutes);
    return 0;
}
void Time(int h, int m)
{
    cout << h << ":" << m;
}
