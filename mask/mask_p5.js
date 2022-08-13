-/*
https://editor.p5js.org/krantas/sketches/IKUf43rB
*/
const modelURL = 'https://teachablemachine.withgoogle.com/models/e1JJAQxBf/';
const serialPort = 'COM6';

let classifier;
let serial;
let video;
let flippedVideo;
let label;

function preload() {
    classifier = ml5.imageClassifier(modelURL + 'model.json');
    serial = new p5.SerialPort();
}

function setup() {
    serial.open(serialPort);
    createCanvas(320, 260);
    video = createCapture(VIDEO);
    video.size(320, 240);
    video.hide();
    flippedVideo = ml5.flipImage(video);
    classifyVideo();
}

function draw() {
    background(0);
    image(flippedVideo, 0, 0);
    fill(255);
    textSize(16);
    textAlign(CENTER);
    text(label, width / 2, height - 4);
}
