std::vector<int> myVector; 

for (int i = 0; i < 10; ++i) {
  myVector.push_back(i); 
}

for (int i = 0; i < myVector.size(); ++i) {
  // Accessing elements using at()
  std::cout << myVector.at(i) << " "; 
}

std::cout<<std::endl; 

for (int i = 0; i < myVector.size() + 1; ++i) {
  // Accessing elements using at()
  std::cout << myVector.at(i) << " "; 
}