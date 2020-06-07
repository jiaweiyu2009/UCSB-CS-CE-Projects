#include <iostream>
#include <fstream>
#include <string>
#include <ctime>
#include <vector>
#include <cstring>
#include <algorithm>
#include <sstream>
#include <queue>
#include "avl.h"

using namespace std;
int FirstSpace(string b, string x){
for(size_t i = 0; i < b.length(); i++) {
    if (b.substr(i, x.length()) == x){
         return i;
}
}
}

int main(){
fstream file;
string word, filename;
AVL avl;
/*
filename = "small.txt";
//filename = "/autograder/submission/PA1_dataset.txt";
file.open(filename.c_str());
while (file >>word){

avl.insert(avl.root, word);

}
*/

avl.insert(avl.root,"10");

avl.insert(avl.root,"20");
avl.insert(avl.root,"30");
avl.insert(avl.root,"40");
avl.insert(avl.root,"50");

avl.insert(avl.root,"25");
avl.preOrder(avl.root);

return 0;
}
