# Rowan language spec

## Lexical structure

### Keywords
Keywords cannot be used as identifiers.   
The following words are classed as keywords:   
#### Control flow:
```
if
for
while
return
break
switch
case
```
#### @TODO Something I should probably name:
```
include
using
cast
true
false
```
#### Data structures:
```
struct
enum
union
soa
```
#### Types:
```
int
uint
float
double
string
char
s8
s16
s32
s64
s128
u8
u16
u32
u64
u128
f16
f32
f64
f128
```

### Identifiers

Identifiers must fit the following regex: `[a-zA-Z_][a-zA-Z0-9_]*`
That is to say, identifiers can start with a letter or underscore, and can continue with any number of letters, underscores and numbers.
This regex will include `_`, but this will be treated separately as meaning whatever is happening to the variable will go nowhere.

### Comments
Block comments can be nested. Comments can be started and ended the same way as in C:
```rust
// This is a line comment
/*
This is a block comment
/* This is a nested block comment */
This is still in a comment! 
*/ 
```

### Operators and types


## Parser

### Language structures

## Type system

## Code generation