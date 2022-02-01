function varargout = SmilySad(varargin)
% SmilySad MATLAB code for SmilySad.fig
%      SmilySad, by itself, creates a new SmilySad or raises the existing
%      singleton*.
%
%      H = SmilySad returns the handle to a new SmilySad or the handle to
%      the existing singleton*.
%
%      SmilySad('CALLBACK',hObject,eventData,handles,...) calls the local
%      function named CALLBACK in SmilySad.M with the given input arguments.
%
%      SmilySad('Property','Value',...) creates a new SmilySad or raises the
%      existing singleton*.  Starting from the left, property value pairs are
%      applied to the SmilySad before SmilySad_OpeningFcn gets called.  An
%      unrecognized property name or invalid value makes property application
%      stop.  All inputs are passed to SmilySad_OpeningFcn via varargin.
%
%      *See SmilySad Options on GUIDE's Tools menu.  Choose "SmilySad allows only one
%      instance to run (singleton)".
%
% See also: GUIDE, GUIDATA, GUIHANDLES

% Edit the above text to modify the response to help SmilySad

% Last Modified by GUIDE v2.5 01-Jan-2022 13:30:00

% Begin initialization code - DO NOT EDIT
gui_Singleton = 1;
gui_State = struct('gui_Name',       mfilename, ...
                   'gui_Singleton',  gui_Singleton, ...
                   'gui_OpeningFcn', @SmilySad_OpeningFcn, ...
                   'gui_OutputFcn',  @SmilySad_OutputFcn, ...
                   'gui_LayoutFcn',  [] , ...
                   'gui_Callback',   []);
if nargin && ischar(varargin{1})
    gui_State.gui_Callback = str2func(varargin{1});
end

if nargout
    [varargout{1:nargout}] = gui_mainfcn(gui_State, varargin{:});
else
    gui_mainfcn(gui_State, varargin{:});
end
% End initialization code - DO NOT EDIT


% --- Executes just before SmilySad is made visible.
function SmilySad_OpeningFcn(hObject, eventdata, handles, varargin)

global counter;
counter = 0;
global A;
A = imread('Test.jpg');
%imshow();

global flag;
flag = 0;
% This function has no output args, see OutputFcn.
% hObject    handle to figure
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)
% varargin   command line arguments to SmilySad (see VARARGIN)

% Choose default command line output for SmilySad
handles.output = hObject;

% Update handles structure
guidata(hObject, handles);

% UIWAIT makes SmilySad wait for user response (see UIRESUME)
% uiwait(handles.figure1);


% --- Outputs from this function are returned to the command line.
function varargout = SmilySad_OutputFcn(hObject, eventdata, handles) 
% varargout  cell array for returning output args (see VARARGOUT);
% hObject    handle to figure
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Get default command line output from handles structure
varargout{1} = handles.output;


% --- Executes on button press in pushbutton1.
function pushbutton1_Callback(hObject, eventdata, handles)
    global counter;
    counter = counter + 1;
    set(handles.T , 'String' , counter);
% hObject    handle to pushbutton1 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)


% --- Executes on button press in Decreament.
function Decreament_Callback(hObject, eventdata, handles)
    global counter;
    counter = counter - 1;
    set(handles.T , 'String' , counter);

% hObject    handle to Decreament (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)


% --- Executes on button press in pushbutton3.
function pushbutton3_Callback(hObject, eventdata, handles)
global A;
Tmp = get(handles.Input_Num,'String');
Tmp = Tmp - '0';
flag = uint8(0);
if length(Tmp) == 2
    if Tmp(1) >= 6
        flag = 1
    end
elseif length(Tmp)> 2
    flag = 1;
    
end

if flag == 1
end
axes(handles.Imag);
 
imshow(A);
% hObject    handle to pushbutton3 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)



function Input_Num_Callback(hObject, eventdata, handles)
% hObject    handle to Input_Num (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of Input_Num as text
%        str2double(get(hObject,'String')) returns contents of Input_Num as a double


% --- Executes during object creation, after setting all properties.
function Input_Num_CreateFcn(hObject, eventdata, handles)
% hObject    handle to Input_Num (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end
