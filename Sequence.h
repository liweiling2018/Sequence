#ifndef SEQUENCE_H
#define SEQUENCE_H
#include<string>
using namespace std;

class Sequence
{
private:
   int leng;
   string  dna;
public:
   Sequence(string filename);//构造函数，只接受一个文件名为参数
   ~Sequence();
   int length();//获得序列的长度，注意要把回车符去掉
   int numberOf(char base);//获得某种核苷酸的个数，参数类型为char
   string longestConsecutive();//获得最长的连续的碱基序列，相同取前面
   string longestRepeated();//如果不同位置出现相同序列
};
#endif
