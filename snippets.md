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

**Benchmarking**
```c++
// chrono
class Timer {
 public:
  Timer() { start = chrono::high_resolution_clock::now(); }
  ~Timer() {
    end = chrono::high_resolution_clock::now();
    chrono::high_resolution_clock::duration d = end - start;
    cout
        << chrono::duration_cast<chrono::microseconds>(d).count()
        << " us" << endl;
  }

  chrono::high_resolution_clock::time_point start;
  chrono::high_resolution_clock::time_point end;
};
```

