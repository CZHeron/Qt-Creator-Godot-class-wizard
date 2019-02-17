%{Cpp:LicenseTemplate}\
#include "%{HdrFileName}"
%{JS: Cpp.openNamespaces('%{Class}')}
@if "%{_enter_tree}" == "true"
void %{CN}::_enter_tree()
{

}

@endif
@if "%{_init}" == "true"
void %{CN}::_init()
{

}

@endif
@if "%{_ready}" == "true"
void %{CN}::_ready()
{

}

@endif
@if "%{_input}" == "true"
void %{CN}::_input(Ref<InputEvent> event)
{

}

@endif
@if "%{_unhandled_input}" == "true"
void %{CN}::_unhandled_input(Ref<InputEvent> event)
{

}

@endif
@if "%{_unhandled_key_input}" == "true"
void %{CN}::_unhandled_key_input(Ref<InputEventKey> event)
{

}

@endif
@if "%{_process}" == "true"
void %{CN}::_process(float delta)
{

}

@endif
@if "%{_physics_process}" == "true"
void %{CN}::_physics_process(float delta)
{

}

@endif
void %{CN}::_register_methods()
{
    register_method(const_cast<char *>("_init"), &%{CN}::_init);
    register_method(const_cast<char *>("_ready"), &%{CN}::_ready);
    register_method(const_cast<char *>("_process"), &%{CN}::_process);
}

%{CN}::~%{CN}()
{

}
%{JS: Cpp.closeNamespaces('%{Class}')}\
