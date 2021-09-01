#ifndef VIOLET_OPENGL_SHADER_H_
#define VIOLET_OPENGL_SHADER_H_
#include "Violet/Renderer/Shader.hpp"

namespace Violet{
    class OpenGLShader:public Shader{
        public:
            OpenGLShader(const std::string vertexSrc,
                         const std::string fragmentsrc);
            virtual ~OpenGLShader();

            virtual void bind() const;
            virtual void unbind() const;
        private:
            uint32_t m_RendererID;
    };
}


#endif // VIOLET_SHADER_H_