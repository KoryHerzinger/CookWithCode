#pragma once

#include <Equipment/Equipment.hpp>

namespace Equipment
{
   class StandMixer : public Equipment
   {
      public:
         enum Speed
         {
            LOW_SPEED,
            MEDIUM_LOW_SPEED,
            MEDIUM_SPEED,
            MEDIUM_HIGH_SPEED,
            HIGH_SPEED
         };

      public:
         StandMixer ();
         virtual ~StandMixer ();

         // Add an ingredient to the stand mixer
         void addIngredient (Ingredients::Ingredient ingredient);
         // Start the stand mixer at the specified speed
         void start (Speed speed);

      protected:
   };
}
