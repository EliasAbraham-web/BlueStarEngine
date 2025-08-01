#ifndef BSE__Game_main_hpp__
#define BSE__Game_main_hpp__

namespace BSE
{
    struct Game_to
    {
     public:
     static void Init();
     static void Free();
     static void Run();
     protected:
     static void Handle();
     static void Update();
     static void Render();
    }
}

#endif