//
// Created by Zhaohong Liu on 24-3-27.
//

#include "nvblox/mapper/mapper.h"

int main(){
    const float voxel_size_m = 0.05;
    const nvblox::MemoryType memory_type = nvblox::MemoryType::kDevice;

    nvblox::Mapper mapper = nvblox::Mapper(voxel_size_m, memory_type);

//    mapper.integrateDepth();
}