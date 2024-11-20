# Nom du compilateur
CXX = g++

# Drapeaux de compilation
CXXFLAGS = -Wall -Werror -Wextra -g

# Nom de l'exécutable
TARGET = megaphone

# Fichiers sources
SRC = megaphone.cpp

# Fichier objet
OBJ = $(SRC:.cpp=.o)

# Règle par défaut
all: $(TARGET)

# Règle pour créer l'exécutable
$(TARGET): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $@ $^

# Règle pour créer les fichiers objets
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Nettoyer les fichiers générés
clean:
	rm -f $(OBJ) $(TARGET)

# Nettoyer et reconstruire
re: clean all

.PHONY: all clean re
