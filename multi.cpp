/*
 * multi.cpp
 *
 *  Created on: 19-May-2020
 *      Author: nitin
 */

#include<iostream>
#include<set>
using namespace std;

int main(void)
{
	set <int> s;
	for(int i=0;i<10;i++){
		s.insert(10*i);
	}
	for(set <int>::iterator d=s.begin();d!=s.end();)
	{
		cout<<*d<<endl;
		d++;
	}

	return 1;
}


