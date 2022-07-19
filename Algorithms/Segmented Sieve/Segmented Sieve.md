# Segmented Sieve Algorithm

A Prime Number has a unique property which states that the number can only be divisible by itself or 1.

### Sieve of Eratosthenes
An algorithm known as Sieve of Eratosthenes can distinguish primes upto a given maximum number by marking off the multiples of smaller primes as composite numbers.

But this algorithm has a disadvantage.
If there is also given a lower limit, then this algorithm would not be much efficient as it would be also finding out primes below the lower limit as part of the process.
This algorithm takes up a lot of unnecessary memory in order to process the calculations.


Hence to find out prime numbers within a certain range having a lower limit, Segmented Sieve Algorithm is used which is an adaptation of the Sieve of Eratosthenes Algorithm and works perfectly for given lower and upper boundaries.


## Steps
**Step 1)** A list/vector is created which is going to store all primes upto the root of the higher limit. This is because primes after the root of the higher limit would not be used for determining the primes in the given range.

**Step 2)** The list is filled with the inital primes, using the Sieve of Eratosthenes method, as it is the most efficient in this case.

**Step 3)** Then similar to the Sieve of Eratosthenes, the multiples of the initial primes inside that range/segment are marked as composites.

**Step 4)** The numbers left unmarked are the required primes and is extracted.


## Code using C++
```cpp
#include <bits/stdc++.h>
using namespace std;

vector<int> simpleSieve(int limit) {
    // This function is based on Sieve of Erathosthenes and would be used to get the initial prime numbers
    vector<int> initialPrimes;

    // First marking all numbers as prime numbers
    vector<bool> mark(limit + 1, true);

    // Marking each of multiples of the primes as a composite number
    for(int i= 2; i*i<= limit; i++) {
        if(mark[i] == true) {
            // Logically all multiples below square of prime will automatically be marked as multiples of smaller primes,
            // Eg. If i=7, upto i*i=49, all multiples of 7, that is, 7*2, 7*3... are already marked by 2, 3 and so on.
            // If i=13, upto 13*13=169, all multiples of 13 including 13*11, 13*7, 13*2, etc are all marked as the multiples of smaller primes.
            // So no need to mark them again, hence starting from the square of the prime...
            for(int j= i*i; j<=limit; j+=i)
                mark[j] = false;
        }
    }

    // All the numbers that are still marked as primes are then stored inside the primes vector while omiting 0 and 1
    for(int i=2; i<=limit; i++)
        if(mark[i])
            initialPrimes.push_back(i);

    return initialPrimes;
}


vector<int> segmentedSieve(int lp, int up, vector<int> initialPrimes) {
    vector<int> mark(up-lp+1, true);
    vector<int> primes;

    for(auto p : initialPrimes) {
        // Calculating the first multiple of the prime in this segment
        int first = lp/p * p;
        if(first < lp)
            first += p;

        // Marking multiples of the primes as composites
        // Omiting checks for multiples below the square of prime
        for(int i= max(first, p*p); i<= up; i+= p) {
            mark[i-lp] = false;
        }
    }
    // Collecting All Primes
    for(int i=0; i<mark.size(); i++) {
        if(mark[i])
            primes.push_back(i + lp);
    }

    return primes;
}

int main() {

    vector<int> initialPrimes;
    vector<int> primes;
    int lp = 0, up = 0;

    cout << "\nEnter the lower limit: ";
    cin >> lp;
    cout << "\nEnter the upper limit: ";
    cin >> up;
    cout << endl;

    initialPrimes = simpleSieve(sqrt(up));

    primes = segmentedSieve(lp, up, initialPrimes);

    for(auto p : primes)
        cout << p << ", ";
    cout << endl;

    return 0;
}
```

## Code using Python
```python
def simpleSieve(limit : int) -> list:
    # All numbers upto limit [except 0 and 1] are intially marked as primes
    mark = [False]*2 + [True]*(limit-1)
    initialPrimes = list()

    for i, m in enumerate(mark):
        if m:
            # Multiples before the square of prime is already marked as multiples of smaller primes
            # Eg. For prime=13, 13*2, 13*3, 13*5, 13*7, 13*11 will already be marked as multiples of 2, 3, 5, 7, 11 respectively
            # Only multiples from 13*13 should begin marking as composites
            for j in range(i*i, len(mark), i):
                mark[j] = False             # Marked as composite

    # All numbers still marked as primes are primes as they are not multiples of any other primes numbers
    # Collecting aLl primes
    for i, m in enumerate(mark):
        if m:
            initialPrimes.append(i)

    return initialPrimes


def segmentedSieve(lp : int, up : int, intialPrimes : list) -> list:
    mark = [True] * (up - lp + 1)
    primes = list()

    for p in intialPrimes:
        # Finding out first multiple of the prime
        first = lp//p * p
        if first<lp:
            first += p

        # Skipping multiples before the square of prime and marking remaining as composites
        for i in range(max(first, p*p), up+1, p):
            mark[i-lp] = False

    # Collecting the primes
    for i, m in enumerate(mark):
        if m:
            primes.append(i+lp)

    return primes

if __name__ == "__main__":
    lp = int(input("Enter the lower limit: "))
    up = int(input("Enter the upper limit: "))

    initialPrimes = simpleSieve(limit= int(up**0.5))

    primes = segmentedSieve(lp, up, initialPrimes)

    print(f"\nHere are the primes in range {lp}-{up}:")
    print(*primes, sep= ", ", end= "\n\n")

```