#pragma once

#include <Ingredients/Ingredient.hpp>

namespace Ingredients
{
   class VanillaExtract : public Ingredient
   {
      public:
         VanillaExtract (double quantity, Units::Volume::UnitOfVolume unit);
         virtual ~VanillaExtract ();
   };
}
