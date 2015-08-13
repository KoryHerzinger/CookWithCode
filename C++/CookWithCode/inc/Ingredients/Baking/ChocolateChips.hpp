#pragma once

#include <Ingredients/Ingredient.hpp>

namespace Ingredients
{
   class ChocolateChips : public Ingredient
   {
      public:
         ChocolateChips (double quantity, Units::Volume::UnitOfVolume unit);
         virtual ~ChocolateChips ();
   };
}
