#include "Recipe.hpp"

Recipe::Recipe (const char* name, const char* category, const char* author, const char* url)
{
   Recipe (std::string (name), std::string (category), std::string (author), std::string (url));
}

Recipe::Recipe (std::string& name, std::string& category, std::string& author, std::string& url)
   : recipeName (name), recipeCategory (category), recipeAuthor (author), recipeURL (url)
{
}

Recipe::~Recipe ()
{
}
