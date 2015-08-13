#pragma once

#include <Ingredients/Ingredient.hpp>

namespace Ingredients
{
   class Flour : public Ingredient
   {
      public:
         Flour (double quantity, Units::Volume::UnitOfVolume unit);
         virtual ~Flour ();
   };
}
