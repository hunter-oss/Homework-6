# Created by: Nasseef Abukamail
# This Makefile will run tests for the book class
# The tests will run automatically GitHub Actions
# This is to test continuous integration (CI).
# Usage for Mac and Windows:
#    make run_tests_macs 
#    mingw32-make run_tests_win
#
#Variables
CC = g++
CFLAGS = -g -Wall -std=c++11

# Linking all the files and run the tests. Use your own header and
# object files.

a.out: book.o book.h book-main.o
	$(CC) $(CFLAGS) _TEST/book.o _TEST/book-main.o -o a.out

book.o: book.cc book.h
	$(CC) -c $(CFLAGS) book.cc -o _TEST/book.o

book-main.o: book-main.cc book.h
	$(CC) -c $(CFLAGS) book-main.cc -o _TEST/book-main.o

######################################## R U N   T E S T s ##################################################
run_tests_mac: 
	head book.cc
	$(CC) $(CFLAGS) _TEST/TEST_cases.cc book.cc -o _TEST/run_tests ; _TEST/run_tests -sr compact

run_tests_win: 
	$(CC) $(CFLAGS) _TEST/TEST_cases.cc book.cc -o _TEST/run_tests
	_TEST/run_tests -sr compact
##############################################################################################################

clean:
	rm -rf _TEST/*.o _TEST/run_tests a.out