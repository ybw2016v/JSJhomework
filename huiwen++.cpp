#include<iostream>              // 库文件，定义了cout和cin。
#include<cstring>  // 定义了strlen。
using namespace std;            // 使用命名空间。
int main() {                    // 定义主函数。
  cout << "作者邮箱：ybw2016v@gmail.com\n"; // 输出作者邮箱。
  int cat, dog, pig;            // 定义整型变量。
  char egg[100];                // 定义字符串变量。
  char fly[20];                 // 定义字符串变量。
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
  cout << "程序已结束，生活愉快！\n";
  cout << "请访问github.com/ybw2016v";
  cout << "获取更多信息。";
  return 0;
}