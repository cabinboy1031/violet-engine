#ifndef __VIOLET_MOUSEEVENT_H_
#define __VIOLET_MOUSEEVENT_H_

#include "vgepch.hpp"
#include "Event.hpp"

namespace Violet {
    class MouseMovedEvent: public Event{
        public:
            MouseMovedEvent(float x, float y)
                : m_mouseX(x), m_MouseY(y) {}

            inline float getX() const { return m_MouseX; }
            inline float getY() const { return m_MouseY; }

            std::string toString() const override {
                std::stringstream ss;
                ss << "MouseMovedEvent: " << m_MouseX << ", " << m_MouseY;
                return ss.str();
            }

            EVENT_CLASS_TYPE( MouseMoved )
            EVENT_CLASS_CATEGORY( EventCategoryMouse | EventCategoryInput )
        private:
            float m_MouseX, m_MouseY;
    };

    class MouseScrolledEvent: public Event {
        public:
            MouseScrolledEvent(float xOffset, float yOffset)
                :m_XOffset(xOffset), m_YOffset(yOffset){}

            float getXOffset() const { return m_XOffset; }
            float getYOffset() const { return m_YOffset; }

            std::string toString() const override {
                std::stringstream ss;
                ss << "MouseScrolledEvent: " << m_XOffset << ", " << m_YOffset;
                return ss.str();
            }

            EVENT_CLASS_TYPE(MouseScrolled)
            EVENT_CLASS_CATEGORY(EventCategoryMouse | EventCategoryInput)
        private:
            float m_XOffset, m_YOffset;
    };

    class MouseButtonEvent: public Event {
        public:
            inline int getMouseButton() const { return m_Button;}

            EVENT_CLASS_CATEGORY( EventCategoryMouse | EventCategoryInput )
        protected:
            MouseButtonEvent(int button)
                : m_Button(button) {}

            int m_Button
    };

    class MouseButtonPressedEvent: public MouseButtonEvent {
        public:
            MouseButtonPressedEvent(int button)
                : MouseButtonEvent(button) {}

            std::string toString() const override {
                std::stringstream ss;
                ss << "MouseButtonPressedEvent: " << m_Button;
                return ss.str();
            }
            EVENT_CLASS_TYPE( MouseButtonPressed )
    };

    class MouseButtonReleasedEvent: public MouseButtonEvent {
        public:
            MouseButtonReleasedEvent(int button)
                : MouseButtonEvent(button) {}

            std::string toString() const override {
                std::stringstream ss;
                ss << "MouseButtonReleasedEvent: " << m_Button;
                return ss.str();
            }
            EVENT_CLASS_TYPE( MouseButtonReleased )
    };
}


#endif // __MOUSEEVENT_H_
