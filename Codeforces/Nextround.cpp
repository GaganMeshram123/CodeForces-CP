#include <iostream>

using namespace std;

int main() {
    int n, k;
    cin >> n >> k; 
    int advanced_count = 0;  
    int scores[n];  
     for (int i = 0; i < n; ++i) {
        cin >> scores[i];  

        // Check if the participant earns a positive score and meets the advancement criteria
        if (scores[i] > 0 && i < k) {
            advanced_count++;
        }
        // If the participant has a score less than or equal to the k-th place finisher,
        // stop checking since the scores are non-increasing.
        else if (scores[i] <= 0) {
            break;
        }
    }
    cout << advanced_count << endl; 

    return 0;
}
