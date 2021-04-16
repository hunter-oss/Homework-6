/**
 *   @file: book-main.cc
 * @author: Hunter Douglas
 *   @date: April 15th 2021
 *  @brief: Using classes to organize books
 */

#include <iostream>
#include <string>
#include <stdio.h>
using namespace std;

class book
{
    private:
    string title;
    int year;
    string author;
    public:
    book();
    book(string newTitle, int newYear, string newAuthor);
    book(string allData);
    void setTitle(string t);
    void setYear(int y);
    void setAuthor(int a);
    string getTitle();
    int getYear();
    string getAuthor();
    string toString();
    bool operator==(book &);
    bool matchTitle(string targetTitle);
    bool matchAuthor(string targetAuthor);
    bool matchYear(string targetYear);
    bool match(string target);
};