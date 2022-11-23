#include <iostream>

int main()
{
	int mark;
	std::cout <<"请你为《肖申克的救赎》这部电影打分（只能输入数字1~9）:"<<std::endl;
    std::cin>>mark;
	std::cout << "你为《肖申克的救赎》电影的评价为：此处有"<< mark << "个*" << std::endl;
	return 0;
}