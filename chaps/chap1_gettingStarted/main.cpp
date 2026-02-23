#include <JGPU/Instance.hpp>
#include <iostream>

auto main() -> int{

    WGPUInstanceDescriptor desc = {};
    desc.nextInChain = nullptr;

    const auto instance = JGPU::Instance(desc);

    if(!instance.isValid())
    {
        std::cerr<<"Could not initialize WebGPU\n";
        return 1;
    }

    std::cout<<"WGPU instance: "<<instance.getWGPUInstance()<<"\n";
    return 0;
}