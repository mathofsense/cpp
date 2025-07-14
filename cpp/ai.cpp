#include <iostream>
#include <cmath>

// Inline sigmoid activation function
inline float sigmoid(float x) {
    return 1.0f / (1.0f + std::exp(-x));
}

// Inline derivative of sigmoid function
inline float sigmoid_derivative(float x) {
    return x * (1.0f - x);
}

int main() {
    // Training data: input and expected output
    float input = 0.5f;
    float expected_output = 0.8f;  // Target value

    // Initialize weight and bias
    float weight = 0.8f;
    float bias = 0.1f;

    // Learning rate
    float learning_rate = 0.1f;

    // Number of training iterations
    int epochs = 10000;

    for (int i = 0; i < epochs; i++) {
        // Forward pass
        float z = input * weight + bias;
        float output = sigmoid(z);

        // Calculate error
        float error = expected_output - output;

        // Backpropagation (gradient descent)
        float d_output = error * sigmoid_derivative(output);

        // Update weight and bias
        weight += learning_rate * d_output * input;
        bias += learning_rate * d_output;

        // Print error every 1000 epochs
        if (i % 1000 == 0) {
            std::cout << "Epoch " << i << ": Error = " << error << std::endl;
        }
    }

    // Final output after training
    float final_output = sigmoid(input * weight + bias);
    std::cout << "Trained output: " << final_output << std::endl;
    std::cout << "Trained weight: " << weight << std::endl;
    std::cout << "Trained bias: " << bias << std::endl;

    return 0;
}
