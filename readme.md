# Extended C Manual
## Supported Patterns
### for loops

```c
// style 1
for i in range(3){
    // Code
    printf("loop type 1\r\n");
}
// style 2
for i in range(2) {
    // Code
    printf("loop type 2\r\n");
}
// style 3
for i in range(5)
{
    // Code
    printf("loop type 3\r\n");
}
```

### String Manipulation

short hand notation for string copy and string concatenate. '$' sign is a special symbol

```c
char name[100];
$name = "Ali Harman"; // ->strcpy()
$name += "Ali Harman";// ->strcat
```

