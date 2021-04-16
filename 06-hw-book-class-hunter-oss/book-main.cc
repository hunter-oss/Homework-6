/**
 *   @file: book-main.cc
 * @author: Hunter Douglas
 *   @date: April 15th 2021
 *  @brief: Using classes to organize books
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include "book.h"
using namespace std;

///function prototypes

int main(int argc, char const *argv[]) {
	
	book b("The Hitcher Guide to the Galaxy|1979|Douglas adams");
	cout<<b.toString()<<endl;
	cout<<"matchTitle "<<b.matchTitle("jdijd");
	cout<<"\nMatch Author "<<b.matchAuthor("Douglas adams")<<endl;
	cout<<"Match: "<<b.match("97");

	return 0;
}/// main