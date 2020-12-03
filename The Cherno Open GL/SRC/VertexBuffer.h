#pragma once

class VertexBuffer {
private:
	unsigned int m_RendererID;
public:
	//look into constructers and destructers
	VertexBuffer(const void* data, unsigned int size);
	~VertexBuffer();

	void Bind() const;
	void Unbind() const;
};