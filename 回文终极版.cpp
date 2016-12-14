#include<iostream>
#include<string>
using namespace std;
int main() {
  cout << "作者邮箱：yubowen@mail.sdu.edu.cn\n";
  int cat, dog, pig;

  char egg[100];
  char fly[20];
  fly[0] = 'y';
  fly[1] = '\0';
  while (fly[0] == 'y' && fly[1] == '\0') {
    cout << "请输入字符串。" << endl;
    pig = 0;
    cin >> egg;
    cat = strlen(egg);
    dog = 0;
    while (dog < cat) {
      // cout<<egg[dog]<<egg[cat-dog-1]<<endl;
      if (egg[dog] == egg[cat - dog - 1]);
      else {
        pig = 1;
        break;
      }
      dog++;
    }
    if (pig == 1)
      cout << "不是回文字符串。" << endl;
    else
      cout << "是回文字符串。" << endl;
    cout << "是否继续运行？（y/n)" << endl;
    cin >> fly;
  }
  return 0;
}