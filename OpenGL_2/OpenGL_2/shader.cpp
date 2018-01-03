/*图形管线：
1.顶点着色(vertex shading)
接收顶点缓存对象中给出的顶点数据，独立处理每个顶点
2.细分着色（tessellation shading）
接收顶点着色阶段的输出数据，并且对收到的顶点进行下一步处理。它会在管线内部生产一个新的几何体。
细分控制着色器（控制着色器），细分赋值（着色器）
3.几何着色(geometry shading)
接收来自顶点着色阶段完成几何图元的顶点处理之后，也可能来自细分着色阶段生成的图元数据。它会在管线内部对所有几何图元进行修改。
这个阶段会作用于每一个独立的几何图元。可以选择从输入图元中选择生成更多的几何体，改变图元的类型，或者放弃所有的几何体。
4.片元着色（fragment shading）
处理光栅化之后生成的独立片元（如果是采样着色，就是采样数据）。计算一个片元的颜色和深度值，然后传递到管线的片元测试和混合模块。
*/
//
#version 330 core
void main()
{
	
	int i = 1500;/*所有变量必须在声明的同时进行初始化 
				 all element must inital when define
				 */
	mat3 L = mat3(4.0); /*矩阵初始化 matrix inital
				(
				 4.0 0.0 0.0
				 0.0 4.0 0.0 
				 0.0 0.0 4.0
				)
				传入的数据首先填充列，然后填充行
				*/
	mat3 M = mat3(1.0, 2.0, 3.0
		4.0, 5.0, 6.0
		7.0, 8.0, 9.0
	);
	
	/*
	M(1.0 4.0 7.0
	  2.0 5.0 8.0
	  3.0 6.0 9.0
	  )
	  */

	vec3 column1 = (1.0, 2.0, 3.0);
	vec3 column2 = (4.0, 5.0, 6.0);
	vec3 column3 = (7.0, 8.0, 9.0);

	mat3 X = mat3(column1,column2,column3);

	/*
	X(1.0 4.0 7.0
	2.0 5.0 8.0
	3.0 6.0 9.0
	)
	*/

	vec3 C = X[2];/*get the second column of matrix X
				  得到矩阵X的第二列*/


}