cmake_minimum_required(VERSION 3.5)

project(03.homework)

add_executable(game
	game.cpp
	random_value.cpp
	check_value.cpp
	high_scores.cpp
)

set_target_properties(game PROPERTIES CXX_STANDARD 17 CXX_STANDARD_REQUIRED ON)