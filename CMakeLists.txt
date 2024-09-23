cmake_minimum_required(VERSION 3.10)
project(MyGate)

set(CMAKE_CXX_STANDARD 11)

add_subdirectory(lib)

# Додаємо виконуваний файл
add_executable(Gate_Controller src/main.cpp)

# Вкажіть шлях до заголовкових файлів
target_include_directories(Gate_Controller PRIVATE ${CMAKE_SOURCE_DIR}/lib)

# Лінкуємо бібліотеку Gate
target_link_libraries(Gate_Controller Gate)
