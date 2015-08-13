#pragma once

#include <Ingredients/Ingredient.hpp>

namespace Ingredients
{
   class GranulatedSugar : public Ingredient
   {
      public:
         GranulatedSugar (double quantity, Units::Volume::UnitOfVolume unit);
         virtual ~GranulatedSugar ();
   };
}
