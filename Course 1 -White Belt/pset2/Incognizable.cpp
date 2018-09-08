#include <iostream>
#include <vector>

using namespace std;

class Incognizable {
public:
    Incognizable() {};
    Incognizable(int i) {
        nums.push_back(i);
    }
    Incognizable(int i, int j) {
        nums.push_back(i);
        nums.push_back(j);
    }
    void GetIncognizable() const {
        for (const int& i : nums) cout << i << ' ';
        cout << endl;
    }
private:
    vector<int> nums;
};

int main() {
  Incognizable a;
  Incognizable b = {};
  Incognizable c = {0};
  Incognizable d = {0, 1};

  a.GetIncognizable();
  b.GetIncognizable();
  c.GetIncognizable();
  d.GetIncognizable();
  return 0;
}
