#ifndef CMD_ANSWERLIST_HANDLER_H
#define CMD_ANSWERLIST_HANDLER_H

#include <iserver.h>

class CmdAnswerListHandler : public ICmdHandler {
	
	public:
		CmdAnswerListHandler();
		virtual QString cmd();
		virtual bool accessUnauthorized();
		virtual bool accessUser();
		virtual bool accessTester();
		virtual bool accessAdmin();
		virtual const QVector<CmdInputDef> &inputs();
		virtual QString description();
		virtual QStringList errors();
		virtual void handle(QWebSocket *pClient, IWebSocketServer *pWebSocketServer, QJsonObject obj);
	private:
		QVector<CmdInputDef> m_vInputs;
};

#endif // CMD_ANSWERLIST_HANDLER_H