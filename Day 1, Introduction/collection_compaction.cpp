#include <iostream>
#include <vector>

using namespace std;

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);

    vector<int> gpuGenerations;
    vector<int> gpuModels;
    vector<int> gpuValues;

    int n; cin >> n;

    for (int i = 0; i < n; i++) {

        // Get current line
        int identifier, value;
        cin >> identifier >> value;

        // Get generation and model of current GPU
        int generation = identifier / 1000;
        int model = identifier % 1000;

        // Search for equivalent GPUs
        bool foundEquivalent = false;
        for (int j = 0; j < gpuGenerations.size(); j++) {
            
            int differenceInGeneration = gpuGenerations.at(j) - generation;
            int expectedModel = gpuModels.at(j) + (10 * differenceInGeneration);

            // If equivalent GPU found, overwrite if current is more valuable
            if (model == expectedModel) {

                foundEquivalent = true;

                if (gpuValues.at(j) < value) {
                    gpuGenerations.at(j) = generation;
                    gpuModels.at(j) = model;
                    gpuValues.at(j) = value;
                }

                // Either way, there cannot be any equivalent GPUs further
                // in the vectors
                break;
            }
        }

        // If no equivalent GPUs were found, add to the end of the vectors
        if (!foundEquivalent) {
            gpuGenerations.push_back(generation);
            gpuModels.push_back(model);
            gpuValues.push_back(value);
        }
    }

    // Find and print total combined values of best GPUs
    // in each equivalence class
    int totalValue = 0;

    for (int value : gpuValues)
        totalValue += value;
    
    cout << totalValue << '\n';

    return 0;
}