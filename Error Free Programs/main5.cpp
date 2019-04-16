#include <iostream>
#include <vector>
     
     using namespace std;
     
     int main(int argc, char **argv)
     {
     	vector<int> v;
     	int sum, num;
     	
     	do {
     		cout << "Enter a number" << endl;
     		cin >> num;
     		if (num != 0)
     			v.push_back(num);
     	} while (num != 0);
     	
     	while(!v.empty()) {
     		num = v.back();
     		sum += num;
     		v.pop_back();
     		cout << num << ". Percentage: " << num * 100 / sum << endl;
     	}
     	
     	cout << "Sum: " << sum << endl;
     	
     	return 0;
     }

