#include <iostream>
#include <stack>
#include <string>

using namespace std;

struct Bracket {
    Bracket(char type, int position):
    type(type),
    position(position)
    {}

    bool Matchc(char c) {
        if (type == '[' && c == ']')
            return true;
        if (type == '{' && c == '}')
            return true;
        if (type == '(' && c == ')')
            return true;
        return false;
    }

    char type;
    int position;
};


class Solution {
public:
    bool isValid(string text) {
        std::stack <Bracket> opening_brackets_stack;
        for (int position = 0; position < text.length(); ++position) {
            char next = text[position];
            if (next == '(' || next == '[' || next == '{') {
                opening_brackets_stack.push(Bracket(next, position + 1));
            }

            if (next == ')' || next == ']' || next == '}') {
                if (opening_brackets_stack.empty()) {
                    opening_brackets_stack.push(Bracket(next, position + 1));
                    break;
                }
                Bracket bracket = opening_brackets_stack.top();
                if (bracket.Matchc(next)) {
                    opening_brackets_stack.pop();
                } else {
                    opening_brackets_stack.push(Bracket(next, position + 1));
                    break;
                }
            }
        }
        if (opening_brackets_stack.empty()){
            cout <<"Success"<<endl;
            return true;
        }
        else
         cout <<" Not sucess "<<endl;
         return false;

        return false;
    }
};

int main(){
    // Case 1: 
     string s1 = "[]";

     //Case 2:
     string s2 = "{}[]";

     // case 3 
     string s3 = "[()]";

     // case 4
     string s4 = "(())";

     //case 5
     string s5 ="{[]}()";

     //Case 6
     string s6 = "{";

     //case 7:
     string s7 = "{[}";

     //case 8:
     string s8 = "foo(bar)";
    Solution sol;
    bool b = sol.isValid(s2);

    cout << "it is: " << b << endl;


    return 0;
}