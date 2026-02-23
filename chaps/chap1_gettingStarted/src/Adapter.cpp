#include <JGPU/Adapter.hpp>

using namespace JGPU;

Adapter::Adapter(const JGPU::Instance& instance, const WGPURequestAdapterOptions* options)
{
    _callBackInfo = WGPURequestAdapterCallbackInfo{
        nullptr,
        WGPUCallbackMode::WGPUCallbackMode_AllowSpontaneous,
        onAdapterRequestEnded,
        nullptr,
        nullptr,
    };

    // _adapter = wgpuInstanceRequestAdapter(
    //     instance.getWGPUInstance(),
    //     options,
    //     onAdapterRequestEnded,

    // )
}

Adapter::~Adapter()
{
    if(_adapter)
        wgpuAdapterRelease(_adapter);
}

void Adapter::onAdapterRequestEnded(
        WGPURequestAdapterStatus status,
        WGPUAdapter adapter,
        WGPUStringView message,
        void * pUserData1,
        void * pUserData2
)
{

}