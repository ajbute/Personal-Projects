#pragma once

#include <glad/glad.h>
#include "vboClass/vboClass.h"

class vaoClass {
public:
	// ID reference for the Vertex Array Object
	GLuint ID;
	// Constructor that generates a VAO ID
	vaoClass();

	// Links a VBO to the VAO using a certain layout
	void LinkVBO(vboClass& VBO, GLuint layout);
	// Binds the VAO
	void Bind();
	// Unbinds the VAO
	void Unbind();
	// Deletes the VAO
	void Delete();
};