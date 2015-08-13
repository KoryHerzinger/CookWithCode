#pragma once

#include <Equipment/Equipment.hpp>

namespace Equipment
{
   class Oven : public Equipment
   {
      public:
         Oven ();
         virtual ~Oven ();

         void preheat (double temperature, Units::Temperature::UnitOfTemperature);
   };
}
