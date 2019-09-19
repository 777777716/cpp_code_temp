#include<iostream>
#include<string>
using namespace std;

string NumToPrint[10][3] = {
    " _ ",
    "| |",
    "|_|",

    "   ",
    "  |",
    "  |",

    " _ ",
    " _|",
    "|_ ",

    " _ ",
    " _|",
    " _|",

    "   ",
    "|_|",
    "  |",

    " _ ",
    "|_ ",
    " _|",

    " _ ",
    "|_ ",
    "|_|",

    " _ ",
    "| |",
    "  |",

    " _ ",
    "|_|",
    "|_|",

    " _ ",
    "|_|",
    " _|",
};

int get_num_count(int num)
{
	int count = 0;
	do{
	    count ++;
        num /= 10;
	}
	while(num > 0);

	return count;
}

int main()
{
	int num;
	cout << "请输入一个整数：" << endl;
	cin >> num;

    int count = get_num_count(num);

	int nums[count];
	for(int i = count - 1; i >= 0; i--)
    {
        nums[i] = num % 10;
        num /= 10;
    }

    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < count; j++)
        {
            cout << NumToPrint[nums[j]][i];
        }
        cout << endl;
    }

	return 0;
}
