%{Cpp:LicenseTemplate}\
#ifndef %{GUARD}
#define %{GUARD}

#include <core/Godot.hpp>
#include <gen/%{Base}.hpp>
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
%{CN}(){};
    //Called when the node is created
    void _init();

    //Called when the node is ready
    void _ready();

    //Called during the processing step of the main loop
    void _process(float delta);

    static void _register_methods();
};
%{JS: Cpp.closeNamespaces('%{Class}')}
#endif // %{GUARD}\
