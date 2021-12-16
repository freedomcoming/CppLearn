#include <cstring>
#include <iostream>

using namespace std;
void printBook (struct Books book);

struct Books
{
  char title[50] ; 
  char author[50];
  char subject[100];
  int book_id;
  // int book_id : 4;// :int 位字段  低级编程 硬件编程
} structValue;

int
main ()
{
  Books Book1;
  Books Book2;

  Books Book3{ "test", "test", "test", 100 };
  printBook (Book3);

  Books structValue = { "test1", "test1", "test1", 1100 };
  printBook (structValue);
  strcpy (Book1.title, "1CCC");
  strcpy (Book1.author, "1Runoob");
  strcpy (Book1.subject, "123");
  Book1.book_id = 12345;

  // Book2
  strcpy (Book2.title, "CSS");
  strcpy (Book2.author, "Runoob");
  strcpy (Book2.subject, "222");
  Book2.book_id = 12346;

  // Book1
  printBook (Book1);

  // Book2
  printBook (Book2);

  //   结构体数组和数组初始化
  Books book[10]
      = { { "test", "test", "test", 100 }, { "test", "test", "test", 100 } };

  printBook (book[0]);

  return 0;
}
void
printBook (struct Books book)
{
  cout << book.title << endl;
  cout << book.author << endl;
  cout << book.subject << endl;
  cout << book.book_id << endl;
}