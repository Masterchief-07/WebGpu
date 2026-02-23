#pragma once
#include <webgpu/webgpu.h>
#include <JGPU/Instance.hpp>

namespace JGPU
{
    class Adapter
    {
        public:
            struct AdapterUserData
            {
                WGPUAdapter _adapter;
                bool _isValid;
            };

        public:
            Adapter(const JGPU::Instance& instance, const WGPURequestAdapterOptions* options);
            ~Adapter();
            inline bool isValid() const { return _isValid;};
            inline WGPUAdapter getWGPUAdapter() const {return _adapter;};

        private:
            bool _isValid;
            WGPUAdapter _adapter;
            WGPURequestAdapterCallbackInfo _callBackInfo;

            static void onAdapterRequestEnded(
                WGPURequestAdapterStatus status,
                WGPUAdapter adapter,
                WGPUStringView message,
                void * pUserData1,
                void * pUserData2
            );

    };
}