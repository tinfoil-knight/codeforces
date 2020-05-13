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

