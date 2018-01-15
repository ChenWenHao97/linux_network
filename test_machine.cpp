/*************************************************************************
	> File Name: test_machine.cpp
	> Author: 
	> Mail: 
	> Created Time: 2017年12月27日 星期三 21时16分30秒
 ************************************************************************/

#include<iostream>
#include<cstring>
using namespace std;
void byteorder();
int main()
{
    byteorder();

    return 0;
}
void byteorder()
{
    union{
        short value;
        char union_bytes[sizeof(short)];
    }test;
    test.value = 0x0102;
    if((test.union_bytes[0]==1)&&test.union_bytes[1]==2)
        cout <<"big endian"<<endl;
    else if((test.union_bytes[0]==2)&&(test.union_bytes[1])==1)
        cout <<"little endian"<<endl;
    else 
        cout <<"unkonwn"<<endl;

}
