#pragma once

#include <Ingredients/Ingredient.hpp>

namespace Ingredients
{
   class BrownSugar : public Ingredient
   {
      public:
         BrownSugar (double quantity, Units::Volume::UnitOfVolume unit);
         virtual ~BrownSugar ();
   };
}
