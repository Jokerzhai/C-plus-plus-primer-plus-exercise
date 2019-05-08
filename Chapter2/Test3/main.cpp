// 3.编写一个C++程序，它使用3个用户定义的函数（包括main()），并生成下面的输出：
// Three blind mice
// Three blind mice
// So how they run
// So how they run
// 其中一个函数要调用两次，该函数生成两行；另外一个函数也被调用两次，并生成其余的输出。

#include <iostream>

using namespace std;

void OutputOneLine();
void OutputTheLastLine();
int main()
{
    // cout << OutputOneLine() << endl; //错误，cout 与printf不同，cout只能输出变量值或返回值，不能输出void
    OutputOneLine();
    OutputOneLine();
    OutputTheLastLine();
    OutputTheLastLine();
    return 0;
}
void OutputOneLine()
{
    cout << "Three blind mice" << endl;
}

void OutputTheLastLine()
{
    cout << "So how they run" << endl;
}
