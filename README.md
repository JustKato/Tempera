# About
This is a simple program that can convert temperature from fahrenheit to celsius and vice-versa, the usage is explained bellow and pretty straight-forward. 

The program should be quite light-weighted and easy to use in bigger systems, I personally created it because I Found a need for a program that quickly calculates this for me through CLI for implementation with different scripts and automations, also I found that `C++` is quite a bit faster and much better optimized in doing this than `php`

# Compilation
To compile the program it's quite straight forward on linux, simply run the `compile.sh` file, which requires the `g++` package, to install it on Debian based systems simply run `sudo apt install g++`.

# Usage
The package was created expecting pipe-in stdin, you can pipe input straight into it or you can simply run it and type numbers in, simplest usages is: `echo 64 | ./tempera` which will return `17.7778`, you can add this to your `/usr/bin` folder or `/bin` fir ease of use, or simply add it to your path.

If you wish to convert `Celsius` to `Fahrenheit` simply add in another argument to the program, so when you type `echo 16 | ./tempera 1` it will return `60.8`

# Examples
```bash
# 🌡 Fahrenheit -> Celsius
echo 64 | ./tempera # Returns 17.7778

# 🌡 Celsius -> Fahrenheit
echo 16 | ./tempera 1 # returns 60.8

```

# License
[MIT License](license)

#### Disclaimer
I literally made this at `12:00AM`, it's dead-simple and nothing special, just write it yourself if you're goign to implement it, I just wanted to have a binary download somewhere

