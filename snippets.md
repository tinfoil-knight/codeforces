**Get single-line input and store in vector**
```
INPUT:
4  
2 3 4 5
```

```c++
// iostream, vector
int n, input;
vector<int> arr;

cin >> n;

for (int i = 0; i < n; i++)
{
    cin >> input;
    arr.push_back(input);
}
```

**Get unknown length mutliline input and store in vector**
```c++
// iostream
int input;
vector<int> arr;

while (cin >> input){
    arr.push_back(input)
}
```

**When using file for IO**
```c++
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
```

**Fast IO**
```c++
ios_base::sync_with_stdio(false);
cin.tie(NULL);
// cout << “\n”;
```

**Reverse Sort**
```c++
// algorithm
vector<int> v = {4,2,5,3,5,8,3};
sort(v.rbegin(),v.rend());
```

**Sorting an Array (non-vector)**
```c++
// algorithm
int n = 7; // array size
int a[] = {4,2,5,3,5,8,3};
sort(a,a+n);
```

**Convert string to vector of char**
```c++
string s = "Hello";
vector<char> arr(s.begin(), s.end());
```

**String has Substring**
```c++
bool stringHasSub(string str, string substr) {
  return str.find(substr) != string::npos ? true : false;
}
```

**Smallest Digit, Largest Digit**
```c++
int minDigit(int n) {
  int smallest = 9;

  while (n) {
    int r = n % 10;
    smallest = min(r, smallest);
    n = n / 10;
  }

  return smallest;
}

int maxDigit(int n) {
  int largest = 0;

  while (n) {
    int r = n % 10;
    largest = min(r, largest);
    n = n / 10;
  }

  return largest;
}
```

**Creating an iterator**
```c++
set<int>::iterator it = s.begin();
// OR
auto it = s.begin();
// Print 1st element of set
cout << *it << "\n";
// Print last element of set
it = s.end(); it--;
cout << *it << "\n";
```

**Printing a Map**
```c++
unordered_map<string, int>::iterator itr;
for (itr = kv.begin(); itr != kv.end(); ++itr) {
  cout << itr->first << '\t';
  cout << itr->second << '\n';
}
```

**Take an element directly into array from STDIN**
```c++
int n;
cin >> n;
vector<int> a(n);
while(n--){
  cin >> a[i];
}
```

**Benchmarking**
```c++
// chrono
// Before Process
const auto t1 = std::chrono::high_resolution_clock::now();
/* Process Goes Here */
// After Process
const auto t2 = std::chrono::high_resolution_clock::now();
const std::chrono::duration<double, std::milli> ms = t2 - t1;
// Print
std::cout << ms.count() << " ms\n";
```

**Notes**
- When using count to find a target, use single-quotes instead of double quotes when matching a single character.
- Use `.empty()` to check if a container is empty. Not all containers can calculate their size in constant time.
- Pass containers with large amount of data using pointers to prevent copying. If you want to avoid changing the contents of the original container, use `const`.
- Some functions are present both in `algorithm` header and containers. Using container specific functions is recommended.
- When using `.push_back()` multiple times, use `reserve(n)` if max limit of no. of elements is known to avoid using double the memory.
- `unordered_map`, `unordered_set` are faster compared to `map` and `set` respectively.
- `accumulate` uses the type of init value to determine its result. While dealing with larger nums, cast the init value to long.
- `bitset` are array-like structures with elements only as 0 or 1. `count` on a bitset returns the number of 1s in the array. BITWISE operations like `&`, `|`, `^` can be used. They are faster than normal arrays due to less memory requirement.
- More data structures in C++
  - Deque - Double Sided Queue
  - Stack (LIFO)
  - Queue (FIFO)
  - Priority Queue - Retrieve and remove the max or min element

**Useful Macros & TypeDefs**
```c++
#define PB push_back
#define MP make_pair
#define REP(i,a,b) for (int i = a; i < b; i++)
```
```c++
typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;
```
