# Hashing
- The technique of mapping a large chunk of data into small tables with the help of a hashing function is called as Hashing.
- Hashing is an data structure which is designed in order to solve the problem of efficiently storing and finding data in an array. 
- Hash tables are used to store the data in an array format.
- Hashing is a two-step process.
 1. In Hashing the hash function converts the item into a small integer or hash value and this integer is used as an index which stores the original data.
 2. Data is stored in an hash table. A hash key can be used to locate data quickly. 
 
 
 
 ## Examples of Hashing in Data Structure
 
- In school, teacher assigns a unique roll number to each student. Later, teacher uses that roll number to retrieve information about that student.

## Hash Function
- The function which maps arbitary size of data to fixed-sized data is called as hash function.
- It returns hash value, hash codes, and hash sums.
 hash = hashfunc(key)
 index = hash % array_size 
- The hash function must satisfy the following requirements:
 1. A good hash function should be easy to compute.
 2. A good hash function should never get stuck in clustering and should distribute keys evenly across the hash table.
 3. A good hash function should avoid collision whenever two elements or items get assigned to the same hash value. 

## Hash Table
- Hashing uses hash tables to store the key-value pairs. 
- The hash table uses the hash function and generates an index.
- This unique index is used to perform insert, update, and search operations.

# Collision Resolution Techniques
-  If two keys are assigned the same index number in the hash table hashing falls into a collision. 
-  As each index in a hash table is supposed to store only one value the collision creates a problem . 
-  Hashing uses several collision resolution techniques for managing performance of a hash table.

## Linear Probing
- Hashing results into an array index which is already occupied for storing a value. 
- In such case, hashing performs search operation and linearly probes for the next empty cell.

## Double Hashing
- Double hashing technique uses two hash functions.
- Second hash function is used only when the first function causes a collision. 
- An offset is provided for the index to store the value.
- The formula for the double hashing technique is as follows:
 (firstHash(key) + i * secondHash(key)) % sizeOfTable 

- As compared to linear probing double hashing has a high computation cost as it searches the next free slot faster than the linear probing method. 
