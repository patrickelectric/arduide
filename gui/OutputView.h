/**
 * \file OutputView.h
 * \author Denis Martinez
 */

#ifndef OUTPUTVIEW_H
#define OUTPUTVIEW_H

#include <QTextBrowser>

#include "../env/ILogger.h"

#include "IDEGlobal.h"

class IDE_EXPORT OutputView : public QTextBrowser, public ILogger
{
    Q_OBJECT
public:
    OutputView(QWidget *parent = NULL);

public slots:
    void log(const QString &text);
    void logImportant(const QString &text);
    void logError(const QString &text);
    void logCommand(const QString &command);
    void logCommand(const QStringList &command);
};

#endif // OUTPUTVIEW_H
