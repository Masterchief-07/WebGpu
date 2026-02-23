#pragma once
#include<webgpu/webgpu.h>

namespace JGPU{
class Instance
{
    public:
        Instance(const WGPUInstanceDescriptor& desc);
        ~Instance();
        inline bool isValid() const { return _isValid;};
        inline WGPUInstance getWGPUInstance() const {return _instance;};

        Instance(const Instance&) = delete;
        Instance(Instance&&) = delete;
        Instance& operator=(const Instance&) = delete;
        Instance& operator=(const Instance&&) = delete;
    private:
        WGPUInstance _instance;
        bool _isValid;

};

}