%%
%section1

x = [-.982 -.75 -0.5 0.5 .75 .982];
y = [1.09 3 2.5 2.5 3 1.09];
plot(x,y,'b');
xlim([-7.5 7.5]);
ylim([-5 5]);
hold;

r = 1.5;
a = 190/180*pi: 0.001 :290/180 *pi;
plot(r*cos(a)-1.5,r*sin(a)+2.5,'b');

r = 1.5;
a = 250/180*pi: 0.001 :350/180 *pi;
plot(r*cos(a)+1.5,r*sin(a)+2.5,'b');

r = 7;
a = 115: 0.001 : 236;
plot(r*cosd(a),5/7*r/2*sind(a),'b');

r = 7;
a = 304: 0.001 : 360+65;
plot(r*cosd(a),5/7*r/2*sind(a),'b');


r = 1;
a = 5: 0.001 : 167;
plot(r*cosd(a)-3,r*sind(a)-2.85+0.5,'b');

r = 1;
a = 13: 0.001 : 175;
plot(r*cosd(a)+3,r*sind(a)-2.85+0.5,'b');

r = 1;
a = -10: 0.001 : 170;
plot(r*cosd(a)-1,r*sind(a)-2.5,'b');

r = 1;
a = 10: 0.001 : 190;
plot(r*cosd(a)+1,r*sind(a)-2.5,'b');