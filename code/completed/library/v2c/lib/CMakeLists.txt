cmake_minimum_required(VERSION 3.20)
project(library_v2c_lib)

add_library(${PROJECT_NAME} Book.cpp Book.h
        Member.cpp
        Member.h
        Utils.h
        Utils.cpp
        Library.cpp
        Library.h
        Catalog.h
        BookCatalog.cpp
        BookCatalog.h
        MemberCatalog.cpp
        MemberCatalog.h
)
target_include_directories(${PROJECT_NAME} PUBLIC .)
target_link_libraries(${PROJECT_NAME} PRIVATE library_data)
