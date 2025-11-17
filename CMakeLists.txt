cmake_minimum_required(VERSION 3.10)
project("LibraryInventorySystem")

set(PROJECT_SOURCES
        src/main.cpp
        src/LibraryInventory/Library.h
        src/LibraryInventory/Library.cpp
        src/LibraryInventory/Shelf.h
        src/LibraryInventory/Shelf.cpp
        src/LibraryInventory/Compartment.h
        src/LibraryInventory/Compartment.cpp
        src/Item/Item.h
        src/Item/Item.cpp
        src/Item/CheckedOutItem.h
        src/Item/CheckedOutItem.cpp
        src/Item/Book.h
        src/Item/Book.cpp
        src/Item/Magazine.h
        src/Item/Magazine.cpp
        src/Item/Movie.h
        src/Item/Movie.cpp
        src/Exceptions.h)

add_executable(execBinary ${PROJECT_SOURCES})
