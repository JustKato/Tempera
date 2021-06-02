#include <iostream>

using namespace std;

double ftc(double fahrenheit) {
    return ( fahrenheit - 32.0 ) * 5.0 / 9.0;
}

double ctf(double celsius) {
    return ( celsius * 9.0 / 5.0 ) + 32;
}

int main(int argc, char *argv[]) {

    double inp = 0.0;

    // Read input from pipe in
    std::cin >> inp;

    // If an argument is passed, then do the reverse ( c -> f instead of f -> c)
    if ( argc > 1 ) {
        // Cout the temperature in celsius
        cout << ctf(inp) << "\n";
    } else {
        // Cout the temperature in celsius
        cout << ftc(inp) << "\n";
    }

    // Return success to stdout
    return 0;
}