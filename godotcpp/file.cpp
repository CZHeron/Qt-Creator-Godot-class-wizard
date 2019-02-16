%{Cpp:LicenseTemplate}\
#include "%{HdrFileName}"
%{JS: Cpp.openNamespaces('%{Class}')}
void %{CN}::_init()
{

}
void %{CN}::_ready()
{

}

void %{CN}::_process(float delta)
{

}

void %{CN}::_register_methods()
{
    register_method(const_cast<char *>("_init"), &%{CN}::_init);
    register_method(const_cast<char *>("_ready"), &%{CN}::_ready);
    register_method(const_cast<char *>("_process"), &%{CN}::_process);
}
%{JS: Cpp.closeNamespaces('%{Class}')}\
