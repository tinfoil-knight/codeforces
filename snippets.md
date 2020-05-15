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

**Get unknown mutliline input and store in vector**
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

**Reverse Sort**
```c++
sort(v.rbegin(),v.rend());
vector<int> v = {4,2,5,3,5,8,3};
```

**Sorting an Array (non-vector)**
```c++
int n = 7; // array size
int a[] = {4,2,5,3,5,8,3};
sort(a,a+n);
```

