/*
    This file is part of ef.qt.
    Copyright (C) 2019 ClassicOldSong
    Copyright (C) 2019 ReimuNotMoe

    This program is free software: you can redistribute it and/or modify
    it under the terms of the MIT License.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
*/

#include <QApplication>
#include "ef.hpp"

int main(int argc, char **argv) {
	QApplication app(argc, argv);

	auto mw = new ef::ui::MainWindow;

	mw->$methods.text_changed = [](ef::ui::MainWindow& state, const QString& str){
		if (str.isEmpty())
			state.$data.name = "World";
		else
			state.$data.name = str;
	};

	mw->show();

	return app.exec();
}
