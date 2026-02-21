#include <webgpu/webgpu.h>
#include <iostream>

auto main() -> int{

    WGPUInstanceDescriptor desc = {};
    desc.nextInChain = nullptr;

    WGPUInstance instance = wgpuCreateInstance(&desc);

    if(!instance)
    {
        std::cerr<<"Could not initialize WebGPU\n";
        return 1;
    }

    std::cout<<"WGPU instance: "<<instance<<"\n";
    wgpuInstanceRelease(instance);
    return 0;
}