#ifdef _MSC_VER
#pragma once
#endif

#ifndef __TROUBLECODE_WIDGET_H__
#define __TROUBLECODE_WIDGET_H__

#include <QWidget>
#include "ui_TroubleCodeWidget.h"
#include "TroubleCodeModel.h"
#include "ECUPresenter.h"

namespace Ui
{
class TroubleCodeWidget;
}

class TroubleCodeWidget : public QWidget
{
  Q_OBJECT
protected:
  void changeEvent(QEvent *);
public:
  explicit TroubleCodeWidget(QWidget *parent = 0);
  void setDataContext(ECUPresenter *dataContext);
public slots:
  void updateData(const RTroubleCodeVector &tcs);
  void clear();
private:
  Ui::TroubleCodeWidget _ui;
  TroubleCodeModel _model;
  ECUPresenter *_dataContext;
};


#endif // __TROUBLECODE_WIDGET_H__
