/*Static Members*/
#include <iostream>
using namespace std;
class Topics {
public:
  static int total;
  // static function
  static void topics_covered() {
    cout << "Total topics covered:" << total << endl;
  }
};
int Topics::total = 7;
int main() {
  Topics t1;
  t1.topics_covered();//using object
  Topics::topics_covered();//using class
  return 0;
}