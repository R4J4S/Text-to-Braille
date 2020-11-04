//Stores the Alphabets and their Braille substitutes.
#ifndef LETTERSTOBRAILLE_H
#define LETTERSTOBRAILLE_H

#include <map>

extern std::map<char, std::string> letters
{
           {'.',"⠠"},//both of the "." are different
           {' '," "},
           {'a', "⠁"},
           {'b', "⠃"},
           {'c', "⠉"},
           {'d', "⠙"},
           {'e', "⠑"},
           {'f', "⠋"},
           {'g', "⠛"},
           {'h', "⠓"},
           {'i', "⠊"},
           {'j', "⠚"},
           {'k', "⠅"},
           {'l', "⠇"},
           {'m', "⠍"},
           {'n', "⠝"},
           {'o', "⠕"},
           {'p', "⠏"},
           {'q', "⠟"},
           {'r', "⠗"},
           {'s', "⠎"},
           {'t', "⠞"},
           {'u', "⠥"},
           {'v', "⠧"},
           {'w', "⠺"},
           {'x', "⠭"},
           {'y', "⠽"},
           {'z', "⠵"}
};

extern std::map<char,std::string> numbers
{
           {'1', "⠁"},
           {'2', "⠃"},
           {'3', "⠉"},
           {'4', "⠙"},
           {'5', "⠑"},
           {'6', "⠋"},
           {'7', "⠛"},
           {'8', "⠓"},
           {'9', "⠊"},
           {'0', "⠚"}
};

extern std::map<char,std::string> punctuation
{
               {',', "⠂"},
               {';', "⠆"},
               {':', "⠒"},
               {'!', "⠖"},
               {'(', "⠐⠣"},
               {')', "⠐⠜"},
               {'\"',"⠘⠦"},
               {'?', "⠦"},
               {'/', "⠸⠌"},
               {'#', "⠼"},
               {'\'', "⠸⠡"},
               {'\'', "⠄⠴"},
               {'-',"⠤"}, //hyphen
               {'–',"⠠⠤"},//en dash
               {'—',"⠐⠠⠤"},//em dash
};

#endif