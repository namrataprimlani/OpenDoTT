let capture;
let checkbox1;

var x;
var y;

var videoX = 400;
var videoY = 300;
var img;



function preload(){
  img = loadImage('libraries/assets/video.png');
 
}


function mouseDragged()
{
  //if ((mouseX > videoX - 50) && (mouseX < videoX + 50)) {
   //if ((mouseY > videoY - 50) && (mouseY < videoY + 50)) {
      videoX = mouseX;
      videoY = mouseY;
    //}
  //}
}



function setup() {
  
  createCanvas(710, 400);
  
  //pg = createGraphics(400, 250);
  capture = createCapture(VIDEO);
  capture.size(320, 240);
  
  //createCanvas(720, 400);
  
  //capture.hide();
  
//createCanvas(200, 200);
  //background("beige");
  //checkbox1 = createCheckbox("Video Capture");
}

function draw() {
  
  background(220);
  
  fill('black')
  rect(150, 280, 100, 130)
  fill('white')
  text('IoT Thing', 180, 350, 50)
  
 fill(0, 12);
 rect(0, 0, 320, 240);
 fill(255);
 noStroke();
 
 
 
 image(img, videoX, videoY, 50, 50);
  
 // pg.background(51);
 // pg.noFill();
 
 
  
  if ((videoX > 150) && (videoX < 210)) {
    if ((videoY > 300) && (videoY < 400)) {
      fill(0);
      text("Video", 100, 100);
      image(capture, 0, 0, 320, 240);
    }
  }
  else {capture.hide();}
  
}
  
  //if (checkbox1.checked()) {
    //text("VIDEO ON", 20, 40)
