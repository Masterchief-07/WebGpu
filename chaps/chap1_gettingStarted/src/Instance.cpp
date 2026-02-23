#include <JGPU/Instance.hpp>

using namespace JGPU;

Instance::Instance(const WGPUInstanceDescriptor& desc)
        :_instance{nullptr},
        _isValid{false}
{
    _instance = wgpuCreateInstance(&desc);
    if(_instance)
        _isValid = true;
}

Instance::~Instance()
{
    if(isValid())
        wgpuInstanceRelease(_instance);
}