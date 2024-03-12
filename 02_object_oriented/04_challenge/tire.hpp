#include <string>

enum class Type{
            summer,
            winter,
            allseason
        };

class Tire{
    public:
        Tire(int size, Type type);

        int getTireSize();

    private:
        int size;
        Type type;
};
