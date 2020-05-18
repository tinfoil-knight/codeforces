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

**Loop over a vector of integers**
```c++
// iostream, vector
for (int i : arr){
    cout << i << endl;
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

**Notes**
- When using count to find a target, use single-quotes instead of double quotes when matching a single character.
- Use `.empty()` to check if a container is empty. Not all containers can calculate their size in constant time.
- Pass containers with large amount of data using pointers to prevent copying. If you want to avoid changing the contents of the original container, use `const`.
- Some functions are present both in `algorithm` header and containers. Using container specific functions is recommended.
- When using `.push_back()` multiple times, use `reserve(n)` if max limit of no. of elements is known to avoid using double the memory.

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

