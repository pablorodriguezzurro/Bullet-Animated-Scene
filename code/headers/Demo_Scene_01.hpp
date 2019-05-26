/**
 * @file Demo_Scene_01.hpp
 * @author Pablo Rodriguez (przuro@gmail.com)
 * @brief 
 * @version 0.1
 * @date 26-05-2019
 * 
 * @copyright Copyright (c) 2019
 * 
 */

#ifndef BULLET_ANIMATED_SCENE_DEMO_SCENE_O1_H_
#define BULLET_ANIMATED_SCENE_DEMO_SCENE_O1_H_

#include <Scene.hpp>

namespace prz
{
    
    class Demo_Scene_01 : public Scene
    {
    public:

        Demo_Scene_01(Window& window);

	public:

		void initialize() override;

    };

} // !namespace prz

#endif // !BULLET_ANIMATED_SCENE_DEMO_SCENE_O1_H_