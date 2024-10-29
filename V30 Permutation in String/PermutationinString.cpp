//leetcode q1910
#include <iostream>
#include <string>

void remvAllocc(std::string st, std::string subst){
    while (st.length()>0 && st.find(subst)<st.length()) 
    //original string must be greater than 0 in length AND
    //finds the subst's length and confirms it's lesser in length then the larger string
    {
        st.erase(st.find(subst), subst.length());
    }
    std::cout<<st;
}

int main(){
    std::string st="daabcbaabcbc";
    std::string subst="abc";

    remvAllocc(st,subst);

    return 0;
}