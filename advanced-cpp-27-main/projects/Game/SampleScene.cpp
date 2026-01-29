#include <UniDx.h>
#include <UniDx/PlayerLoop.h>
#include <cmath>

using namespace UniDx;

class SampleScene
{
public:
    float angle = 0.0f;
    float time = 0.0f;

    void Update(float deltaTime)
    {
        // ‡@ Ž©“®‰ñ“]
        angle += deltaTime;

        // ‡A ŽžŠÔ‰ÁŽZ
        time += deltaTime;
    }

    void Render()
    {
        float r = (sinf(time) + 1.0f) * 0.5f;
        float g = (sinf(time + 2.0f) + 1.0f) * 0.5f;
        float b = (sinf(time + 4.0f) + 1.0f) * 0.5f;

        Graphics::GetInstance()->Clear(r, g, b, 1.0f);
    }
};
