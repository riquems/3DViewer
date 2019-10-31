#ifndef GLWIDGET_H
#define GLWIDGET_H

#include <QtOpenGL>
#include <QOpenGLWidget>
#include <QOpenGLExtraFunctions>

#include <model.h>
#include <light.h>

class GLWidget : public QOpenGLWidget, protected QOpenGLExtraFunctions
{
    Q_OBJECT
public:
    Light light;

    QMatrix4x4 projectionMatrix;
    QMatrix4x4 viewMatrix;

    std::shared_ptr<Model> model = nullptr;

    explicit GLWidget(QWidget *parent = nullptr);

protected:
    void initializeGL() override;
    void resizeGL(int w, int h) override;
    void paintGL() override;

signals:
    void statusBarMessage(QString);
    void enableComboShaders(bool);
public slots:
    void showFileOpenDialog();
    void changeShader(int);
};

#endif // GLWIDGET_H
