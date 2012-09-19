<!DOCTYPE html PUBLIC "-//W3C//DTD HTML 4.01//EN" "http://www.w3.org/TR/html4/strict.dtd">
<html>
<head>
  <meta http-equiv="Content-Type" content="text/html; charset=utf-8">
  <meta http-equiv="Content-Style-Type" content="text/css">
  <title>Qt 4.7: states.pro Example File (animation/states/states.pro)</title>
  <meta name="Generator" content="Cocoa HTML Writer">
  <meta name="CocoaVersion" content="1187">
  <style type="text/css">
    p.p1 {margin: 0.0px 0.0px 0.0px 0.0px; font: 12.0px Courier}
    p.p2 {margin: 0.0px 0.0px 0.0px 0.0px; font: 12.0px Courier; min-height: 14.0px}
  </style>
</head>
<body>
<p class="p1"><span class="Apple-converted-space"> </span>SOURCES += main.cpp</p>
<p class="p1"><span class="Apple-converted-space"> </span>RESOURCES += states.qrc</p>
<p class="p2"><br></p>
<p class="p1"><span class="Apple-converted-space"> </span># install</p>
<p class="p1"><span class="Apple-converted-space"> </span>target.path = $$[QT_INSTALL_EXAMPLES]/animation/states</p>
<p class="p1"><span class="Apple-converted-space"> </span>sources.files = $$SOURCES $$HEADERS $$RESOURCES $$FORMS states.pro</p>
<p class="p1"><span class="Apple-converted-space"> </span>sources.path = $$[QT_INSTALL_EXAMPLES]/animation/states</p>
<p class="p1"><span class="Apple-converted-space"> </span>INSTALLS += target sources</p>
<p class="p2"><br></p>
<p class="p1"><span class="Apple-converted-space"> </span>symbian {</p>
<p class="p1"><span class="Apple-converted-space">     </span>TARGET.UID3 = 0xA000E3F8</p>
<p class="p1"><span class="Apple-converted-space">     </span>include($$QT_SOURCE_TREE/examples/symbianpkgrules.pri)</p>
<p class="p1"><span class="Apple-converted-space"> </span>}</p>
</body>
</html>
