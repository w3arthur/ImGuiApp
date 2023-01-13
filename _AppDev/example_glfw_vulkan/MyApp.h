#pragma once
#include "imgui.h"
namespace MyApp2
{
    void RenderUI()
    {
        static float f = 0.0f;
        static int counter = 0;
        //int ii{ 0 };
        ImGui::Begin("Hello, world! ");                          // Create a window called "Hello, world!" and append into it.

        ImGui::End();
    }



}
