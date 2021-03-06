#include "Violet/Renderer/RendererAPI.hpp"
#include "Violet/Renderer/Buffer.hpp"
#include "Violet/Platform/OpenGL/OpenGLBuffer.hpp"
#include "Violet/Log.hpp"

using namespace Violet;

VertexBuffer* VertexBuffer::create(float* vertices, uint32_t size){
    switch(RendererAPI::getAPI()){
        case(RendererAPI::API::OpenGL):       return new OpenGLVertexBuffer(vertices, size);
        case(RendererAPI::API::None):         VGE_CORE_ASSERT(false, "RendererAPI::None currently returns nullptr.");
    }
    VGE_CORE_ASSERT(false, "Unknown renderer API.")
    return nullptr;
}

IndexBuffer* IndexBuffer::create(uint32_t* indices, uint32_t size){
    switch(RendererAPI::getAPI()){
        case(RendererAPI::API::OpenGL):        return new OpenGLIndexBuffer(indices, size);
        case(RendererAPI::API::None):          VGE_CORE_ASSERT(false, "RendererAPI::None currently returns nullptr.");
    }
    return nullptr;
}
