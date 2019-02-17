%{Cpp:LicenseTemplate}\
#ifndef %{GUARD}
#define %{GUARD}

#include <core/Godot.hpp>
#include <gen/%{Base}.hpp>
@if "%{_input}" == "true" || "%{_unhandled_input}" == "true"
#include <gen/InputEvent.hpp>
@endif
@if "%{_unhandled_key_input}" == "true"
#include <gen/InputEventKey.hpp>
@endif
%{JS: Cpp.openNamespaces('%{Class}')}
@if "%{UseNamespace}" == "true"
using namespace godot;

class %{CN} : public %{Base}
{
    GODOT_CLASS(%{CN}, %{Base});
@else
class %{CN} : public godot::%{Base}
{
    GODOT_CLASS(%{CN}, godot::%{Base});
@endif
public:
    %{CN}(){}
@if "%{_enter_tree}" == "true"
    //Called when the node enters the SceneTree.
    void _enter_tree();
@endif
@if "%{_init}" == "true"
    //Called when the node is created.
    void _init();
@endif
@if "%{_ready}" == "true"
    //Called when the node is ready.
    void _ready();
@endif
@if "%{_input}" == "true"
    //Called when there is an input event. The input event propagates up through the node tree until a node consumes it.
    void _input(Ref<InputEvent> event);
@endif
@if "%{_unhandled_input}" == "true"
    //Called when an InputEvent hasn’t been consumed by _input or any GUI.
    //The input event propagates up through the node tree until a node consumes it.
    void _unhandled_input(Ref<InputEvent> event);
@endif
@if "%{_unhandled_key_input}" == "true"
    //Called when an InputEventKey hasn’t been consumed by _input or any GUI.
    //The input event propagates up through the node tree until a node consumes it.
    void _unhandled_key_input(Ref<InputEventKey> event);
@endif
@if "%{_process}" == "true"
    //Called during the processing step of the main loop.
void _process(float delta);
@endif
@if "%{_physics_process}" == "true"
    //Called during the physics processing step of the main loop.
    void _physics_process(float delta);
@endif
    static void _register_methods();

    ~%{CN}();
};
%{JS: Cpp.closeNamespaces('%{Class}')}
#endif // %{GUARD}\
