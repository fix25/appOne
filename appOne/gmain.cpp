#include"libOne.h"
float x = width / 2;
float y = 540;
float vx = 10;
//float angle = 3;
void gmain() {
	window(1920, 1080, full);
	while (notQuit) {
		clear(70);
		fill(255);
		strokeWeight(20);
		rectMode(CENTER);
		x += vx;
		if (x > width - 150 || x <= 150) {
			x += -vx;
		}
		rect(x, y, 300, 300);
		circle(x, y, 300);
		line(960, 0, x, y);
	}
}
/*void roundFace(float px, float py) {
	fill(255, 255, 0);
	circle(px, py, 300);
    fill(255);
	circle(px - 50, py, 80);
	circle(px + 50, py, 80);
	fill(0);
	circle(px - 50, py, 30);
	circle(px + 50, py, 30);
	fill(255, 200, 200);
	circle(px, py + 80, 80);
}
void squareFace(float px, float py, float angle) {
	rectMode(CENTER);
	fill(255, 255, 0);
	rect(px, py, 300, 300, angle);
	fill(255);
	rect(px - 50, py, 80, 80, angle);
	rect(px + 50, py, 80, 80, angle);
	fill(0);
	rect(px - 50, py, 30, 30, angle);
	rect(px + 50, py, 30, 30, angle);
	fill(255, 200, 200);
	rect(px, py + 80, 80, 80, angle);
}
void gmain() {
	window(1920, 1080, full);
	float px = width / 2;
	float py = height / 2;
	float angle = 0;
	float ofsX = 100;
	float ofsY = 100;
	int sw = 1;
	strokeWeight(0);
	while (notQuit) {
		ofsX = width / 2 - mouseX;
		ofsY = height / 2 - mouseY;
		if (isTrigger(KEY_SPACE)) { sw = 1 - sw; }
		angle += 0.01f;
		clear(60, 120, 240);
		for (int i = -5; i <= 5; i++) {
			if (sw == 1) {
				roundFace(px+ofsX*i, py+ ofsY*i);
			}
			else {
				squareFace(px+ofsX*i, py+ ofsY*i, angle);
			}
		}
	}
}
/*#include"libOne.h"
void gmain() {
	window(1920, 1080, full);
	//データ
	struct COLOR green = { 0,255,0 };
	struct COLOR yellow = { 255,255,0 };
	struct COLOR red = {255,0,0 };
	struct COLOR color = green;

	int hpMax = 500;
	int hp = hpMax;
	int hpWarning = hpMax * 0.5f;
	int hpDanger = hpMax * 0.1f;
	float px = 700;
	float py = 200;
	float h = 60;
	while (notQuit) {
		if (isTrigger(KEY_SPACE)) { hp = hpMax; }
		if (hp > 0) { hp -= 2; }
		if (hp > hpWarning) {
			color = green;
		}
		else if (hp > hpDanger) {
			color = yellow;
		}
		else {
			color = red;
		}
		clear(74, 84, 89);
		fill(128);
		rect(px, py, hpMax, h);
		fill(color);
		rect(px, py, hp, h);
		if (hp <= 0) {
			textSize(100);
			fill(255, 0, 0);
			text("Game Over", 700, 400);
		}
	}
}*/
/*#include"libOne.h"
void gmain() {
	window(1920, 1080, full);
	int life = 5;
	float px = 700;
	float py = 200;
	float radius = 50;
	float space = 100;
	strokeWeight(0);
	while (notQuit) {
		if (isTrigger(KEY_A)) { life--; }
		if (isTrigger(KEY_D)) { life++; }

		clear(74, 84, 89);
		print((let)"life=" + life);

		//whileバージョン
		int i = 0;
		fill(255, 0, 0);
		while (i < life) {
			float offsetX = space * i;
			circle(px + offsetX, py, radius * 2);
			i++;
		}

		//forバージョン
		fill(0, 0, 255);
		for (i = 0; i < life; i++) {
			float offsetX = space * i;
			float offsetY = space * 2;
			circle(px + offsetX, py + offsetY, radius * 2);
		}
	
	}
}*/
/*
#include"libOne.h"
void gmain() {
	window(1920, 1080, full);
	float px = 1920 / 2;
	float py = 1080 / 2;
	float vx = 10;
	float radius = 150;
	float len = radius / 1.4142f * 2;
	float angle = 0;
	float angleSpeed = 0.03f;
	while (notQuit) {
		px += vx;
		angle += angleSpeed;
		if (px < 150 || px > 1770) {
			vx = -vx;
			angleSpeed = -angleSpeed;
		}
		clear(60);
		circle(px, py, radius * 2);
		rectMode(CENTER);
		rect(px, py, len, len, angle);
		line(px, 0, px, py);
	}
}*/