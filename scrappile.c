/*

bool loadTexture(const char * filename) {
    unsigned char header[54];
    unsigned char* data;
    int dataPos;
    int width;
    int height;
    int imageSize;

    FILE * file = fopen(filename, "rb");
    if (!file) return false;
    if (fread(header, 1, 54, file) != 54) return false;
    if (header[0] != 'B' || header[1] != 'M') return false;

    dataPos = * (int*) & (header[0x0A]);
    imageSize = * (int*) & (header[0x22]);
    width = *(int*) & (header[0x12]);
    height = * (int*) & (header[0x16]);

    if (imageSize == 0) imageSize = width*height * 3;
    if (dataPos == 0) dataPos = 54;

    data = new unsigned char[imageSize];
    fread(data, 1, imageSize, file);
    fclose(file);

    glGenTextures(1, &texture);
    glBindTexture(GL_TEXTURE_2D, texture);
    glTexImage2D(GL_TEXTURE_2D, 0, GL_RGB,width,height,0, GL_RGB, GL_UNSIGNED_BYTE, data);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_NEAREST);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_NEAREST);
    return true;

}


void drawPoints() {
    glBegin(GL_POINTS);

    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(0.1f, -0.6f);
    glVertex2f(0.7f, -0.6f);
    glVertex2f(0.4f, -0.1f);

    glEnd();
}

void drawLines() {
    glBegin(GL_LINES);

    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(0.1f, -0.6f);
    glVertex2f(0.7f, -0.6f);
    
    glVertex2f(0.7f, -0.6f);
    glVertex2f(0.4f, -0.1f);

    glEnd();
}

void drawSolidTriangle() {
    glBegin(GL_TRIANGLES);

    glColor3f(0.0f,0.0f,1.0f);
    glVertex2f(0.1f, -0.6f);
    glVertex2f(0.7f, -0.6f);
    glVertex2f(0.4f, -0.1f);

    glEnd();
}

void drawGradientTriangle() {
    glBegin(GL_TRIANGLES);

    glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.3f, -0.4f);

    glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.9f, -0.4f);

    glColor3f(0.0f,0.0f, 1.0f);
    glVertex2f(0.6f, -0.9f);

    glEnd();
}

void drawQuad(){
    glBegin(GL_QUADS);

    glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.1f, -0.1f);
    glVertex2f(0.1f, -0.6f);
    glVertex2f(0.6f, -0.6f);
    glVertex2f(0.6f, -0.1f);

    glEnd();
}

void drawTexture() {
    glBindTexture(GL_TEXTURE_2D, texture);
    glBegin(GL_QUADS);
    glTexCoord2d(0.0, 0.0); glVertex2d(0.0, 0.0);
    glTexCoord2d(1.0, 0.0); glVertex2d(0.5, 0.0);
    glTexCoord2d(1.0, 1.0); glVertex2d(0.5, 0.5);
    glTexCoord2d(0.0, 1.0); glVertex2d(0.0, 0.5);
    glEnd();
}

    //drawPoints();
    //drawLines();
    //drawSolidTriangle();
    //drawGradientTriangle();
    //drawQuad();



*/