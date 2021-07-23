#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include "headers/main.h"

#define log(x) std::cout << x << std::endl;

using std::cout;
using std::endl;
using std::vector;

int simpleArraySum(std::vector<int> ar);
void plusMinus(std::vector<int> arr);
vector<int> compareTriplets(vector<int> a, vector<int> b);
void staircase(int n); 
void miniMaxSum(vector<int> arr);

int main() 
{
     

    return 0; 
}

long int findMin(vector<int> arr)
{
    int min = arr[0];
    for (int i = 0; i < arr.size(); i++)
    {
        if(arr[i] < min)
        {
            min = arr[i];
        }
    }

    return min;
}

long int findMax(vector<int> arr) {
    int max = arr[0];
    for (int i = 0; i < arr.size(); i++)
    {
        if(arr[i] > max)
        {
            max = arr[i];
        }
    }

    return max;
}

void miniMaxSum(vector<int> arr) {
    long int min = 0, max = 0, sum = 0;

    for (int i=0; i<arr.size(); i++) {
        sum += arr[i];
    }

    log("sum is " << sum)

    min = sum - findMin(arr);
    max = sum - findMax(arr);
    cout << max << " " << min << endl;
}

void staircase(int n) {
    for (int i = n; i > 0; --i){
        for (int j = 0 ; j < i - 1; ++j){
            cout<< " ";
        }

        for (int k = i - 1; k < n; ++k){
            cout<< "#";
        }
        cout << endl;
    }
}

vector<int> compareTriplets(vector<int> a, vector<int> b) {
    vector<int> score;
    int alice = 0, bob = 0;

    for (int i=0; i<a.size(); i++) {
        if (a[i] > b[i]) 
            alice++;
        else if (a[i] < b[i])
            bob++;
        else 
            continue;
    }

    score.push_back(alice);
    score.push_back(bob);

    return score;
}


int simpleArraySum(std::vector<int> ar) {
    int sum = 0;
    for (int i = 0; i < ar.size(); i++) {
        sum += ar[i];
    }
    return sum;
}

void plusMinus(std::vector<int> arr) {
    double pos, neg, zero = 0;
    
    for (int i=0; i<arr.size(); i++) {
        if (arr[i] > 0) 
            pos++;
        else if (arr[i] < 0)
            neg++;
        else 
            zero++;
    }

    log(pos / arr.size())
    log(neg / arr.size())
    log(zero / arr.size())
}