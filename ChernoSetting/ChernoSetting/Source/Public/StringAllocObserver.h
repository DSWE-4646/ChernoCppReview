#pragma once
#include <string>
#include <cstdint>
#include <cstdlib>
#include <iostream>

static uint32_t StringAllocCount = 0;
static size_t StringAllocSize = 0;

inline uint32_t GetStringAllocCount() { return StringAllocCount; }
inline size_t GetStringAllocSize() { return StringAllocSize; }
inline void ResetStringAllocSizeAndCount() { StringAllocCount = 0; StringAllocSize = 0; }

inline void* operator new(size_t size)
{
    StringAllocCount++;
    StringAllocSize += size;
    std::cout << "This Time Memory Allocated:"<< StringAllocSize <<" , The Time of memory alloocation is:" << StringAllocCount << std::endl; 
    return malloc(size);
}

