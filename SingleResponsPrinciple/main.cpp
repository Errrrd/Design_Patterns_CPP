#include <iostream>
#include <fstream>
#include <string>
#include <vector>

#include <boost/lexical_cast.hpp>

using namespace std;

struct Journal
{
  string title;
  vector<string> entries;

  explicit Journal(const string& title)
    : title{title}
  {
  }

  void add_entry(const string& entry);

  // persistence is a separate concern - remove it
  // void save(const string& filename);
};

void Journal::add_entry(const string& entry)
{
  static int count = 1;
  entries.push_back(boost::lexical_cast<string>(count++)
    + ": " + entry);
}

// persistence is a separate concern - remove it
/*
void Journal::save(const string& filename)
{
  ofstream ofs(filename);
  for (auto& s : entries)
    ofs << s << endl;
}
*/

// PersistenceManager stored information from all "Journals"
struct PersistenceManager
{
  static void save(const Journal& j, const string& filename)
  {
    ofstream ofs(filename);
    for (auto& s : j.entries)
      ofs << s << endl;
  }
};

int main(int, char**)
{
  Journal journal{"Dear Diary"};
  journal.add_entry("I ate a bug");
  journal.add_entry("I cried today");

  //journal.save("diary.txt");

  PersistenceManager pm;
  pm.save(journal, "diary.txt");
  
  getchar();
  return 0;
}
