#include "prefix.h"
#include "titleTask.h"
#include "lwfk/lwlog.h"
#include "lwfk/lwTexture.h"
#include "lwfk/lwSprite.h"
#include "lwfk/lwRenderState.h"
#include "lwfk/lwSound.h"
#include "lwfk/lwText.h"
#include "lwfk/lwApp.h"

#include <math.h>


TitleTask gTitleTask;


TitleTask::TitleTask() {
    lwinfo("TitleTask::TitleTask()");
}


TitleTask::~TitleTask() {
    
}

void TitleTask::vStart() {
    glClearColor(0.31f, 0.69f, 0.61f, 1.0f);
    _pSprite = lw::Sprite::createFromFile("title.png", "normal");
    _pSound = lw::Sound::create("button1.wav");
    _pSound2 = lw::Sound::create("b.wav");
}

void TitleTask::vStop() {
    delete _pSprite;
    delete _pSound;
    delete _pSound2;
}


void TitleTask::vUpdate() {
    
}


void TitleTask::vDraw() {
    _pSprite->draw();
}

void TitleTask::vTouchBegan(const lw::Touch &touch) {
    lwinfo("vTouchBegan");
    if (touch.y < 480) {
        _pSound->play();
    } else {
        _pSound2->play();
    }
}

void TitleTask::vTouchMoved(const lw::Touch &touch) {
    lwinfo("vTouchMoved");
}

void TitleTask::vTouchEnded(const lw::Touch &touch)  {
    lwinfo("vTouchEnded");
}

void TitleTask::vTouchCanceled(const lw::Touch &touch)  {
   lwinfo("vTouchCanceled");
}







