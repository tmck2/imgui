#include "Application.h"

#include "imgui.h"

namespace MyApp {
    void RenderUI()
    {
        ImGui::Begin("BezierShmezier");
        ImGui::Button("Hello");
        ImGui::End();
    }
}
