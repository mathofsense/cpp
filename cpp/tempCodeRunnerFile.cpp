    std::cout << "Enter the lengths of the three sides (a, b, c): ";
    std::cin >> a >> b >> c;

    // Check if the sides can form a triangle
    if (a + b > c && a + c > b && b + c > a) {
        std::cout << "Can make a triangle" << std::endl;
    } else {
        std::cout << "Can't make a triangle" << std::endl;
    }