#include<iostream>
#include<iomanip>
#include<string>
using namespace std;
int main(int argc, char**argv) {
	string str = "高德纳 美国 计算机科学家 计算机程序设计艺术";
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
	cout << "名字: " << result[0] << endl;
	cout<<"国籍: " << result[1] << endl;
	cout<<"职业: " << result[2] << endl;
	cout<<"代表作: " << result[3] << endl;
	str_temp.swap(result[0]);
	for (int i = 1; i < 4; i++)
	{
		str_temp += " ";
		str_temp.append(result[i]);
	}
	int equal = str.compare(str_temp);
	if (equal==0)
	{
		cout << "匹配成功" << endl;
	}
	else
	{
		cout<< "匹配不成功" << endl;
	}
	system("pause");
	return 0;
}