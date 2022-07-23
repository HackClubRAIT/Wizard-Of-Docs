# Sieve of Eratosthenes Algorithm

A Prime Number has a unique property which states that the number can only be divisible by itself or 1.

## What does it do?
For a given upper limit, this algorithm computes all the prime numbers upto the given limit by using the precomputed prime numbers repeatedly.

The traditional algorithm for checking prime property would iterate over all the composites multiple times for each number for checking its properties.
Whereas this algorithm only has to iterate over all numbers only once while crossing out the composites and marking out the primes.
Once all the primes are marked, they are collected inside a list/vector and are used as required.
Hence the time complexity for the traditional algorithm increases with increase in range as well as size of numbers whereas Sieve of Eratosthenes only takes O(N).

Sieve of Eratosthenes algorithm is the most efficient for collecting multiple primes for a huge range of numbers of big magnitudes.


## Steps
**Step 1)** A list/vector is created where all the primes would be stored.

**Step 2)** All the numbers upto the given range is initially marked as Prime (true) [except for 0 and 1].

**Step 3)** As the primes are marked true, all the multiples of those primes are marked as composites (false). If a number is already marked false, their multiples are skipped.

**Step 4)** All the numbers which were multiples are marked false and only those numbers remain marked as prime (true) which are not a multiple of any other number, hence it is a prime number.

**Step 5)** The marked primes are then collected in the list/vector for their required use.


## Code in C++
```cpp
#include <bits/stdc++.h>
using namespace std;

vector<int> sieveOfEratosthenes(int up) {
    vector<int> primes;

    // First marking all numbers as prime numbers
    vector<bool> mark(up + 1, true);

    // Marking each of multiples of the primes as a composite number
    for(int i= 2; i*i<= up; i++) {
        if(mark[i] == true) {
            // Logically all multiples below square of prime will automatically be marked as multiples of smaller primes,
            // Eg. If i=7, upto i*i=49, all multiples of 7, that is, 7*2, 7*3... are already marked by 2, 3 and so on.
            // If i=13, upto 13*13=169, all multiples of 13 including 13*11, 13*7, 13*2, etc are all marked as the multiples of smaller primes.
            // So no need to mark them again, hence starting from the square of the prime...
            for(int j= i*i; j<=up; j+=i)
                mark[j] = false;
        }
    }

    // All the numbers that are still marked as primes are then stored inside the primes vector while omiting 0 and 1
    for(int i=2; i<=up; i++)
        if(mark[i])
            primes.push_back(i);

    return primes;
}

int main() {

    vector<int> primes;
    int up;

    cout << "\nEnter the upper limit: ";
    cin >> up;
    cout << endl;

    primes = sieveOfEratosthenes(up);

    printf("\nHere are the primes in range 1-%d:\n", up);

    for(auto p : primes)
        cout << p << ", ";
    cout << endl;

    return 0;
}
```

## Code in Python
```python

def sieveOfEratosthenes(limit : int) -> list:
    # All numbers upto limit [except 0 and 1] are intially marked as primes
    mark = [False]*2 + [True]*(limit-1)
    primes = list()

    for i in range(2, limit+1):
        if mark[i]:
            # Multiples before the square of prime is already marked as multiples of smaller primes
            # Eg. For prime=13, 13*2, 13*3, 13*5, 13*7, 13*11 will already be marked as multiples of 2, 3, 5, 7, 11 respectively
            # Only multiples from 13*13 should begin marking as composites
            for j in range(i*i, limit+1, i):
                mark[j] = False             # Marked as composite

    # All numbers still marked as primes are primes as they are not multiples of any other primes numbers
    # Collecting aLl primes
    for i, m in enumerate(mark):
        if m:
            primes.append(i)

    return primes

def main():
    up = int(input("Enter the upper limit: "))

    primes = sieveOfEratosthenes(up)

    print(f"\nHere are the primes in range 1-{up}:")
    print(*primes, sep= ", ", end= "\n\n")


if __name__ == "__main__":
    main()

```