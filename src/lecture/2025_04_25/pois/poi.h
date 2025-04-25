#ifndef POI_H
#define POI_H

#include <string>
struct PointOfInterest {
    std::string name;
    std::string description;
    int fee;

    /// Default-Konstruktor
    PointOfInterest()
        : name { "" }
        , description { "" }
        , fee { 0 }
    {
    }

    PointOfInterest(std::string name_)
        : name { name_ }
        , description { "" }
        , fee { 0 }
    {
    }

    PointOfInterest(std::string name_, std::string description_, int fee_)
        : name { name_ }
        , description { description_ }
        , fee { fee_ }
    {
    }

    // Das obige entspricht ungefähr:
    // PointOfInterest()
    // {
    //     name = "";
    //     description = "";
    //     fee = 0;
    // }

    void set_name(std::string name)
    {
        this->name = name;
    }
};

#endif
