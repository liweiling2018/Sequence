#include<iostream>
#include"Sequence.h"

using namespace std;

int main()
{
        Sequence m("dna.txt");

	//输出该段dna的长度
	cout << "DNA的序列数量为：" <<m.length()<<endl;

	//输出dna中各个碱基的数目
        cout<<"碱基A" << m.numberOf('A') << endl;
        cout<<"碱基C" << m.numberOf('C') << endl;
        cout<<"碱基T" << m.numberOf('T') << endl;
        cout<<"碱基G" << m.numberOf('G') << endl;

        //输出dna中连续最长数目的碱基
	cout << "连续最长数目的碱基为";
	cout << m.longestConsecutive() << endl;

	return 0;
}

