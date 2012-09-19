<!DOCTYPE html PUBLIC "-//W3C//DTD HTML 4.01//EN" "http://www.w3.org/TR/html4/strict.dtd">
<html>
<head>
  <meta http-equiv="Content-Type" content="text/html; charset=utf-8">
  <meta http-equiv="Content-Style-Type" content="text/css">
  <title>Qt 4.7: main.cpp Example File (animation/states/main.cpp)</title>
  <meta name="Generator" content="Cocoa HTML Writer">
  <meta name="CocoaVersion" content="1187">
  <style type="text/css">
    p.p1 {margin: 0.0px 0.0px 0.0px 0.0px; font: 12.0px Courier}
    p.p2 {margin: 0.0px 0.0px 0.0px 0.0px; font: 12.0px Courier; min-height: 14.0px}
    p.p3 {margin: 0.0px 0.0px 0.0px 0.0px; font: 12.0px Courier; color: #0000ee}
    p.p4 {margin: 0.0px 0.0px 12.0px 0.0px; font: 12.0px Times; min-height: 14.0px}
    span.s1 {text-decoration: underline ; color: #0000ee}
    span.s2 {color: #000000}
    span.s3 {text-decoration: underline}
  </style>
</head>
<body>
<p class="p1">/****************************************************************************</p>
<p class="p1"><span class="Apple-converted-space"> </span>**</p>
<p class="p1"><span class="Apple-converted-space"> </span>** Copyright (C) 2011 Nokia Corporation and/or its subsidiary(-ies).</p>
<p class="p1"><span class="Apple-converted-space"> </span>** All rights reserved.</p>
<p class="p1"><span class="Apple-converted-space"> </span>** Contact: Nokia Corporation (qt-info@nokia.com)</p>
<p class="p1"><span class="Apple-converted-space"> </span>**</p>
<p class="p1"><span class="Apple-converted-space"> </span>** This file is part of the QtCore module of the Qt Toolkit.</p>
<p class="p1"><span class="Apple-converted-space"> </span>**</p>
<p class="p1"><span class="Apple-converted-space"> </span>** $QT_BEGIN_LICENSE:BSD$</p>
<p class="p1"><span class="Apple-converted-space"> </span>** You may use this file under the terms of the BSD license as follows:</p>
<p class="p1"><span class="Apple-converted-space"> </span>**</p>
<p class="p1"><span class="Apple-converted-space"> </span>** "Redistribution and use in source and binary forms, with or without</p>
<p class="p1"><span class="Apple-converted-space"> </span>** modification, are permitted provided that the following conditions are</p>
<p class="p1"><span class="Apple-converted-space"> </span>** met:</p>
<p class="p1"><span class="Apple-converted-space"> </span>** <span class="Apple-converted-space">  </span>* Redistributions of source code must retain the above copyright</p>
<p class="p1"><span class="Apple-converted-space"> </span>** <span class="Apple-converted-space">    </span>notice, this list of conditions and the following disclaimer.</p>
<p class="p1"><span class="Apple-converted-space"> </span>** <span class="Apple-converted-space">  </span>* Redistributions in binary form must reproduce the above copyright</p>
<p class="p1"><span class="Apple-converted-space"> </span>** <span class="Apple-converted-space">    </span>notice, this list of conditions and the following disclaimer in</p>
<p class="p1"><span class="Apple-converted-space"> </span>** <span class="Apple-converted-space">    </span>the documentation and/or other materials provided with the</p>
<p class="p1"><span class="Apple-converted-space"> </span>** <span class="Apple-converted-space">    </span>distribution.</p>
<p class="p1"><span class="Apple-converted-space"> </span>** <span class="Apple-converted-space">  </span>* Neither the name of Nokia Corporation and its Subsidiary(-ies) nor</p>
<p class="p1"><span class="Apple-converted-space"> </span>** <span class="Apple-converted-space">    </span>the names of its contributors may be used to endorse or promote</p>
<p class="p1"><span class="Apple-converted-space"> </span>** <span class="Apple-converted-space">    </span>products derived from this software without specific prior written</p>
<p class="p1"><span class="Apple-converted-space"> </span>** <span class="Apple-converted-space">    </span>permission.</p>
<p class="p1"><span class="Apple-converted-space"> </span>**</p>
<p class="p1"><span class="Apple-converted-space"> </span>** THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS</p>
<p class="p1"><span class="Apple-converted-space"> </span>** "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT</p>
<p class="p1"><span class="Apple-converted-space"> </span>** LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR</p>
<p class="p1"><span class="Apple-converted-space"> </span>** A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT</p>
<p class="p1"><span class="Apple-converted-space"> </span>** OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,</p>
<p class="p1"><span class="Apple-converted-space"> </span>** SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT</p>
<p class="p1"><span class="Apple-converted-space"> </span>** LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,</p>
<p class="p1"><span class="Apple-converted-space"> </span>** DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY</p>
<p class="p1"><span class="Apple-converted-space"> </span>** THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT</p>
<p class="p1"><span class="Apple-converted-space"> </span>** (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE</p>
<p class="p1"><span class="Apple-converted-space"> </span>** OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE."</p>
<p class="p1"><span class="Apple-converted-space"> </span>** $QT_END_LICENSE$</p>
<p class="p1"><span class="Apple-converted-space"> </span>**</p>
<p class="p1"><span class="Apple-converted-space"> </span>****************************************************************************/</p>
<p class="p2"><br></p>
<p class="p1"><span class="Apple-converted-space"> </span>#include &lt;QtGui&gt;</p>
<p class="p2"><br></p>
<p class="p1"><span class="Apple-converted-space"> </span>class Pixmap : public <a href="file:///Users/ulrichknorzer/Development/playground/workflowtest/qgraphicsobject.html"><span class="s1">QGraphicsObject</span></a></p>
<p class="p1"><span class="Apple-converted-space"> </span>{</p>
<p class="p1"><span class="Apple-converted-space">     </span>Q_OBJECT</p>
<p class="p1"><span class="Apple-converted-space"> </span>public:</p>
<p class="p1"><span class="Apple-converted-space">     </span>Pixmap(const <a href="file:///Users/ulrichknorzer/Development/playground/workflowtest/qpixmap.html"><span class="s1">QPixmap</span></a> &amp;pix) : <a href="file:///Users/ulrichknorzer/Development/playground/workflowtest/qgraphicsobject.html"><span class="s1">QGraphicsObject</span></a>(), p(pix)</p>
<p class="p1"><span class="Apple-converted-space">     </span>{</p>
<p class="p1"><span class="Apple-converted-space">     </span>}</p>
<p class="p2"><br></p>
<p class="p1"><span class="Apple-converted-space">     </span>void paint(<a href="file:///Users/ulrichknorzer/Development/playground/workflowtest/qpainter.html"><span class="s1">QPainter</span></a> *painter, const <a href="file:///Users/ulrichknorzer/Development/playground/workflowtest/qstyleoptiongraphicsitem.html"><span class="s1">QStyleOptionGraphicsItem</span></a> *, <a href="file:///Users/ulrichknorzer/Development/playground/workflowtest/qwidget.html"><span class="s1">QWidget</span></a> *)</p>
<p class="p1"><span class="Apple-converted-space">     </span>{</p>
<p class="p1"><span class="Apple-converted-space">         </span>painter-&gt;drawPixmap(<a href="file:///Users/ulrichknorzer/Development/playground/workflowtest/qpointf.html"><span class="s1">QPointF</span></a>(), p);</p>
<p class="p1"><span class="Apple-converted-space">     </span>}</p>
<p class="p2"><br></p>
<p class="p1"><span class="Apple-converted-space">     </span><a href="file:///Users/ulrichknorzer/Development/playground/workflowtest/qrectf.html"><span class="s1">QRectF</span></a> boundingRect() const</p>
<p class="p1"><span class="Apple-converted-space">     </span>{</p>
<p class="p1"><span class="Apple-converted-space">         </span>return <a href="file:///Users/ulrichknorzer/Development/playground/workflowtest/qrectf.html"><span class="s1">QRectF</span></a>( <a href="file:///Users/ulrichknorzer/Development/playground/workflowtest/qpointf.html"><span class="s1">QPointF</span></a>(0, 0), p.size());</p>
<p class="p1"><span class="Apple-converted-space">     </span>}</p>
<p class="p2"><br></p>
<p class="p1"><span class="Apple-converted-space"> </span>private:</p>
<p class="p1"><span class="Apple-converted-space">     </span><a href="file:///Users/ulrichknorzer/Development/playground/workflowtest/qpixmap.html"><span class="s1">QPixmap</span></a> p;</p>
<p class="p1"><span class="Apple-converted-space"> </span>};</p>
<p class="p2"><br></p>
<p class="p1"><span class="Apple-converted-space"> </span>int main(int argc, char *argv[])</p>
<p class="p1"><span class="Apple-converted-space"> </span>{</p>
<p class="p1"><span class="Apple-converted-space">     </span>Q_INIT_RESOURCE(states);</p>
<p class="p2"><br></p>
<p class="p1"><span class="Apple-converted-space">     </span><a href="file:///Users/ulrichknorzer/Development/playground/workflowtest/qapplication.html"><span class="s1">QApplication</span></a> app(argc, argv);</p>
<p class="p2"><br></p>
<p class="p1"><span class="Apple-converted-space">     </span>// Text edit and button</p>
<p class="p1"><span class="Apple-converted-space">     </span><a href="file:///Users/ulrichknorzer/Development/playground/workflowtest/qtextedit.html"><span class="s1">QTextEdit</span></a> *edit = new <a href="file:///Users/ulrichknorzer/Development/playground/workflowtest/qtextedit.html"><span class="s1">QTextEdit</span></a>;</p>
<p class="p1"><span class="Apple-converted-space">     </span>edit-&gt;setText("asdf lkjha yuoiqwe asd iuaysd u iasyd uiy "</p>
<p class="p1"><span class="Apple-converted-space">                   </span>"asdf lkjha yuoiqwe asd iuaysd u iasyd uiy "</p>
<p class="p1"><span class="Apple-converted-space">                   </span>"asdf lkjha yuoiqwe asd iuaysd u iasyd uiy "</p>
<p class="p1"><span class="Apple-converted-space">                   </span>"asdf lkjha yuoiqwe asd iuaysd u iasyd uiy!");</p>
<p class="p2"><br></p>
<p class="p3"><span class="s2"><span class="Apple-converted-space">     </span><a href="file:///Users/ulrichknorzer/Development/playground/workflowtest/qpushbutton.html"><span class="s3">QPushButton</span></a> *button = new <a href="file:///Users/ulrichknorzer/Development/playground/workflowtest/qpushbutton.html"><span class="s3">QPushButton</span></a>;</span></p>
<p class="p3"><span class="s2"><span class="Apple-converted-space">     </span><a href="file:///Users/ulrichknorzer/Development/playground/workflowtest/qgraphicsproxywidget.html"><span class="s3">QGraphicsProxyWidget</span></a> *buttonProxy = new <a href="file:///Users/ulrichknorzer/Development/playground/workflowtest/qgraphicsproxywidget.html"><span class="s3">QGraphicsProxyWidget</span></a>;</span></p>
<p class="p1"><span class="Apple-converted-space">     </span>buttonProxy-&gt;setWidget(button);</p>
<p class="p3"><span class="s2"><span class="Apple-converted-space">     </span><a href="file:///Users/ulrichknorzer/Development/playground/workflowtest/qgraphicsproxywidget.html"><span class="s3">QGraphicsProxyWidget</span></a> *editProxy = new <a href="file:///Users/ulrichknorzer/Development/playground/workflowtest/qgraphicsproxywidget.html"><span class="s3">QGraphicsProxyWidget</span></a>;</span></p>
<p class="p1"><span class="Apple-converted-space">     </span>editProxy-&gt;setWidget(edit);</p>
<p class="p2"><br></p>
<p class="p1"><span class="Apple-converted-space">     </span><a href="file:///Users/ulrichknorzer/Development/playground/workflowtest/qgroupbox.html"><span class="s1">QGroupBox</span></a> *box = new <a href="file:///Users/ulrichknorzer/Development/playground/workflowtest/qgroupbox.html"><span class="s1">QGroupBox</span></a>;</p>
<p class="p1"><span class="Apple-converted-space">     </span>box-&gt;setFlat(true);</p>
<p class="p1"><span class="Apple-converted-space">     </span>box-&gt;setTitle("Options");</p>
<p class="p2"><br></p>
<p class="p1"><span class="Apple-converted-space">     </span><a href="file:///Users/ulrichknorzer/Development/playground/workflowtest/qvboxlayout.html"><span class="s1">QVBoxLayout</span></a> *layout2 = new <a href="file:///Users/ulrichknorzer/Development/playground/workflowtest/qvboxlayout.html"><span class="s1">QVBoxLayout</span></a>;</p>
<p class="p1"><span class="Apple-converted-space">     </span>box-&gt;setLayout(layout2);</p>
<p class="p1"><span class="Apple-converted-space">     </span>layout2-&gt;addWidget(new <a href="file:///Users/ulrichknorzer/Development/playground/workflowtest/qradiobutton.html"><span class="s1">QRadioButton</span></a>("Herring"));</p>
<p class="p1"><span class="Apple-converted-space">     </span>layout2-&gt;addWidget(new <a href="file:///Users/ulrichknorzer/Development/playground/workflowtest/qradiobutton.html"><span class="s1">QRadioButton</span></a>("Blue Parrot"));</p>
<p class="p1"><span class="Apple-converted-space">     </span>layout2-&gt;addWidget(new <a href="file:///Users/ulrichknorzer/Development/playground/workflowtest/qradiobutton.html"><span class="s1">QRadioButton</span></a>("Petunias"));</p>
<p class="p1"><span class="Apple-converted-space">     </span>layout2-&gt;addStretch();</p>
<p class="p2"><br></p>
<p class="p3"><span class="s2"><span class="Apple-converted-space">     </span><a href="file:///Users/ulrichknorzer/Development/playground/workflowtest/qgraphicsproxywidget.html"><span class="s3">QGraphicsProxyWidget</span></a> *boxProxy = new <a href="file:///Users/ulrichknorzer/Development/playground/workflowtest/qgraphicsproxywidget.html"><span class="s3">QGraphicsProxyWidget</span></a>;</span></p>
<p class="p1"><span class="Apple-converted-space">     </span>boxProxy-&gt;setWidget(box);</p>
<p class="p2"><br></p>
<p class="p1"><span class="Apple-converted-space">     </span>// Parent widget</p>
<p class="p3"><span class="s2"><span class="Apple-converted-space">     </span><a href="file:///Users/ulrichknorzer/Development/playground/workflowtest/qgraphicswidget.html"><span class="s3">QGraphicsWidget</span></a> *widget = new <a href="file:///Users/ulrichknorzer/Development/playground/workflowtest/qgraphicswidget.html"><span class="s3">QGraphicsWidget</span></a>;</span></p>
<p class="p3"><span class="s2"><span class="Apple-converted-space">     </span><a href="file:///Users/ulrichknorzer/Development/playground/workflowtest/qgraphicslinearlayout.html"><span class="s3">QGraphicsLinearLayout</span></a> *layout = new <a href="file:///Users/ulrichknorzer/Development/playground/workflowtest/qgraphicslinearlayout.html"><span class="s3">QGraphicsLinearLayout</span></a>(<a href="file:///Users/ulrichknorzer/Development/playground/workflowtest/qt.html"><span class="s3">Qt</span></a>::Vertical, widget);</span></p>
<p class="p1"><span class="Apple-converted-space">     </span>layout-&gt;addItem(editProxy);</p>
<p class="p1"><span class="Apple-converted-space">     </span>layout-&gt;addItem(buttonProxy);</p>
<p class="p1"><span class="Apple-converted-space">     </span>widget-&gt;setLayout(layout);</p>
<p class="p2"><br></p>
<p class="p1"><span class="Apple-converted-space">     </span>Pixmap *p1 = new Pixmap(<a href="file:///Users/ulrichknorzer/Development/playground/workflowtest/qpixmap.html"><span class="s1">QPixmap</span></a>(":/digikam.png"));</p>
<p class="p1"><span class="Apple-converted-space">     </span>Pixmap *p2 = new Pixmap(<a href="file:///Users/ulrichknorzer/Development/playground/workflowtest/qpixmap.html"><span class="s1">QPixmap</span></a>(":/akregator.png"));</p>
<p class="p1"><span class="Apple-converted-space">     </span>Pixmap *p3 = new Pixmap(<a href="file:///Users/ulrichknorzer/Development/playground/workflowtest/qpixmap.html"><span class="s1">QPixmap</span></a>(":/accessories-dictionary.png"));</p>
<p class="p1"><span class="Apple-converted-space">     </span>Pixmap *p4 = new Pixmap(<a href="file:///Users/ulrichknorzer/Development/playground/workflowtest/qpixmap.html"><span class="s1">QPixmap</span></a>(":/k3b.png"));</p>
<p class="p1"><span class="Apple-converted-space">     </span>Pixmap *p5 = new Pixmap(<a href="file:///Users/ulrichknorzer/Development/playground/workflowtest/qpixmap.html"><span class="s1">QPixmap</span></a>(":/help-browser.png"));</p>
<p class="p1"><span class="Apple-converted-space">     </span>Pixmap *p6 = new Pixmap(<a href="file:///Users/ulrichknorzer/Development/playground/workflowtest/qpixmap.html"><span class="s1">QPixmap</span></a>(":/kchart.png"));</p>
<p class="p2"><br></p>
<p class="p1"><span class="Apple-converted-space">     </span><a href="file:///Users/ulrichknorzer/Development/playground/workflowtest/qgraphicsscene.html"><span class="s1">QGraphicsScene</span></a> scene(0, 0, 400, 300);</p>
<p class="p1"><span class="Apple-converted-space">     </span>scene.setBackgroundBrush(scene.palette().window());</p>
<p class="p1"><span class="Apple-converted-space">     </span>scene.addItem(widget);</p>
<p class="p1"><span class="Apple-converted-space">     </span>scene.addItem(boxProxy);</p>
<p class="p1"><span class="Apple-converted-space">     </span>scene.addItem(p1);</p>
<p class="p1"><span class="Apple-converted-space">     </span>scene.addItem(p2);</p>
<p class="p1"><span class="Apple-converted-space">     </span>scene.addItem(p3);</p>
<p class="p1"><span class="Apple-converted-space">     </span>scene.addItem(p4);</p>
<p class="p1"><span class="Apple-converted-space">     </span>scene.addItem(p5);</p>
<p class="p1"><span class="Apple-converted-space">     </span>scene.addItem(p6);</p>
<p class="p2"><br></p>
<p class="p1"><span class="Apple-converted-space">     </span><a href="file:///Users/ulrichknorzer/Development/playground/workflowtest/qstatemachine.html"><span class="s1">QStateMachine</span></a> machine;</p>
<p class="p1"><span class="Apple-converted-space">     </span><a href="file:///Users/ulrichknorzer/Development/playground/workflowtest/qstate.html"><span class="s1">QState</span></a> *state1 = new <a href="file:///Users/ulrichknorzer/Development/playground/workflowtest/qstate.html"><span class="s1">QState</span></a>(&amp;machine);</p>
<p class="p1"><span class="Apple-converted-space">     </span><a href="file:///Users/ulrichknorzer/Development/playground/workflowtest/qstate.html"><span class="s1">QState</span></a> *state2 = new <a href="file:///Users/ulrichknorzer/Development/playground/workflowtest/qstate.html"><span class="s1">QState</span></a>(&amp;machine);</p>
<p class="p1"><span class="Apple-converted-space">     </span><a href="file:///Users/ulrichknorzer/Development/playground/workflowtest/qstate.html"><span class="s1">QState</span></a> *state3 = new <a href="file:///Users/ulrichknorzer/Development/playground/workflowtest/qstate.html"><span class="s1">QState</span></a>(&amp;machine);</p>
<p class="p1"><span class="Apple-converted-space">     </span>machine.setInitialState(state1);</p>
<p class="p2"><br></p>
<p class="p1"><span class="Apple-converted-space">     </span>// State 1</p>
<p class="p1"><span class="Apple-converted-space">     </span>state1-&gt;assignProperty(button, "text", "Switch to state 2");</p>
<p class="p1"><span class="Apple-converted-space">     </span>state1-&gt;assignProperty(widget, "geometry", <a href="file:///Users/ulrichknorzer/Development/playground/workflowtest/qrectf.html"><span class="s1">QRectF</span></a>(0, 0, 400, 150));</p>
<p class="p1"><span class="Apple-converted-space">     </span>state1-&gt;assignProperty(box, "geometry", <a href="file:///Users/ulrichknorzer/Development/playground/workflowtest/qrect.html"><span class="s1">QRect</span></a>(-200, 150, 200, 150));</p>
<p class="p1"><span class="Apple-converted-space">     </span>state1-&gt;assignProperty(p1, "pos", <a href="file:///Users/ulrichknorzer/Development/playground/workflowtest/qpointf.html"><span class="s1">QPointF</span></a>(68, 185));</p>
<p class="p1"><span class="Apple-converted-space">     </span>state1-&gt;assignProperty(p2, "pos", <a href="file:///Users/ulrichknorzer/Development/playground/workflowtest/qpointf.html"><span class="s1">QPointF</span></a>(168, 185));</p>
<p class="p1"><span class="Apple-converted-space">     </span>state1-&gt;assignProperty(p3, "pos", <a href="file:///Users/ulrichknorzer/Development/playground/workflowtest/qpointf.html"><span class="s1">QPointF</span></a>(268, 185));</p>
<p class="p1"><span class="Apple-converted-space">     </span>state1-&gt;assignProperty(p4, "pos", <a href="file:///Users/ulrichknorzer/Development/playground/workflowtest/qpointf.html"><span class="s1">QPointF</span></a>(68-150, 48-150));</p>
<p class="p1"><span class="Apple-converted-space">     </span>state1-&gt;assignProperty(p5, "pos", <a href="file:///Users/ulrichknorzer/Development/playground/workflowtest/qpointf.html"><span class="s1">QPointF</span></a>(168, 48-150));</p>
<p class="p1"><span class="Apple-converted-space">     </span>state1-&gt;assignProperty(p6, "pos", <a href="file:///Users/ulrichknorzer/Development/playground/workflowtest/qpointf.html"><span class="s1">QPointF</span></a>(268+150, 48-150));</p>
<p class="p1"><span class="Apple-converted-space">     </span>state1-&gt;assignProperty(p1, "rotation", <a href="file:///Users/ulrichknorzer/Development/playground/workflowtest/qtglobal.html#qreal-typedef"><span class="s1">qreal</span></a>(0));</p>
<p class="p1"><span class="Apple-converted-space">     </span>state1-&gt;assignProperty(p2, "rotation", <a href="file:///Users/ulrichknorzer/Development/playground/workflowtest/qtglobal.html#qreal-typedef"><span class="s1">qreal</span></a>(0));</p>
<p class="p1"><span class="Apple-converted-space">     </span>state1-&gt;assignProperty(p3, "rotation", <a href="file:///Users/ulrichknorzer/Development/playground/workflowtest/qtglobal.html#qreal-typedef"><span class="s1">qreal</span></a>(0));</p>
<p class="p1"><span class="Apple-converted-space">     </span>state1-&gt;assignProperty(p4, "rotation", <a href="file:///Users/ulrichknorzer/Development/playground/workflowtest/qtglobal.html#qreal-typedef"><span class="s1">qreal</span></a>(-270));</p>
<p class="p1"><span class="Apple-converted-space">     </span>state1-&gt;assignProperty(p5, "rotation", <a href="file:///Users/ulrichknorzer/Development/playground/workflowtest/qtglobal.html#qreal-typedef"><span class="s1">qreal</span></a>(-90));</p>
<p class="p1"><span class="Apple-converted-space">     </span>state1-&gt;assignProperty(p6, "rotation", <a href="file:///Users/ulrichknorzer/Development/playground/workflowtest/qtglobal.html#qreal-typedef"><span class="s1">qreal</span></a>(270));</p>
<p class="p1"><span class="Apple-converted-space">     </span>state1-&gt;assignProperty(boxProxy, "opacity", <a href="file:///Users/ulrichknorzer/Development/playground/workflowtest/qtglobal.html#qreal-typedef"><span class="s1">qreal</span></a>(0));</p>
<p class="p1"><span class="Apple-converted-space">     </span>state1-&gt;assignProperty(p1, "opacity", <a href="file:///Users/ulrichknorzer/Development/playground/workflowtest/qtglobal.html#qreal-typedef"><span class="s1">qreal</span></a>(1));</p>
<p class="p1"><span class="Apple-converted-space">     </span>state1-&gt;assignProperty(p2, "opacity", <a href="file:///Users/ulrichknorzer/Development/playground/workflowtest/qtglobal.html#qreal-typedef"><span class="s1">qreal</span></a>(1));</p>
<p class="p1"><span class="Apple-converted-space">     </span>state1-&gt;assignProperty(p3, "opacity", <a href="file:///Users/ulrichknorzer/Development/playground/workflowtest/qtglobal.html#qreal-typedef"><span class="s1">qreal</span></a>(1));</p>
<p class="p1"><span class="Apple-converted-space">     </span>state1-&gt;assignProperty(p4, "opacity", <a href="file:///Users/ulrichknorzer/Development/playground/workflowtest/qtglobal.html#qreal-typedef"><span class="s1">qreal</span></a>(0));</p>
<p class="p1"><span class="Apple-converted-space">     </span>state1-&gt;assignProperty(p5, "opacity", <a href="file:///Users/ulrichknorzer/Development/playground/workflowtest/qtglobal.html#qreal-typedef"><span class="s1">qreal</span></a>(0));</p>
<p class="p1"><span class="Apple-converted-space">     </span>state1-&gt;assignProperty(p6, "opacity", <a href="file:///Users/ulrichknorzer/Development/playground/workflowtest/qtglobal.html#qreal-typedef"><span class="s1">qreal</span></a>(0));</p>
<p class="p2"><br></p>
<p class="p1"><span class="Apple-converted-space">     </span>// State 2</p>
<p class="p1"><span class="Apple-converted-space">     </span>state2-&gt;assignProperty(button, "text", "Switch to state 3");</p>
<p class="p1"><span class="Apple-converted-space">     </span>state2-&gt;assignProperty(widget, "geometry", <a href="file:///Users/ulrichknorzer/Development/playground/workflowtest/qrectf.html"><span class="s1">QRectF</span></a>(200, 150, 200, 150));</p>
<p class="p1"><span class="Apple-converted-space">     </span>state2-&gt;assignProperty(box, "geometry", <a href="file:///Users/ulrichknorzer/Development/playground/workflowtest/qrect.html"><span class="s1">QRect</span></a>(9, 150, 190, 150));</p>
<p class="p1"><span class="Apple-converted-space">     </span>state2-&gt;assignProperty(p1, "pos", <a href="file:///Users/ulrichknorzer/Development/playground/workflowtest/qpointf.html"><span class="s1">QPointF</span></a>(68-150, 185+150));</p>
<p class="p1"><span class="Apple-converted-space">     </span>state2-&gt;assignProperty(p2, "pos", <a href="file:///Users/ulrichknorzer/Development/playground/workflowtest/qpointf.html"><span class="s1">QPointF</span></a>(168, 185+150));</p>
<p class="p1"><span class="Apple-converted-space">     </span>state2-&gt;assignProperty(p3, "pos", <a href="file:///Users/ulrichknorzer/Development/playground/workflowtest/qpointf.html"><span class="s1">QPointF</span></a>(268+150, 185+150));</p>
<p class="p1"><span class="Apple-converted-space">     </span>state2-&gt;assignProperty(p4, "pos", <a href="file:///Users/ulrichknorzer/Development/playground/workflowtest/qpointf.html"><span class="s1">QPointF</span></a>(64, 48));</p>
<p class="p1"><span class="Apple-converted-space">     </span>state2-&gt;assignProperty(p5, "pos", <a href="file:///Users/ulrichknorzer/Development/playground/workflowtest/qpointf.html"><span class="s1">QPointF</span></a>(168, 48));</p>
<p class="p1"><span class="Apple-converted-space">     </span>state2-&gt;assignProperty(p6, "pos", <a href="file:///Users/ulrichknorzer/Development/playground/workflowtest/qpointf.html"><span class="s1">QPointF</span></a>(268, 48));</p>
<p class="p1"><span class="Apple-converted-space">     </span>state2-&gt;assignProperty(p1, "rotation", <a href="file:///Users/ulrichknorzer/Development/playground/workflowtest/qtglobal.html#qreal-typedef"><span class="s1">qreal</span></a>(-270));</p>
<p class="p1"><span class="Apple-converted-space">     </span>state2-&gt;assignProperty(p2, "rotation", <a href="file:///Users/ulrichknorzer/Development/playground/workflowtest/qtglobal.html#qreal-typedef"><span class="s1">qreal</span></a>(90));</p>
<p class="p1"><span class="Apple-converted-space">     </span>state2-&gt;assignProperty(p3, "rotation", <a href="file:///Users/ulrichknorzer/Development/playground/workflowtest/qtglobal.html#qreal-typedef"><span class="s1">qreal</span></a>(270));</p>
<p class="p1"><span class="Apple-converted-space">     </span>state2-&gt;assignProperty(p4, "rotation", <a href="file:///Users/ulrichknorzer/Development/playground/workflowtest/qtglobal.html#qreal-typedef"><span class="s1">qreal</span></a>(0));</p>
<p class="p1"><span class="Apple-converted-space">     </span>state2-&gt;assignProperty(p5, "rotation", <a href="file:///Users/ulrichknorzer/Development/playground/workflowtest/qtglobal.html#qreal-typedef"><span class="s1">qreal</span></a>(0));</p>
<p class="p1"><span class="Apple-converted-space">     </span>state2-&gt;assignProperty(p6, "rotation", <a href="file:///Users/ulrichknorzer/Development/playground/workflowtest/qtglobal.html#qreal-typedef"><span class="s1">qreal</span></a>(0));</p>
<p class="p1"><span class="Apple-converted-space">     </span>state2-&gt;assignProperty(boxProxy, "opacity", <a href="file:///Users/ulrichknorzer/Development/playground/workflowtest/qtglobal.html#qreal-typedef"><span class="s1">qreal</span></a>(1));</p>
<p class="p1"><span class="Apple-converted-space">     </span>state2-&gt;assignProperty(p1, "opacity", <a href="file:///Users/ulrichknorzer/Development/playground/workflowtest/qtglobal.html#qreal-typedef"><span class="s1">qreal</span></a>(0));</p>
<p class="p1"><span class="Apple-converted-space">     </span>state2-&gt;assignProperty(p2, "opacity", <a href="file:///Users/ulrichknorzer/Development/playground/workflowtest/qtglobal.html#qreal-typedef"><span class="s1">qreal</span></a>(0));</p>
<p class="p1"><span class="Apple-converted-space">     </span>state2-&gt;assignProperty(p3, "opacity", <a href="file:///Users/ulrichknorzer/Development/playground/workflowtest/qtglobal.html#qreal-typedef"><span class="s1">qreal</span></a>(0));</p>
<p class="p1"><span class="Apple-converted-space">     </span>state2-&gt;assignProperty(p4, "opacity", <a href="file:///Users/ulrichknorzer/Development/playground/workflowtest/qtglobal.html#qreal-typedef"><span class="s1">qreal</span></a>(1));</p>
<p class="p1"><span class="Apple-converted-space">     </span>state2-&gt;assignProperty(p5, "opacity", <a href="file:///Users/ulrichknorzer/Development/playground/workflowtest/qtglobal.html#qreal-typedef"><span class="s1">qreal</span></a>(1));</p>
<p class="p1"><span class="Apple-converted-space">     </span>state2-&gt;assignProperty(p6, "opacity", <a href="file:///Users/ulrichknorzer/Development/playground/workflowtest/qtglobal.html#qreal-typedef"><span class="s1">qreal</span></a>(1));</p>
<p class="p2"><br></p>
<p class="p1"><span class="Apple-converted-space">     </span>// State 3</p>
<p class="p1"><span class="Apple-converted-space">     </span>state3-&gt;assignProperty(button, "text", "Switch to state 1");</p>
<p class="p1"><span class="Apple-converted-space">     </span>state3-&gt;assignProperty(p1, "pos", <a href="file:///Users/ulrichknorzer/Development/playground/workflowtest/qpointf.html"><span class="s1">QPointF</span></a>(0, 5));</p>
<p class="p1"><span class="Apple-converted-space">     </span>state3-&gt;assignProperty(p2, "pos", <a href="file:///Users/ulrichknorzer/Development/playground/workflowtest/qpointf.html"><span class="s1">QPointF</span></a>(0, 5 + 64 + 5));</p>
<p class="p1"><span class="Apple-converted-space">     </span>state3-&gt;assignProperty(p3, "pos", <a href="file:///Users/ulrichknorzer/Development/playground/workflowtest/qpointf.html"><span class="s1">QPointF</span></a>(5, 5 + (64 + 5) + 64));</p>
<p class="p1"><span class="Apple-converted-space">     </span>state3-&gt;assignProperty(p4, "pos", <a href="file:///Users/ulrichknorzer/Development/playground/workflowtest/qpointf.html"><span class="s1">QPointF</span></a>(5 + 64 + 5, 5));</p>
<p class="p1"><span class="Apple-converted-space">     </span>state3-&gt;assignProperty(p5, "pos", <a href="file:///Users/ulrichknorzer/Development/playground/workflowtest/qpointf.html"><span class="s1">QPointF</span></a>(5 + 64 + 5, 5 + 64 + 5));</p>
<p class="p1"><span class="Apple-converted-space">     </span>state3-&gt;assignProperty(p6, "pos", <a href="file:///Users/ulrichknorzer/Development/playground/workflowtest/qpointf.html"><span class="s1">QPointF</span></a>(5 + 64 + 5, 5 + (64 + 5) + 64));</p>
<p class="p1"><span class="Apple-converted-space">     </span>state3-&gt;assignProperty(widget, "geometry", <a href="file:///Users/ulrichknorzer/Development/playground/workflowtest/qrectf.html"><span class="s1">QRectF</span></a>(138, 5, 400 - 138, 200));</p>
<p class="p1"><span class="Apple-converted-space">     </span>state3-&gt;assignProperty(box, "geometry", <a href="file:///Users/ulrichknorzer/Development/playground/workflowtest/qrect.html"><span class="s1">QRect</span></a>(5, 205, 400, 90));</p>
<p class="p1"><span class="Apple-converted-space">     </span>state3-&gt;assignProperty(p1, "opacity", <a href="file:///Users/ulrichknorzer/Development/playground/workflowtest/qtglobal.html#qreal-typedef"><span class="s1">qreal</span></a>(1));</p>
<p class="p1"><span class="Apple-converted-space">     </span>state3-&gt;assignProperty(p2, "opacity", <a href="file:///Users/ulrichknorzer/Development/playground/workflowtest/qtglobal.html#qreal-typedef"><span class="s1">qreal</span></a>(1));</p>
<p class="p1"><span class="Apple-converted-space">     </span>state3-&gt;assignProperty(p3, "opacity", <a href="file:///Users/ulrichknorzer/Development/playground/workflowtest/qtglobal.html#qreal-typedef"><span class="s1">qreal</span></a>(1));</p>
<p class="p1"><span class="Apple-converted-space">     </span>state3-&gt;assignProperty(p4, "opacity", <a href="file:///Users/ulrichknorzer/Development/playground/workflowtest/qtglobal.html#qreal-typedef"><span class="s1">qreal</span></a>(1));</p>
<p class="p1"><span class="Apple-converted-space">     </span>state3-&gt;assignProperty(p5, "opacity", <a href="file:///Users/ulrichknorzer/Development/playground/workflowtest/qtglobal.html#qreal-typedef"><span class="s1">qreal</span></a>(1));</p>
<p class="p1"><span class="Apple-converted-space">     </span>state3-&gt;assignProperty(p6, "opacity", <a href="file:///Users/ulrichknorzer/Development/playground/workflowtest/qtglobal.html#qreal-typedef"><span class="s1">qreal</span></a>(1));</p>
<p class="p2"><br></p>
<p class="p1"><span class="Apple-converted-space">     </span><a href="file:///Users/ulrichknorzer/Development/playground/workflowtest/qabstracttransition.html"><span class="s1">QAbstractTransition</span></a> *t1 = state1-&gt;addTransition(button, SIGNAL(clicked()), state2);</p>
<p class="p3"><span class="s2"><span class="Apple-converted-space">     </span><a href="file:///Users/ulrichknorzer/Development/playground/workflowtest/qsequentialanimationgroup.html"><span class="s3">QSequentialAnimationGroup</span></a> *animation1SubGroup = new <a href="file:///Users/ulrichknorzer/Development/playground/workflowtest/qsequentialanimationgroup.html"><span class="s3">QSequentialAnimationGroup</span></a>;</span></p>
<p class="p1"><span class="Apple-converted-space">     </span>animation1SubGroup-&gt;addPause(250);</p>
<p class="p1"><span class="Apple-converted-space">     </span>animation1SubGroup-&gt;addAnimation(new <a href="file:///Users/ulrichknorzer/Development/playground/workflowtest/qpropertyanimation.html"><span class="s1">QPropertyAnimation</span></a>(box, "geometry"));</p>
<p class="p1"><span class="Apple-converted-space">     </span>t1-&gt;addAnimation(animation1SubGroup);</p>
<p class="p1"><span class="Apple-converted-space">     </span>t1-&gt;addAnimation(new <a href="file:///Users/ulrichknorzer/Development/playground/workflowtest/qpropertyanimation.html"><span class="s1">QPropertyAnimation</span></a>(widget, "geometry"));</p>
<p class="p1"><span class="Apple-converted-space">     </span>t1-&gt;addAnimation(new <a href="file:///Users/ulrichknorzer/Development/playground/workflowtest/qpropertyanimation.html"><span class="s1">QPropertyAnimation</span></a>(p1, "pos"));</p>
<p class="p1"><span class="Apple-converted-space">     </span>t1-&gt;addAnimation(new <a href="file:///Users/ulrichknorzer/Development/playground/workflowtest/qpropertyanimation.html"><span class="s1">QPropertyAnimation</span></a>(p2, "pos"));</p>
<p class="p1"><span class="Apple-converted-space">     </span>t1-&gt;addAnimation(new <a href="file:///Users/ulrichknorzer/Development/playground/workflowtest/qpropertyanimation.html"><span class="s1">QPropertyAnimation</span></a>(p3, "pos"));</p>
<p class="p1"><span class="Apple-converted-space">     </span>t1-&gt;addAnimation(new <a href="file:///Users/ulrichknorzer/Development/playground/workflowtest/qpropertyanimation.html"><span class="s1">QPropertyAnimation</span></a>(p4, "pos"));</p>
<p class="p1"><span class="Apple-converted-space">     </span>t1-&gt;addAnimation(new <a href="file:///Users/ulrichknorzer/Development/playground/workflowtest/qpropertyanimation.html"><span class="s1">QPropertyAnimation</span></a>(p5, "pos"));</p>
<p class="p1"><span class="Apple-converted-space">     </span>t1-&gt;addAnimation(new <a href="file:///Users/ulrichknorzer/Development/playground/workflowtest/qpropertyanimation.html"><span class="s1">QPropertyAnimation</span></a>(p6, "pos"));</p>
<p class="p1"><span class="Apple-converted-space">     </span>t1-&gt;addAnimation(new <a href="file:///Users/ulrichknorzer/Development/playground/workflowtest/qpropertyanimation.html"><span class="s1">QPropertyAnimation</span></a>(p1, "rotation"));</p>
<p class="p1"><span class="Apple-converted-space">     </span>t1-&gt;addAnimation(new <a href="file:///Users/ulrichknorzer/Development/playground/workflowtest/qpropertyanimation.html"><span class="s1">QPropertyAnimation</span></a>(p2, "rotation"));</p>
<p class="p1"><span class="Apple-converted-space">     </span>t1-&gt;addAnimation(new <a href="file:///Users/ulrichknorzer/Development/playground/workflowtest/qpropertyanimation.html"><span class="s1">QPropertyAnimation</span></a>(p3, "rotation"));</p>
<p class="p1"><span class="Apple-converted-space">     </span>t1-&gt;addAnimation(new <a href="file:///Users/ulrichknorzer/Development/playground/workflowtest/qpropertyanimation.html"><span class="s1">QPropertyAnimation</span></a>(p4, "rotation"));</p>
<p class="p1"><span class="Apple-converted-space">     </span>t1-&gt;addAnimation(new <a href="file:///Users/ulrichknorzer/Development/playground/workflowtest/qpropertyanimation.html"><span class="s1">QPropertyAnimation</span></a>(p5, "rotation"));</p>
<p class="p1"><span class="Apple-converted-space">     </span>t1-&gt;addAnimation(new <a href="file:///Users/ulrichknorzer/Development/playground/workflowtest/qpropertyanimation.html"><span class="s1">QPropertyAnimation</span></a>(p6, "rotation"));</p>
<p class="p1"><span class="Apple-converted-space">     </span>t1-&gt;addAnimation(new <a href="file:///Users/ulrichknorzer/Development/playground/workflowtest/qpropertyanimation.html"><span class="s1">QPropertyAnimation</span></a>(p1, "opacity"));</p>
<p class="p1"><span class="Apple-converted-space">     </span>t1-&gt;addAnimation(new <a href="file:///Users/ulrichknorzer/Development/playground/workflowtest/qpropertyanimation.html"><span class="s1">QPropertyAnimation</span></a>(p2, "opacity"));</p>
<p class="p1"><span class="Apple-converted-space">     </span>t1-&gt;addAnimation(new <a href="file:///Users/ulrichknorzer/Development/playground/workflowtest/qpropertyanimation.html"><span class="s1">QPropertyAnimation</span></a>(p3, "opacity"));</p>
<p class="p1"><span class="Apple-converted-space">     </span>t1-&gt;addAnimation(new <a href="file:///Users/ulrichknorzer/Development/playground/workflowtest/qpropertyanimation.html"><span class="s1">QPropertyAnimation</span></a>(p4, "opacity"));</p>
<p class="p1"><span class="Apple-converted-space">     </span>t1-&gt;addAnimation(new <a href="file:///Users/ulrichknorzer/Development/playground/workflowtest/qpropertyanimation.html"><span class="s1">QPropertyAnimation</span></a>(p5, "opacity"));</p>
<p class="p1"><span class="Apple-converted-space">     </span>t1-&gt;addAnimation(new <a href="file:///Users/ulrichknorzer/Development/playground/workflowtest/qpropertyanimation.html"><span class="s1">QPropertyAnimation</span></a>(p6, "opacity"));</p>
<p class="p2"><br></p>
<p class="p1"><span class="Apple-converted-space">     </span><a href="file:///Users/ulrichknorzer/Development/playground/workflowtest/qabstracttransition.html"><span class="s1">QAbstractTransition</span></a> *t2 = state2-&gt;addTransition(button, SIGNAL(clicked()), state3);</p>
<p class="p1"><span class="Apple-converted-space">     </span>t2-&gt;addAnimation(new <a href="file:///Users/ulrichknorzer/Development/playground/workflowtest/qpropertyanimation.html"><span class="s1">QPropertyAnimation</span></a>(box, "geometry"));</p>
<p class="p1"><span class="Apple-converted-space">     </span>t2-&gt;addAnimation(new <a href="file:///Users/ulrichknorzer/Development/playground/workflowtest/qpropertyanimation.html"><span class="s1">QPropertyAnimation</span></a>(widget, "geometry"));</p>
<p class="p1"><span class="Apple-converted-space">     </span>t2-&gt;addAnimation(new <a href="file:///Users/ulrichknorzer/Development/playground/workflowtest/qpropertyanimation.html"><span class="s1">QPropertyAnimation</span></a>(p1, "pos"));</p>
<p class="p1"><span class="Apple-converted-space">     </span>t2-&gt;addAnimation(new <a href="file:///Users/ulrichknorzer/Development/playground/workflowtest/qpropertyanimation.html"><span class="s1">QPropertyAnimation</span></a>(p2, "pos"));</p>
<p class="p1"><span class="Apple-converted-space">     </span>t2-&gt;addAnimation(new <a href="file:///Users/ulrichknorzer/Development/playground/workflowtest/qpropertyanimation.html"><span class="s1">QPropertyAnimation</span></a>(p3, "pos"));</p>
<p class="p1"><span class="Apple-converted-space">     </span>t2-&gt;addAnimation(new <a href="file:///Users/ulrichknorzer/Development/playground/workflowtest/qpropertyanimation.html"><span class="s1">QPropertyAnimation</span></a>(p4, "pos"));</p>
<p class="p1"><span class="Apple-converted-space">     </span>t2-&gt;addAnimation(new <a href="file:///Users/ulrichknorzer/Development/playground/workflowtest/qpropertyanimation.html"><span class="s1">QPropertyAnimation</span></a>(p5, "pos"));</p>
<p class="p1"><span class="Apple-converted-space">     </span>t2-&gt;addAnimation(new <a href="file:///Users/ulrichknorzer/Development/playground/workflowtest/qpropertyanimation.html"><span class="s1">QPropertyAnimation</span></a>(p6, "pos"));</p>
<p class="p1"><span class="Apple-converted-space">     </span>t2-&gt;addAnimation(new <a href="file:///Users/ulrichknorzer/Development/playground/workflowtest/qpropertyanimation.html"><span class="s1">QPropertyAnimation</span></a>(p1, "rotation"));</p>
<p class="p1"><span class="Apple-converted-space">     </span>t2-&gt;addAnimation(new <a href="file:///Users/ulrichknorzer/Development/playground/workflowtest/qpropertyanimation.html"><span class="s1">QPropertyAnimation</span></a>(p2, "rotation"));</p>
<p class="p1"><span class="Apple-converted-space">     </span>t2-&gt;addAnimation(new <a href="file:///Users/ulrichknorzer/Development/playground/workflowtest/qpropertyanimation.html"><span class="s1">QPropertyAnimation</span></a>(p3, "rotation"));</p>
<p class="p1"><span class="Apple-converted-space">     </span>t2-&gt;addAnimation(new <a href="file:///Users/ulrichknorzer/Development/playground/workflowtest/qpropertyanimation.html"><span class="s1">QPropertyAnimation</span></a>(p4, "rotation"));</p>
<p class="p1"><span class="Apple-converted-space">     </span>t2-&gt;addAnimation(new <a href="file:///Users/ulrichknorzer/Development/playground/workflowtest/qpropertyanimation.html"><span class="s1">QPropertyAnimation</span></a>(p5, "rotation"));</p>
<p class="p1"><span class="Apple-converted-space">     </span>t2-&gt;addAnimation(new <a href="file:///Users/ulrichknorzer/Development/playground/workflowtest/qpropertyanimation.html"><span class="s1">QPropertyAnimation</span></a>(p6, "rotation"));</p>
<p class="p1"><span class="Apple-converted-space">     </span>t2-&gt;addAnimation(new <a href="file:///Users/ulrichknorzer/Development/playground/workflowtest/qpropertyanimation.html"><span class="s1">QPropertyAnimation</span></a>(p1, "opacity"));</p>
<p class="p1"><span class="Apple-converted-space">     </span>t2-&gt;addAnimation(new <a href="file:///Users/ulrichknorzer/Development/playground/workflowtest/qpropertyanimation.html"><span class="s1">QPropertyAnimation</span></a>(p2, "opacity"));</p>
<p class="p1"><span class="Apple-converted-space">     </span>t2-&gt;addAnimation(new <a href="file:///Users/ulrichknorzer/Development/playground/workflowtest/qpropertyanimation.html"><span class="s1">QPropertyAnimation</span></a>(p3, "opacity"));</p>
<p class="p1"><span class="Apple-converted-space">     </span>t2-&gt;addAnimation(new <a href="file:///Users/ulrichknorzer/Development/playground/workflowtest/qpropertyanimation.html"><span class="s1">QPropertyAnimation</span></a>(p4, "opacity"));</p>
<p class="p1"><span class="Apple-converted-space">     </span>t2-&gt;addAnimation(new <a href="file:///Users/ulrichknorzer/Development/playground/workflowtest/qpropertyanimation.html"><span class="s1">QPropertyAnimation</span></a>(p5, "opacity"));</p>
<p class="p1"><span class="Apple-converted-space">     </span>t2-&gt;addAnimation(new <a href="file:///Users/ulrichknorzer/Development/playground/workflowtest/qpropertyanimation.html"><span class="s1">QPropertyAnimation</span></a>(p6, "opacity"));</p>
<p class="p2"><br></p>
<p class="p1"><span class="Apple-converted-space">     </span><a href="file:///Users/ulrichknorzer/Development/playground/workflowtest/qabstracttransition.html"><span class="s1">QAbstractTransition</span></a> *t3 = state3-&gt;addTransition(button, SIGNAL(clicked()), state1);</p>
<p class="p1"><span class="Apple-converted-space">     </span>t3-&gt;addAnimation(new <a href="file:///Users/ulrichknorzer/Development/playground/workflowtest/qpropertyanimation.html"><span class="s1">QPropertyAnimation</span></a>(box, "geometry"));</p>
<p class="p1"><span class="Apple-converted-space">     </span>t3-&gt;addAnimation(new <a href="file:///Users/ulrichknorzer/Development/playground/workflowtest/qpropertyanimation.html"><span class="s1">QPropertyAnimation</span></a>(widget, "geometry"));</p>
<p class="p1"><span class="Apple-converted-space">     </span>t3-&gt;addAnimation(new <a href="file:///Users/ulrichknorzer/Development/playground/workflowtest/qpropertyanimation.html"><span class="s1">QPropertyAnimation</span></a>(p1, "pos"));</p>
<p class="p1"><span class="Apple-converted-space">     </span>t3-&gt;addAnimation(new <a href="file:///Users/ulrichknorzer/Development/playground/workflowtest/qpropertyanimation.html"><span class="s1">QPropertyAnimation</span></a>(p2, "pos"));</p>
<p class="p1"><span class="Apple-converted-space">     </span>t3-&gt;addAnimation(new <a href="file:///Users/ulrichknorzer/Development/playground/workflowtest/qpropertyanimation.html"><span class="s1">QPropertyAnimation</span></a>(p3, "pos"));</p>
<p class="p1"><span class="Apple-converted-space">     </span>t3-&gt;addAnimation(new <a href="file:///Users/ulrichknorzer/Development/playground/workflowtest/qpropertyanimation.html"><span class="s1">QPropertyAnimation</span></a>(p4, "pos"));</p>
<p class="p1"><span class="Apple-converted-space">     </span>t3-&gt;addAnimation(new <a href="file:///Users/ulrichknorzer/Development/playground/workflowtest/qpropertyanimation.html"><span class="s1">QPropertyAnimation</span></a>(p5, "pos"));</p>
<p class="p1"><span class="Apple-converted-space">     </span>t3-&gt;addAnimation(new <a href="file:///Users/ulrichknorzer/Development/playground/workflowtest/qpropertyanimation.html"><span class="s1">QPropertyAnimation</span></a>(p6, "pos"));</p>
<p class="p1"><span class="Apple-converted-space">     </span>t3-&gt;addAnimation(new <a href="file:///Users/ulrichknorzer/Development/playground/workflowtest/qpropertyanimation.html"><span class="s1">QPropertyAnimation</span></a>(p1, "rotation"));</p>
<p class="p1"><span class="Apple-converted-space">     </span>t3-&gt;addAnimation(new <a href="file:///Users/ulrichknorzer/Development/playground/workflowtest/qpropertyanimation.html"><span class="s1">QPropertyAnimation</span></a>(p2, "rotation"));</p>
<p class="p1"><span class="Apple-converted-space">     </span>t3-&gt;addAnimation(new <a href="file:///Users/ulrichknorzer/Development/playground/workflowtest/qpropertyanimation.html"><span class="s1">QPropertyAnimation</span></a>(p3, "rotation"));</p>
<p class="p1"><span class="Apple-converted-space">     </span>t3-&gt;addAnimation(new <a href="file:///Users/ulrichknorzer/Development/playground/workflowtest/qpropertyanimation.html"><span class="s1">QPropertyAnimation</span></a>(p4, "rotation"));</p>
<p class="p1"><span class="Apple-converted-space">     </span>t3-&gt;addAnimation(new <a href="file:///Users/ulrichknorzer/Development/playground/workflowtest/qpropertyanimation.html"><span class="s1">QPropertyAnimation</span></a>(p5, "rotation"));</p>
<p class="p1"><span class="Apple-converted-space">     </span>t3-&gt;addAnimation(new <a href="file:///Users/ulrichknorzer/Development/playground/workflowtest/qpropertyanimation.html"><span class="s1">QPropertyAnimation</span></a>(p6, "rotation"));</p>
<p class="p1"><span class="Apple-converted-space">     </span>t3-&gt;addAnimation(new <a href="file:///Users/ulrichknorzer/Development/playground/workflowtest/qpropertyanimation.html"><span class="s1">QPropertyAnimation</span></a>(p1, "opacity"));</p>
<p class="p1"><span class="Apple-converted-space">     </span>t3-&gt;addAnimation(new <a href="file:///Users/ulrichknorzer/Development/playground/workflowtest/qpropertyanimation.html"><span class="s1">QPropertyAnimation</span></a>(p2, "opacity"));</p>
<p class="p1"><span class="Apple-converted-space">     </span>t3-&gt;addAnimation(new <a href="file:///Users/ulrichknorzer/Development/playground/workflowtest/qpropertyanimation.html"><span class="s1">QPropertyAnimation</span></a>(p3, "opacity"));</p>
<p class="p1"><span class="Apple-converted-space">     </span>t3-&gt;addAnimation(new <a href="file:///Users/ulrichknorzer/Development/playground/workflowtest/qpropertyanimation.html"><span class="s1">QPropertyAnimation</span></a>(p4, "opacity"));</p>
<p class="p1"><span class="Apple-converted-space">     </span>t3-&gt;addAnimation(new <a href="file:///Users/ulrichknorzer/Development/playground/workflowtest/qpropertyanimation.html"><span class="s1">QPropertyAnimation</span></a>(p5, "opacity"));</p>
<p class="p1"><span class="Apple-converted-space">     </span>t3-&gt;addAnimation(new <a href="file:///Users/ulrichknorzer/Development/playground/workflowtest/qpropertyanimation.html"><span class="s1">QPropertyAnimation</span></a>(p6, "opacity"));</p>
<p class="p2"><br></p>
<p class="p1"><span class="Apple-converted-space">     </span>machine.start();</p>
<p class="p2"><br></p>
<p class="p1"><span class="Apple-converted-space">     </span><a href="file:///Users/ulrichknorzer/Development/playground/workflowtest/qgraphicsview.html"><span class="s1">QGraphicsView</span></a> view(&amp;scene);</p>
<p class="p1"><span class="Apple-converted-space">     </span>view.show();</p>
<p class="p2"><br></p>
<p class="p1"><span class="Apple-converted-space">     </span>return app.exec();</p>
<p class="p1"><span class="Apple-converted-space"> </span>}</p>
<p class="p2"><br></p>
<p class="p1"><span class="Apple-converted-space"> </span>#include "main.moc"</p>
<p class="p4"><br></p>
</body>
</html>
