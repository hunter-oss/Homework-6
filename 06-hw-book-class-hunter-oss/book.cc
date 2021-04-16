/**
 *   @file: book-main.cc
 * @author: Hunter Douglas
 *   @date: April 15th 2021
 *  @brief: Using classes to organize books
 */

#include "book.h"
#include <string.h>
#include <stdio.h>

book::book(){
    title="***";
    year=0;
    author="***";
}
book::book(string newTitle, int newYear, string newAuthor){
    if(!newTitle.empty()){
    title=newTitle;
}
else{
    title="***";
}
if(year<0){
    year=0;
}
else{
    year=newYear;
}
    author=newAuthor;
}
book::book(string allData){
    char str[1024];
    strcpy(str, allData.c_str());
    char *val = strtok(str, "|");
    int i=0;
    while (val!= NULL){
    if(i==0){
        title=val;
    }
    else if(i==1){
        year=stoi(val);
    }
    else{
        author=val;
    }
    val = strtok(NULL, "|");
    i++;
    }
}
void book::setTitle(string t){
    title=t;
}
void book::setYear(int y){
    year=y;
}
void book::setAuthor(int a){
    author=a;
}
string book::getTitle(){
    return title;
}
int book::getYear(){
    return year;
}
string book::getAuthor(){
    return author;
}
string book:: toString(){
    return title+"|"+to_string(year)+"|"+author;
}
bool book::operator==(book &b1){
    if(b1.getTitle()!=getTitle() && b1.getYear()!=getYear() && b1.getAuthor()!=getAuthor()){
        return false;
    }
    else{
        return true;
    }
}
bool book::matchTitle(string targetTitle){
    if(title.compare(targetTitle)==0){
        return true;
    }
    return false;
}
bool book::matchAuthor(string targetAuthor){
    if(author.compare(targetAuthor)==0){
        return true;
    }
    return false;
}
bool book::matchYear(string targetYear){
    if(year==stoi(targetYear)){
        return true;
    }
    return false;
}
bool book::match(string target){
    size_t found = toString().find(target);
    if (found != string::npos){
        return true;
    }
    return false;
}