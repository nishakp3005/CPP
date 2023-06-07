#include <iostream>
#include <unordered_map>
#include <vector>

int minimumOperations(std::vector<int>& array) {
    std::unordered_map<int, int> frequency;
    for (int element : array) {
        frequency[element]++;
    }

    int maxFrequency = 0;
    for (auto it = frequency.begin(); it != frequency.end(); ++it) {
        maxFrequency = std::max(maxFrequency, it->second);
    }

    int operations = array.size() - maxFrequency;
	std::cout<<operations;
    return operations;
}

int main() {
	int a, n, t;
	std::cin>>t;
	while(t--){
		std::cin>>n;
		std::vector<int> array(n) ;
		for (int i = 0; i < n; i++){
			std::cin>>a;
			array.push_back(a);
		}
		minimumOperations(array);
		// std::cout << minOps << std::endl;
	}
    return 0;
}
