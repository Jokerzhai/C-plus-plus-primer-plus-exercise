// 3.��дһ��C++������ʹ��3���û�����ĺ���������main()��������������������
// Three blind mice
// Three blind mice
// So how they run
// So how they run
// ����һ������Ҫ�������Σ��ú����������У�����һ������Ҳ���������Σ�����������������

#include <iostream>

using namespace std;

void OutputOneLine();
void OutputTheLastLine();
int main()
{
    // cout << OutputOneLine() << endl; //����cout ��printf��ͬ��coutֻ���������ֵ�򷵻�ֵ���������void
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
