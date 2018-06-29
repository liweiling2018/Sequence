#include"Sequence.h"
#include<cstring>
#include<iostream>
#include<fstream>
#include<string>
#include <cstdlib>
#include<algorithm>
using namespace std;

Sequence::Sequence(string filename)
{
        string line;
	//读取文件
	ifstream infile;
        infile.open(filename.c_str(),ios::in);
        while(getline(infile,line))
        {
	if (!infile)
	    cerr << "error" << endl;//文件读取错误时输出“error”
        else
            dna+=line;
        }
        leng=dna.length();
}


Sequence::~Sequence()
{
}

int Sequence::length()
{ 
     return leng;
}

int Sequence:: numberOf(char base)
{
     int x;	
     string::size_type position = 0;
     while ((position = dna.find(base, position)) != dna.npos) 
     {
 	x++;
	position++;
     }
			
     return x;
}

string Sequence::longestConsecutive()
{       
	string word1 = "A", word2 = "C", word3 = "G", word4 = "T";
	while (true) 
	{
		if (dna.find(word1) != dna.npos) 
			word1 += "A";
		else
			break;
	}
	while (true) 
	{
		if (dna.find(word2) != dna.npos) 
			word2 += "C";
		else
			break;
	}
	while (true) 
	{
		if (dna.find(word3) != dna.npos) 
			word3 += "G";
		else
			break;
	}
	while (true) 
	{
		if (dna.find(word4) != dna.npos) 
			word4 += "T";
		else
			break;
	}
	string destination = "";
	int * p = new int[4];
	p[0] = word1.length();
	p[1] = word2.length();
	p[2] = word3.length();
	p[3] = word4.length();
	sort(p, p + 3);//p[3]表示最大的字符串的长度
	if (word1.length() == p[3]) 
	{
		destination = word1.substr(1);
	}
	if (word2.length() == p[3]) 
	{
		if (dna.find(word2.substr(1)) < dna.find(destination))
			destination = word2.substr(1);
	}
	if (word3.length() == p[3])
        {
		if (dna.find(word3.substr(1)) < dna.find(destination));
		destination = word3.substr(1);
	}
	if (word4.length() == p[3]) 
        {
		if (dna.find(word4.substr(1)) < dna.find(destination));
		destination = word4.substr(1);
	}
	return destination;
}

string Sequence::longestRepeated()
{
       
}

