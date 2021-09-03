#ifndef VIOLET_OPENGL_RENDER_API_H_
#define VIOLET_OPENGL_RENDER_API_H_
#include "Violet/Renderer/RendererAPI.hpp"

namespace Violet{
    class OpenGLRendererAPI:public RendererAPI {
        public:
            virtual void setClearColor(glm::vec4 color) override;
            virtual void clear() override;

            virtual void drawIndexed(const std::shared_ptr<VertexArray> vertexArray) override;
    };
}


#endif // VIOLET_OPENGL_RENDER_API_H_