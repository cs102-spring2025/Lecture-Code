#include <iostream>

double estTotal(int minPeas, int maxPeas, int podCount);
//Returns an estimate of the total number of peas harvested.
//The formal parameter podCount is the number of pods.
//The formal parameters minPeas and maxPeas are the minimum
//and maximum number of peas in a pod.

int main( )
{
    int maxCount, minCount, podCount;
    double averagePea, yield;

    std::cout << "Enter minimum and maximum number of peas in a pod: ";
    std::cin >> minCount >> maxCount;
    std::cout << "Enter the number of pods: ";
    std::cin >> podCount;
    std::cout << "Enter the weight of an average pea (in ounces): ";
    std::cin >> averagePea;

    yield = estTotal(minCount, maxCount, podCount) * averagePea;

    std::cout.setf(std::ios::fixed);
    std::cout.setf(std::ios::showpoint);
    std::cout.precision(3);
    std::cout << "Min number of peas per pod = " << minCount << std::endl
         << "Max number of peas per pod = " << maxCount << std::endl
         << "Pod count = " << podCount << std::endl
         << "Average pea weight = "
         << averagePea << " ounces" << std::endl
         << "Estimated average yield = " << yield << " ounces"
         << std::endl;

    return 0;
}

double estTotal(int minPeas, int maxPeas, int podCount)
{
    double averagePea;

    averagePea = (maxPeas + minPeas)/2.0;
    return (podCount * averagePea);
}
