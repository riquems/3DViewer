#ifndef MATERIAL_H
#define MATERIAL_H

#include <QVector4D>

class Material
{
public:
    Material();

    QVector4D ambient = QVector4D(0.02f, 0.02f, 0.02f, 1.0f);
    QVector4D diffuse = QVector4D(0.7f, 0.7f, 0.8f, 1.0f);
    QVector4D specular = QVector4D(1.0f, 1.0f, 1.0f, 1.0f);

    float shininess = 20.0f;
};

#endif // MATERIAL_H
