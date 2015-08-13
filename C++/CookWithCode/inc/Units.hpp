#pragma once

#include <Common.hpp>

namespace Units
{
   class Temperature
   {
      public:
         enum UnitOfTemperature
         {
            CELSIUS,
            FAHRENHEIT,
            KELVIN
         };
   };

   class Volume
   {
      public:
         enum UnitOfVolume
         {
            CUP,
            TABLESPOON,
            TEASPOON
         };
   };
}
