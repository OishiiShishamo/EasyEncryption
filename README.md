# EasyEncryption
Simple encryption tool using XOR

## Caution
- Because of the C++ version, ShiftJIS is used, so if you open the output file with UTF-8, etc., you will get inaccurate results.

## Usage
This is a CLI tool that:
1. Prompts for input text and an encryption key
2. Outputs the XOR-encrypted result to the console and to output.txt

Decryption is done the same way — running the encrypted text with the same key again.

## Requirement
C++11 or above.

gcc 4.8 or above.\
or\
MSVC 14.0 or above.

## Build Instructions
Build using g++.\
`g++ main.cpp -o OPTIONAL_NAME MORE_OPTIONS`

the end.

## TODO
UTF-8 Support