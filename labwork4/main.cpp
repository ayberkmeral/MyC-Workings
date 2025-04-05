#include <iostream>
#include <vector>
#include <iomanip>
#include <algorithm>
#include <cmath>

using namespace std;

void insertion_sort(vector<int> &v) {
    for (int i = 1; i < v.size(); ++i) {
        int key = v[i];
        int j = i - 1;

        while (j >= 0 && v[j] > key) {
            v[j + 1] = v[j];
            --j;
        }
        v[j + 1] = key;
    }
}

double findMedian(vector<int> &v) {
    vector<int> temp = v;
    insertion_sort(temp);

    int n = temp.size();

    if (n % 2 == 1) {
        return temp[n / 2];
    } else {
        return (temp[n / 2 - 1] + temp[n / 2]) / 2.0;
    }
}

double calculateStandardDeviation(const vector<int> &v) {
    if (v.empty()) {
        return 0.0;
    }

    double sum = 0.0;
    for (int val : v) {
        sum += val;
    }
    double mean = sum / v.size();

    double sumSquaredDifferences = 0.0;
    for (int val : v) {
        sumSquaredDifferences += pow(val - mean, 2);
    }

    return sqrt(sumSquaredDifferences / v.size());
}

int main() {
    vector<int> v1;
    int choice;

    do {
        cout << "\nMenu:\n";
        cout << "1. Enter Data\n";
        cout << "2. Calculate Statistics\n";
        cout << "3. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                v1.clear();
                int a;
                cout << "Enter values (enter -999 to stop):\n";
                while (cin >> a && a != -999) {
                    v1.push_back(a);
                }
                break;
            }
            case 2: {
                if (v1.empty()) {
                    cout << "No data entered. Please enter data first.\n";
                } else {
                    int mini = *min_element(v1.begin(), v1.end());
                    int maxi = *max_element(v1.begin(), v1.end());

                    cout << "Entered values: ";
                    for (int val : v1)
                        cout << setw(2) << val;
                    cout << endl;

                    cout << "minimum value is: " << mini << endl;
                    cout << "maximum value is: " << maxi << endl;

                    insertion_sort(v1);
                    cout << "Sorted values: ";
                    for (int val : v1)
                        cout << setw(2) << val;
                    cout << endl;

                    double sum = 0;
                    for (int val : v1) {
                        sum += val;
                    }
                    double mean = sum / v1.size();
                    cout << "mean is: " << mean << endl;

                    double median = findMedian(v1);
                    cout << "median is: " << median << endl;

                    double stdDev = calculateStandardDeviation(v1);
                    cout << "Standard deviation is: " << stdDev << endl;
                }
                break;
            }
            case 3: {
                cout << "Exiting...\n";
                break;
            }
            default: {
                cout << "Invalid choice. Try again.\n";
            }
        }
    } while (choice != 3);

    return 0;
}
