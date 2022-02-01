
% axis([0 50 0 50])
% rectangle('Position',[20 15 10 30],'Curvature',0.2,'FaceColor',[0 0 0]);
% hold on;
% rectangle('Position',[24 5 2 10],'FaceColor',[0.8 .8 .8]);

r = 3.5;
a = 0:.001:360;


% while(true)
    fill(r*cosd(a)+25, r*sind(a)+40, [1 0 0]);
    fill(r*cosd(a)+25, r*sind(a)+30, [0.3 0.3 0]);
    fill(r*cosd(a)+25, r*sind(a)+20, [0 0.3 0]);
% 
%     
    fill(r*cosd(a)+25, r*sind(a)+40, [.3 0 0]);
    fill(r*cosd(a)+25, r*sind(a)+30, [01 01 0]);
    fill(r*cosd(a)+25, r*sind(a)+20, [0 0.3 0]);
%     pause(3);
    
    fill(r*cosd(a)+25, r*sind(a)+40, [.3 0 0]);
    fill(r*cosd(a)+25, r*sind(a)+30, [0.3 0.3 0]);
    fill(r*cosd(a)+25, r*sind(a)+20, [0 1 0]);
%     pause(3);