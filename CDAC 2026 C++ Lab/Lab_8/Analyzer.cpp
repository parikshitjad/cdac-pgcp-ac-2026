#include <iostream>
using namespace std;

class Analyzer {
private:
    int *arr;
    int n;

public:
    void accept() {
        cout << "Enter number of elements: ";
        cin >> n;

        arr = new int[n];   // dynamic allocation

        cout << "Enter " << n << " numbers:";
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
    }

    void analyze() {
        int max = arr[0];
        int min = arr[0];
        int sum = 0;

        for (int i = 0; i < n; i++) {
            if (arr[i] > max)
                max = arr[i];

            if (arr[i] < min)
                min = arr[i];

            sum += arr[i];
        }

        double avg = (double)sum / n;

        cout << "Maximum: " << max << endl;
        cout << "Minimum: " << min << endl;
        cout << "Average: " << avg << endl;
    }

    ~Analyzer() {
        delete[] arr;   // free memory
    }
};

int main() {
    Analyzer a;
    a.accept();
    a.analyze();
    return 0;
}