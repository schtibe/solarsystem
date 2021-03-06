#ifndef __SHADER_HPP

#define __SHADER_HPP

#include <string>
#include <GL/gl.h>
#include <stdexcept>

using std::string;
using std::logic_error;

class Shader {
	public:
		Shader(string vert_shader_file, string frag_shader_file);
		Shader(string vert_shader_file, string frag_shader_file, string geom_shader_file);

		GLuint program;

	protected:
		string loadShaderFile(string file);
		void compileShader(GLuint shaderID, string shader_code);
		GLboolean checkShader(GLuint, string shader_file);
		GLboolean checkProgram(GLuint);
};

/*
class Shader {
	public:
		static GLuint loadShaders(string vertexShaderFile, string fragmentShaderFile);
		static GLuint generateShaders(string vertexShader, string fragmentShader);

	private:
		static string loadShaderFile(string file);
		static void compileShader(GLuint shaderID, string shaderCode);
};
*/

#endif /* end of include guard: __SHADER_HPP */
