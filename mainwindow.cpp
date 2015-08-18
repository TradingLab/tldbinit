/*
 * Copyright 2015 Jordi Estrada <email>
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 */
// #include <QtGui>
// #include <QtGui/QLabel>
// #include <QtGui/QMenu>
// #include <QtGui/QMenuBar>
// #include <QtGui/QAction>
// 
// #include "mainwindow.h"
// #include <QHBoxLayout>

// MainWindow::MainWindow(QWidget *parent) : KXmlGuiWindow(parent)
// {
//
//   master = new QWidget();
//       button = new QWidget();
//       QHBoxLayout *layout = new QHBoxLayout;
//       layout->addWidget(button);
//       master->setLayout(layout);
//       textArea = new KTextEdit();
//       setCentralWidget(master);
// //      setCentralWidget(textArea);
//       setupGUI();
// }
//

// MainWindow::MainWindow(QWidget *parent) : KXmlGuiWindow(parent)
// {
//     QGroupBox *echoGroup = new QGroupBox(tr("Echo"));
// 
//     QLabel *echoLabel = new QLabel(tr("Mode:"));
//     QComboBox *echoComboBox = new QComboBox;
//     echoComboBox->addItem(tr("Normal"));
//     echoComboBox->addItem(tr("Password"));
//     echoComboBox->addItem(tr("PasswordEchoOnEdit"));
//     echoComboBox->addItem(tr("No Echo"));
// 
//     echoLineEdit = new QLineEdit;
//     echoLineEdit->setFocus();
// 
//     QGroupBox *validatorGroup = new QGroupBox(tr("Validator"));
// 
//     QLabel *validatorLabel = new QLabel(tr("Type:"));
//     QComboBox *validatorComboBox = new QComboBox;
//     validatorComboBox->addItem(tr("No validator"));
//     validatorComboBox->addItem(tr("Integer validator"));
//     validatorComboBox->addItem(tr("Double validator"));
// 
//     validatorLineEdit = new QLineEdit;
// 
//     QGroupBox *alignmentGroup = new QGroupBox(tr("Alignment"));
// 
//     QLabel *alignmentLabel = new QLabel(tr("Type:"));
//     QComboBox *alignmentComboBox = new QComboBox;
//     alignmentComboBox->addItem(tr("Left"));
//     alignmentComboBox->addItem(tr("Centered"));
//     alignmentComboBox->addItem(tr("Right"));
// 
//     alignmentLineEdit = new QLineEdit;
// 
//     QGroupBox *inputMaskGroup = new QGroupBox(tr("Input mask"));
// 
//     QLabel *inputMaskLabel = new QLabel(tr("Type:"));
//     QComboBox *inputMaskComboBox = new QComboBox;
//     inputMaskComboBox->addItem(tr("No mask"));
//     inputMaskComboBox->addItem(tr("Phone number"));
//     inputMaskComboBox->addItem(tr("ISO date"));
//     inputMaskComboBox->addItem(tr("License key"));
// 
//     inputMaskLineEdit = new QLineEdit;
// 
//     QGroupBox *accessGroup = new QGroupBox(tr("Access"));
// 
//     QLabel *accessLabel = new QLabel(tr("Read-only:"));
//     QComboBox *accessComboBox = new QComboBox;
//     accessComboBox->addItem(tr("False"));
//     accessComboBox->addItem(tr("True"));
// 
//     accessLineEdit = new QLineEdit;
// 
//     connect(echoComboBox, SIGNAL(activated(int)),
//             this, SLOT(echoChanged(int)));
//     connect(validatorComboBox, SIGNAL(activated(int)),
//             this, SLOT(validatorChanged(int)));
//     connect(alignmentComboBox, SIGNAL(activated(int)),
//             this, SLOT(alignmentChanged(int)));
//     connect(inputMaskComboBox, SIGNAL(activated(int)),
//             this, SLOT(inputMaskChanged(int)));
//     connect(accessComboBox, SIGNAL(activated(int)),
//             this, SLOT(accessChanged(int)));
// 
//     QGridLayout *echoLayout = new QGridLayout;
//     echoLayout->addWidget(echoLabel, 0, 0);
//     echoLayout->addWidget(echoComboBox, 0, 1);
//     echoLayout->addWidget(echoLineEdit, 1, 0, 1, 2);
//     echoGroup->setLayout(echoLayout);
// 
//     QGridLayout *validatorLayout = new QGridLayout;
//     validatorLayout->addWidget(validatorLabel, 0, 0);
//     validatorLayout->addWidget(validatorComboBox, 0, 1);
//     validatorLayout->addWidget(validatorLineEdit, 1, 0, 1, 2);
//     validatorGroup->setLayout(validatorLayout);
// 
//     QGridLayout *alignmentLayout = new QGridLayout;
//     alignmentLayout->addWidget(alignmentLabel, 0, 0);
//     alignmentLayout->addWidget(alignmentComboBox, 0, 1);
//     alignmentLayout->addWidget(alignmentLineEdit, 1, 0, 1, 2);
//     alignmentGroup-> setLayout(alignmentLayout);
// 
//     QGridLayout *inputMaskLayout = new QGridLayout;
//     inputMaskLayout->addWidget(inputMaskLabel, 0, 0);
//     inputMaskLayout->addWidget(inputMaskComboBox, 0, 1);
//     inputMaskLayout->addWidget(inputMaskLineEdit, 1, 0, 1, 2);
//     inputMaskGroup->setLayout(inputMaskLayout);
// 
//     QGridLayout *accessLayout = new QGridLayout;
//     accessLayout->addWidget(accessLabel, 0, 0);
//     accessLayout->addWidget(accessComboBox, 0, 1);
//     accessLayout->addWidget(accessLineEdit, 1, 0, 1, 2);
//     accessGroup->setLayout(accessLayout);
// 
//     QGridLayout *layout = new QGridLayout;
//     layout->addWidget(echoGroup, 0, 0);
//     layout->addWidget(validatorGroup, 1, 0);
//     layout->addWidget(alignmentGroup, 2, 0);
//     layout->addWidget(inputMaskGroup, 0, 1);
//     layout->addWidget(accessGroup, 1, 1);
//     setLayout(layout);
//     master->setLayout(layout);
//     setCentralWidget(master);
// //      setCentralWidget(textArea);
//     setupGUI();
//     setWindowTitle(tr("Line Edits"));
/*
    textArea = new KTextEdit();
    textArea->setTextColor(Qt::red);
    textArea->setTextBackgroundColor(Qt::blue);
    textArea->setText("Esto\tes\tun\ttexto");
    setCentralWidget(textArea);
    setupGUI();
}*/
