#Minimum Scaffolding Required

#minimum cmake required
cmake_minimum_required(VERSION 3.20)

#project name/version/description/language
project(sqliteT1 VERSION 1.0 DESCRIPTION "A test of SQLite (Number One)" LANGUAGES CXX)

# DPP Dependency Requirements:
set(CMAKE_THREAD_PREFER_PTHREAD TRUE)
set(THREADS_PREFER_PTHREAD_FLAG TRUE)
find_package(Threads REQUIRED)

#create executable
add_executable(${PROJECT_NAME}
	src/main.cpp
	)

#linking libraries
target_link_libraries(${PROJECT_NAME}
	sqlite3
	dpp
	pthread
	)

#Specify includes
target_include_directories(${PROJECT_NAME} PRIVATE
	include
	/usr/include
	/usr/local/include
	)

#set C++ Version
set_target_properties(${PROJECT_NAME} PROPERTIES
	CXX_STANDARD 17
	CXX_STANDARD_REQUIRED ON
	)
