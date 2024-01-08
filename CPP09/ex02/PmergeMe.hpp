
#pragma once

#include <iostream>
#include <vector>
#include <utility>
#include <cstdlib>
#include <algorithm>
#include <deque>
#include <ctime>
#include <iomanip>

std::vector<int>   PmergeMe( std::vector<int>& vec );
std::deque<int>    PmergeMe( std::deque<int>& vec );
double  dSort( std::deque<int>& deq );
double  vSort( std::vector<int>& vec );