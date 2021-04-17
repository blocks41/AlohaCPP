#include <graphics.h>
#include "Enviroment.h"

enviroment_controler::enviroment_controler() {
	Width = 640;
	Height = 480;
	caption = "default";
	bk_color= 0xF8F8FF;
	paint_color= 0xDC143C;
	fill_color = 0xDDA0DD;
}
//带参构造函数
enviroment_controler::enviroment_controler(int Width_, int Height_, LPCSTR caption_, color bk_color_, color paint_color_, color fill_color_) {
	this->Width = Width_;
	this->Width = Height_;
	this->caption = caption_;
	this->bk_color = bk_color_;
	this->paint_color = paint_color_;
	this->fill_color = fill_color_;
}

void enviroment_controler::set_Width(int Width_) {
	this->Width = Width_;
}
void enviroment_controler::set_Height(int Height_) {
	this->Width = Height_;
}
void enviroment_controler::set_caption(LPCSTR caption_) {
	this->caption = caption_;
}
void enviroment_controler::set_bk_color(color bk_color_) {
	this->bk_color = bk_color_;
}
void enviroment_controler::set_paint_color(color paint_color_){
	this->paint_color = paint_color_;
}
void enviroment_controler::set_fill_color(color fill_color_) {
	this->fill_color = fill_color_;
}

void enviroment_controler::init_enviroment() {
	initgraph(Width, Height);
	setcaption(caption);
	setbkcolor(bk_color.get_color());
	setcolor(paint_color.get_color());
	setfillcolor(fill_color.get_color());
}

void enviroment_controler::close_graphic() {
	closegraph();
}

int enviroment_controler::get_Width() {
	return Width;
}
int enviroment_controler::get_Height() {
	return Height;
}
LPCSTR enviroment_controler::get_caption() {
	return caption;
}
color_t enviroment_controler::get_bk_color() {
	return bk_color.get_color();
}
color_t enviroment_controler::get_paint_color() {
	return paint_color.get_color();
}
color_t enviroment_controler::get_fill_color() {
	return fill_color.get_color();
}