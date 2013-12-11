// Copyright (C) 2013 July IGHOR.
// I want to create trading application that can be configured for any rule and strategy.
// If you want to help me please Donate: 1d6iMwjjNo8ZGYeJBZKXgcgVk9o7fXcjc
// For any questions please use contact form https://sourceforge.net/projects/bitcointrader/
// Or send e-mail directly to julyighor@gmail.com
//
// You may use, distribute and copy the Qt Bitcion Trader under the terms of
// GNU General Public License version 3

#ifndef EXCHANGEMTGOX_H
#define EXCHANGEMTGOX_H

#include <QThread>
#include <QHttp>

class ExchangeMtGox : public QThread
{
	Q_OBJECT

public:
	ExchangeMtGox(QObject *parent);
	~ExchangeMtGox();

private:
	QHttp *http;
	void run();
private slots:
	void httpDone(bool);
};

#endif // EXCHANGEMTGOX_H
