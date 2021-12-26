%%
%section1
% 
% x = [20 20];
% y = [17.5 42.5];
% plot(x,y,'b');
% xlim([0 50]);
% ylim([0 50]);
% hold;
% x = [22.5 27.5];
% y = [45 45];
% plot(x,y,'b');
% x = [30 30];
% y = [17.5 42.5];
% plot(x,y,'b');
% 
% x = [22.5 27.5];
% y = [15 15];
% plot(x,y,'b');
% 
% r = 2.5;
% a = 0: 0.001 :90;
% plot(r*cosd(a)+27.5,r*sind(a)+42.5,'b');
% 
% a = 90: 0.001 :180;
% plot(r*cosd(a)+22.5,r*sind(a)+42.5,'b');
% 
% a = 180: 0.001 :270;
% plot(r*cosd(a)+22.5,r*sind(a)+17.5,'b');
% 
% a = 270: 0.001 :360;
% plot(r*cosd(a)+27.5,r*sind(a)+17.5,'b');

%
axis([0 50 0 50])
rectangle('Position',[20 15 10 30],'Curvature',0.2,'FaceColor',[0 0 0]);
hold on;
rectangle('Position',[24 5 2 10],'FaceColor',[0.8 .8 .8]);

r = 3.5;
a = 0:1:360;


 while(true)
    fill(r*cosd(a)+25, r*sind(a)+40, [1 0 0]);
    fill(r*cosd(a)+25, r*sind(a)+30, [0.3 0.3 0]);
    fill(r*cosd(a)+25, r*sind(a)+20, [0 0.3 0]);
    pause(3);
    
    fill(r*cosd(a)+25, r*sind(a)+40, [.3 0 0]);
    fill(r*cosd(a)+25, r*sind(a)+30, [01 01 0]);
    fill(r*cosd(a)+25, r*sind(a)+20, [0 0.3 0]);
    pause(3);
    
    fill(r*cosd(a)+25, r*sind(a)+40, [.3 0 0]);
    fill(r*cosd(a)+25, r*sind(a)+30, [0.3 0.3 0]);
    fill(r*cosd(a)+25, r*sind(a)+20, [0 1 0]);
    pause(3);
end