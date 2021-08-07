#ifndef FUN_MONEY
#define FUN_MONEY

#include <iostream>
#include <fstream>
#include <vector>
#include <string>

typedef std::string str;
typedef std::vector<str> s_list;

class Money
{
  private:

    // file address for storing your numbers:
    str file = "~/.local/share/money/db";

    //
    s_list numbers;

  public:

    s_list get()
    {
      system(str("touch " + this->file).c_str());

      std::vector<std::string> numbers;
      std::ifstream f(this->file);

      str tmp;
      while (f >> tmp)
      {
        this->numbers.push_back(tmp);
      }
      return numbers;

      // with open(file) as f
      // {
        // return [i for i in f.read().split()]
      // }
    }

    void set()
    {
      for (auto i : this->numbers)
        system(str("echo " + i + "' ' >> " + file).c_str());
    }

    void load()
    {
      for (auto i : this->numbers)
        system(str("echo " + i + "' ' >> " + file).c_str());
    }

    void del()
    {
    }

    void echo()
    {
      // print(list);
    }


    void bash()
    {
      // while (true)
      // {
        // str text = input()

        // this->_history(text);
      // }
    }

  private:

    void _history(str text, str file = "~/.local/share/money/$_history")
    {
      system("echo {text} >> {file}");
    }
};

#endif // FUN_MONEY




// 200 200 200 100 100 200 50


