#include<iostream>
#include<iomanip>
#include<string>
using namespace std;
int main(int argc, char**argv) {
	string str = "�ߵ��� ���� �������ѧ�� ����������������";
	string str_temp = "";
	str_temp.assign(str);
	string result[4] = { " "," "," "," " };
	int position = 0;
	for (int i = 0; i < 3; i++)
	{
		position = str_temp.find(" ");
		result[i] = str_temp.substr(0, position);
		str_temp = str_temp.substr(position + 1,str_temp.length()-position);
	}
	result[3] = str_temp;
	cout << "����: " << result[0] << endl;
	cout<<"����: " << result[1] << endl;
	cout<<"ְҵ: " << result[2] << endl;
	cout<<"������: " << result[3] << endl;
	str_temp.swap(result[0]);
	for (int i = 1; i < 4; i++)
	{
		str_temp += " ";
		str_temp.append(result[i]);
	}
	int equal = str.compare(str_temp);
	if (equal==0)
	{
		cout << "ƥ��ɹ�" << endl;
	}
	else
	{
		cout<< "ƥ�䲻�ɹ�" << endl;
	}
	system("pause");
	return 0;
}