/********************************************************************************
** Form generated from reading UI file 'Boss-rc500-assignKzPQtE.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef BOSS_2D_RC500_2D_ASSIGNKZPQTE_H
#define BOSS_2D_RC500_2D_ASSIGNKZPQTE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_BossRc500AssignDialog
{
public:
    QGroupBox *gp_Assign1;
    QCheckBox *assign1_Assign;
    QLabel *label_assign1_Source;
    QComboBox *assign1_Source;
    QComboBox *assign1_SourceMode;
    QLabel *label_assign1_SourceMode;
    QLabel *label_assign1_Target;
    QComboBox *assign1_Target;
    QLabel *label_assign1_TargetMin;
    QLabel *label_assign1_TargetMax;
    QSpinBox *assign1_TargetMin;
    QSpinBox *assign1_TargetMax;
    QGroupBox *gp_Assign2;
    QCheckBox *assign2_Assign;
    QLabel *label_assign2_Source;
    QComboBox *assign2_Source;
    QComboBox *assign2_SourceMode;
    QLabel *label_assign2_SourceMode;
    QLabel *label_assign2_Target;
    QComboBox *assign2_Target;
    QLabel *label_assign2_TargetMin;
    QLabel *label_assign2_TargetMax;
    QSpinBox *assign2_TargetMax;
    QSpinBox *assign2_TargetMin;
    QGroupBox *gp_Assign3;
    QCheckBox *assign3_Assign;
    QLabel *label_assign3_Source;
    QComboBox *assign3_Source;
    QComboBox *assign3_SourceMode;
    QLabel *label_assign3_SourceMode;
    QLabel *label_assign3_Target;
    QComboBox *assign3_Target;
    QLabel *label_assign3_TargetMin;
    QLabel *label_assign3_TargetMax;
    QSpinBox *assign3_TargetMax;
    QSpinBox *assign3_TargetMin;
    QGroupBox *gp_Assign4;
    QCheckBox *assign4_Assign;
    QLabel *label_assign4_Source;
    QComboBox *assign4_Source;
    QComboBox *assign4_SourceMode;
    QLabel *label_assign4_SourceMode;
    QLabel *label_assign4_Target;
    QComboBox *assign4_Target;
    QLabel *label_assign4_TargetMin;
    QLabel *label_assign4_TargetMax;
    QSpinBox *assign4_TargetMax;
    QSpinBox *assign4_TargetMin;
    QGroupBox *gp_Assign5;
    QCheckBox *assign5_Assign;
    QLabel *label_assign5_Source;
    QComboBox *assign5_Source;
    QComboBox *assign5_SourceMode;
    QLabel *label_assign5_SourceMode;
    QLabel *label_assign5_Target;
    QComboBox *assign5_Target;
    QLabel *label_assign5_TargetMin;
    QLabel *label_assign5_TargetMax;
    QSpinBox *assign5_TargetMax;
    QSpinBox *assign5_TargetMin;
    QGroupBox *gp_Assign6;
    QCheckBox *assign6_Assign;
    QLabel *label_assign6_Source;
    QComboBox *assign6_Source;
    QComboBox *assign6_SourceMode;
    QLabel *label_assign6_SourceMode;
    QLabel *label_assign6_Target;
    QComboBox *assign6_Target;
    QLabel *label_assign6_TargetMin;
    QLabel *label_assign6_TargetMax;
    QSpinBox *assign6_TargetMax;
    QSpinBox *assign6_TargetMin;
    QGroupBox *gp_Assign7;
    QCheckBox *assign7_Assign;
    QLabel *label_assign7_Source;
    QComboBox *assign7_Source;
    QComboBox *assign7_SourceMode;
    QLabel *label_assign7_SourceMode;
    QLabel *label_assign7_Target;
    QComboBox *assign7_Target;
    QLabel *label_assign7_TargetMin;
    QLabel *label_assign7_TargetMax;
    QSpinBox *assign7_TargetMax;
    QSpinBox *assign7_TargetMin;
    QGroupBox *gp_Assign8;
    QCheckBox *assign8_Assign;
    QLabel *label_assign8_Source;
    QComboBox *assign8_Source;
    QComboBox *assign8_SourceMode;
    QLabel *label_assign8_SourceMode;
    QLabel *label_assign8_Target;
    QComboBox *assign8_Target;
    QLabel *label_assign8_TargetMin;
    QLabel *label_assign8_TargetMax;
    QSpinBox *assign8_TargetMax;
    QSpinBox *assign8_TargetMin;
    QPushButton *button_Apply;
    QPushButton *button_Cancel;

    void setupUi(QDialog *BossRc500AssignDialog)
    {
        if (BossRc500AssignDialog->objectName().isEmpty())
            BossRc500AssignDialog->setObjectName(QString::fromUtf8("BossRc500AssignDialog"));
        BossRc500AssignDialog->resize(1172, 515);
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        QBrush brush1(QColor(170, 49, 45, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        BossRc500AssignDialog->setPalette(palette);
        QFont font;
        font.setFamily(QString::fromUtf8("Bitstream Vera Sans"));
        font.setBold(true);
        font.setWeight(QFont::DemiBold);
        BossRc500AssignDialog->setFont(font);
        gp_Assign1 = new QGroupBox(BossRc500AssignDialog);
        gp_Assign1->setObjectName(QString::fromUtf8("gp_Assign1"));
        gp_Assign1->setGeometry(QRect(10, 10, 281, 221));
        assign1_Assign = new QCheckBox(gp_Assign1);
        assign1_Assign->setObjectName(QString::fromUtf8("assign1_Assign"));
        assign1_Assign->setGeometry(QRect(10, 30, 131, 23));
        assign1_Assign->setLayoutDirection(Qt::RightToLeft);
        label_assign1_Source = new QLabel(gp_Assign1);
        label_assign1_Source->setObjectName(QString::fromUtf8("label_assign1_Source"));
        label_assign1_Source->setGeometry(QRect(20, 60, 101, 21));
        assign1_Source = new QComboBox(gp_Assign1);
        assign1_Source->setObjectName(QString::fromUtf8("assign1_Source"));
        assign1_Source->setGeometry(QRect(130, 60, 141, 25));
        assign1_SourceMode = new QComboBox(gp_Assign1);
        assign1_SourceMode->setObjectName(QString::fromUtf8("assign1_SourceMode"));
        assign1_SourceMode->setGeometry(QRect(130, 90, 141, 25));
        label_assign1_SourceMode = new QLabel(gp_Assign1);
        label_assign1_SourceMode->setObjectName(QString::fromUtf8("label_assign1_SourceMode"));
        label_assign1_SourceMode->setGeometry(QRect(20, 90, 101, 21));
        label_assign1_Target = new QLabel(gp_Assign1);
        label_assign1_Target->setObjectName(QString::fromUtf8("label_assign1_Target"));
        label_assign1_Target->setGeometry(QRect(20, 120, 101, 21));
        assign1_Target = new QComboBox(gp_Assign1);
        assign1_Target->setObjectName(QString::fromUtf8("assign1_Target"));
        assign1_Target->setGeometry(QRect(130, 120, 141, 25));
        label_assign1_TargetMin = new QLabel(gp_Assign1);
        label_assign1_TargetMin->setObjectName(QString::fromUtf8("label_assign1_TargetMin"));
        label_assign1_TargetMin->setGeometry(QRect(20, 150, 101, 21));
        label_assign1_TargetMax = new QLabel(gp_Assign1);
        label_assign1_TargetMax->setObjectName(QString::fromUtf8("label_assign1_TargetMax"));
        label_assign1_TargetMax->setGeometry(QRect(20, 180, 101, 21));
        assign1_TargetMin = new QSpinBox(gp_Assign1);
        assign1_TargetMin->setObjectName(QString::fromUtf8("assign1_TargetMin"));
        assign1_TargetMin->setGeometry(QRect(130, 150, 81, 26));
        assign1_TargetMin->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        assign1_TargetMax = new QSpinBox(gp_Assign1);
        assign1_TargetMax->setObjectName(QString::fromUtf8("assign1_TargetMax"));
        assign1_TargetMax->setGeometry(QRect(130, 180, 81, 26));
        assign1_TargetMax->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        gp_Assign2 = new QGroupBox(BossRc500AssignDialog);
        gp_Assign2->setObjectName(QString::fromUtf8("gp_Assign2"));
        gp_Assign2->setGeometry(QRect(300, 10, 281, 221));
        assign2_Assign = new QCheckBox(gp_Assign2);
        assign2_Assign->setObjectName(QString::fromUtf8("assign2_Assign"));
        assign2_Assign->setGeometry(QRect(10, 30, 131, 23));
        assign2_Assign->setLayoutDirection(Qt::RightToLeft);
        label_assign2_Source = new QLabel(gp_Assign2);
        label_assign2_Source->setObjectName(QString::fromUtf8("label_assign2_Source"));
        label_assign2_Source->setGeometry(QRect(20, 60, 101, 21));
        assign2_Source = new QComboBox(gp_Assign2);
        assign2_Source->setObjectName(QString::fromUtf8("assign2_Source"));
        assign2_Source->setGeometry(QRect(130, 60, 141, 25));
        assign2_SourceMode = new QComboBox(gp_Assign2);
        assign2_SourceMode->setObjectName(QString::fromUtf8("assign2_SourceMode"));
        assign2_SourceMode->setGeometry(QRect(130, 90, 141, 25));
        label_assign2_SourceMode = new QLabel(gp_Assign2);
        label_assign2_SourceMode->setObjectName(QString::fromUtf8("label_assign2_SourceMode"));
        label_assign2_SourceMode->setGeometry(QRect(20, 90, 101, 21));
        label_assign2_Target = new QLabel(gp_Assign2);
        label_assign2_Target->setObjectName(QString::fromUtf8("label_assign2_Target"));
        label_assign2_Target->setGeometry(QRect(20, 120, 101, 21));
        assign2_Target = new QComboBox(gp_Assign2);
        assign2_Target->setObjectName(QString::fromUtf8("assign2_Target"));
        assign2_Target->setGeometry(QRect(130, 120, 141, 25));
        label_assign2_TargetMin = new QLabel(gp_Assign2);
        label_assign2_TargetMin->setObjectName(QString::fromUtf8("label_assign2_TargetMin"));
        label_assign2_TargetMin->setGeometry(QRect(20, 150, 101, 21));
        label_assign2_TargetMax = new QLabel(gp_Assign2);
        label_assign2_TargetMax->setObjectName(QString::fromUtf8("label_assign2_TargetMax"));
        label_assign2_TargetMax->setGeometry(QRect(20, 180, 101, 21));
        assign2_TargetMax = new QSpinBox(gp_Assign2);
        assign2_TargetMax->setObjectName(QString::fromUtf8("assign2_TargetMax"));
        assign2_TargetMax->setGeometry(QRect(130, 180, 81, 26));
        assign2_TargetMax->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        assign2_TargetMin = new QSpinBox(gp_Assign2);
        assign2_TargetMin->setObjectName(QString::fromUtf8("assign2_TargetMin"));
        assign2_TargetMin->setGeometry(QRect(130, 150, 81, 26));
        assign2_TargetMin->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        gp_Assign3 = new QGroupBox(BossRc500AssignDialog);
        gp_Assign3->setObjectName(QString::fromUtf8("gp_Assign3"));
        gp_Assign3->setGeometry(QRect(590, 10, 281, 221));
        assign3_Assign = new QCheckBox(gp_Assign3);
        assign3_Assign->setObjectName(QString::fromUtf8("assign3_Assign"));
        assign3_Assign->setGeometry(QRect(10, 30, 131, 23));
        assign3_Assign->setLayoutDirection(Qt::RightToLeft);
        label_assign3_Source = new QLabel(gp_Assign3);
        label_assign3_Source->setObjectName(QString::fromUtf8("label_assign3_Source"));
        label_assign3_Source->setGeometry(QRect(20, 60, 101, 21));
        assign3_Source = new QComboBox(gp_Assign3);
        assign3_Source->setObjectName(QString::fromUtf8("assign3_Source"));
        assign3_Source->setGeometry(QRect(130, 60, 141, 25));
        assign3_SourceMode = new QComboBox(gp_Assign3);
        assign3_SourceMode->setObjectName(QString::fromUtf8("assign3_SourceMode"));
        assign3_SourceMode->setGeometry(QRect(130, 90, 141, 25));
        label_assign3_SourceMode = new QLabel(gp_Assign3);
        label_assign3_SourceMode->setObjectName(QString::fromUtf8("label_assign3_SourceMode"));
        label_assign3_SourceMode->setGeometry(QRect(20, 90, 101, 21));
        label_assign3_Target = new QLabel(gp_Assign3);
        label_assign3_Target->setObjectName(QString::fromUtf8("label_assign3_Target"));
        label_assign3_Target->setGeometry(QRect(20, 120, 101, 21));
        assign3_Target = new QComboBox(gp_Assign3);
        assign3_Target->setObjectName(QString::fromUtf8("assign3_Target"));
        assign3_Target->setGeometry(QRect(130, 120, 141, 25));
        label_assign3_TargetMin = new QLabel(gp_Assign3);
        label_assign3_TargetMin->setObjectName(QString::fromUtf8("label_assign3_TargetMin"));
        label_assign3_TargetMin->setGeometry(QRect(20, 150, 101, 21));
        label_assign3_TargetMax = new QLabel(gp_Assign3);
        label_assign3_TargetMax->setObjectName(QString::fromUtf8("label_assign3_TargetMax"));
        label_assign3_TargetMax->setGeometry(QRect(20, 180, 101, 21));
        assign3_TargetMax = new QSpinBox(gp_Assign3);
        assign3_TargetMax->setObjectName(QString::fromUtf8("assign3_TargetMax"));
        assign3_TargetMax->setGeometry(QRect(130, 180, 81, 26));
        assign3_TargetMax->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        assign3_TargetMin = new QSpinBox(gp_Assign3);
        assign3_TargetMin->setObjectName(QString::fromUtf8("assign3_TargetMin"));
        assign3_TargetMin->setGeometry(QRect(130, 150, 81, 26));
        assign3_TargetMin->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        gp_Assign4 = new QGroupBox(BossRc500AssignDialog);
        gp_Assign4->setObjectName(QString::fromUtf8("gp_Assign4"));
        gp_Assign4->setGeometry(QRect(880, 10, 281, 221));
        assign4_Assign = new QCheckBox(gp_Assign4);
        assign4_Assign->setObjectName(QString::fromUtf8("assign4_Assign"));
        assign4_Assign->setGeometry(QRect(10, 30, 131, 23));
        assign4_Assign->setLayoutDirection(Qt::RightToLeft);
        label_assign4_Source = new QLabel(gp_Assign4);
        label_assign4_Source->setObjectName(QString::fromUtf8("label_assign4_Source"));
        label_assign4_Source->setGeometry(QRect(20, 60, 101, 21));
        assign4_Source = new QComboBox(gp_Assign4);
        assign4_Source->setObjectName(QString::fromUtf8("assign4_Source"));
        assign4_Source->setGeometry(QRect(130, 60, 141, 25));
        assign4_SourceMode = new QComboBox(gp_Assign4);
        assign4_SourceMode->setObjectName(QString::fromUtf8("assign4_SourceMode"));
        assign4_SourceMode->setGeometry(QRect(130, 90, 141, 25));
        label_assign4_SourceMode = new QLabel(gp_Assign4);
        label_assign4_SourceMode->setObjectName(QString::fromUtf8("label_assign4_SourceMode"));
        label_assign4_SourceMode->setGeometry(QRect(20, 90, 101, 21));
        label_assign4_Target = new QLabel(gp_Assign4);
        label_assign4_Target->setObjectName(QString::fromUtf8("label_assign4_Target"));
        label_assign4_Target->setGeometry(QRect(20, 120, 101, 21));
        assign4_Target = new QComboBox(gp_Assign4);
        assign4_Target->setObjectName(QString::fromUtf8("assign4_Target"));
        assign4_Target->setGeometry(QRect(130, 120, 141, 25));
        label_assign4_TargetMin = new QLabel(gp_Assign4);
        label_assign4_TargetMin->setObjectName(QString::fromUtf8("label_assign4_TargetMin"));
        label_assign4_TargetMin->setGeometry(QRect(20, 150, 101, 21));
        label_assign4_TargetMax = new QLabel(gp_Assign4);
        label_assign4_TargetMax->setObjectName(QString::fromUtf8("label_assign4_TargetMax"));
        label_assign4_TargetMax->setGeometry(QRect(20, 180, 101, 21));
        assign4_TargetMax = new QSpinBox(gp_Assign4);
        assign4_TargetMax->setObjectName(QString::fromUtf8("assign4_TargetMax"));
        assign4_TargetMax->setGeometry(QRect(130, 180, 81, 26));
        assign4_TargetMax->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        assign4_TargetMin = new QSpinBox(gp_Assign4);
        assign4_TargetMin->setObjectName(QString::fromUtf8("assign4_TargetMin"));
        assign4_TargetMin->setGeometry(QRect(130, 150, 81, 26));
        assign4_TargetMin->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        gp_Assign5 = new QGroupBox(BossRc500AssignDialog);
        gp_Assign5->setObjectName(QString::fromUtf8("gp_Assign5"));
        gp_Assign5->setGeometry(QRect(10, 240, 281, 221));
        assign5_Assign = new QCheckBox(gp_Assign5);
        assign5_Assign->setObjectName(QString::fromUtf8("assign5_Assign"));
        assign5_Assign->setGeometry(QRect(10, 30, 131, 23));
        assign5_Assign->setLayoutDirection(Qt::RightToLeft);
        label_assign5_Source = new QLabel(gp_Assign5);
        label_assign5_Source->setObjectName(QString::fromUtf8("label_assign5_Source"));
        label_assign5_Source->setGeometry(QRect(20, 60, 101, 21));
        assign5_Source = new QComboBox(gp_Assign5);
        assign5_Source->setObjectName(QString::fromUtf8("assign5_Source"));
        assign5_Source->setGeometry(QRect(130, 60, 141, 25));
        assign5_SourceMode = new QComboBox(gp_Assign5);
        assign5_SourceMode->setObjectName(QString::fromUtf8("assign5_SourceMode"));
        assign5_SourceMode->setGeometry(QRect(130, 90, 141, 25));
        label_assign5_SourceMode = new QLabel(gp_Assign5);
        label_assign5_SourceMode->setObjectName(QString::fromUtf8("label_assign5_SourceMode"));
        label_assign5_SourceMode->setGeometry(QRect(20, 90, 101, 21));
        label_assign5_Target = new QLabel(gp_Assign5);
        label_assign5_Target->setObjectName(QString::fromUtf8("label_assign5_Target"));
        label_assign5_Target->setGeometry(QRect(20, 120, 101, 21));
        assign5_Target = new QComboBox(gp_Assign5);
        assign5_Target->setObjectName(QString::fromUtf8("assign5_Target"));
        assign5_Target->setGeometry(QRect(130, 120, 141, 25));
        label_assign5_TargetMin = new QLabel(gp_Assign5);
        label_assign5_TargetMin->setObjectName(QString::fromUtf8("label_assign5_TargetMin"));
        label_assign5_TargetMin->setGeometry(QRect(20, 150, 101, 21));
        label_assign5_TargetMax = new QLabel(gp_Assign5);
        label_assign5_TargetMax->setObjectName(QString::fromUtf8("label_assign5_TargetMax"));
        label_assign5_TargetMax->setGeometry(QRect(20, 180, 101, 21));
        assign5_TargetMax = new QSpinBox(gp_Assign5);
        assign5_TargetMax->setObjectName(QString::fromUtf8("assign5_TargetMax"));
        assign5_TargetMax->setGeometry(QRect(130, 180, 81, 26));
        assign5_TargetMax->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        assign5_TargetMin = new QSpinBox(gp_Assign5);
        assign5_TargetMin->setObjectName(QString::fromUtf8("assign5_TargetMin"));
        assign5_TargetMin->setGeometry(QRect(130, 150, 81, 26));
        assign5_TargetMin->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        gp_Assign6 = new QGroupBox(BossRc500AssignDialog);
        gp_Assign6->setObjectName(QString::fromUtf8("gp_Assign6"));
        gp_Assign6->setGeometry(QRect(300, 240, 281, 221));
        assign6_Assign = new QCheckBox(gp_Assign6);
        assign6_Assign->setObjectName(QString::fromUtf8("assign6_Assign"));
        assign6_Assign->setGeometry(QRect(10, 30, 131, 23));
        assign6_Assign->setLayoutDirection(Qt::RightToLeft);
        label_assign6_Source = new QLabel(gp_Assign6);
        label_assign6_Source->setObjectName(QString::fromUtf8("label_assign6_Source"));
        label_assign6_Source->setGeometry(QRect(20, 60, 101, 21));
        assign6_Source = new QComboBox(gp_Assign6);
        assign6_Source->setObjectName(QString::fromUtf8("assign6_Source"));
        assign6_Source->setGeometry(QRect(130, 60, 141, 25));
        assign6_SourceMode = new QComboBox(gp_Assign6);
        assign6_SourceMode->setObjectName(QString::fromUtf8("assign6_SourceMode"));
        assign6_SourceMode->setGeometry(QRect(130, 90, 141, 25));
        label_assign6_SourceMode = new QLabel(gp_Assign6);
        label_assign6_SourceMode->setObjectName(QString::fromUtf8("label_assign6_SourceMode"));
        label_assign6_SourceMode->setGeometry(QRect(20, 90, 101, 21));
        label_assign6_Target = new QLabel(gp_Assign6);
        label_assign6_Target->setObjectName(QString::fromUtf8("label_assign6_Target"));
        label_assign6_Target->setGeometry(QRect(20, 120, 101, 21));
        assign6_Target = new QComboBox(gp_Assign6);
        assign6_Target->setObjectName(QString::fromUtf8("assign6_Target"));
        assign6_Target->setGeometry(QRect(130, 120, 141, 25));
        label_assign6_TargetMin = new QLabel(gp_Assign6);
        label_assign6_TargetMin->setObjectName(QString::fromUtf8("label_assign6_TargetMin"));
        label_assign6_TargetMin->setGeometry(QRect(20, 150, 101, 21));
        label_assign6_TargetMax = new QLabel(gp_Assign6);
        label_assign6_TargetMax->setObjectName(QString::fromUtf8("label_assign6_TargetMax"));
        label_assign6_TargetMax->setGeometry(QRect(20, 180, 101, 21));
        assign6_TargetMax = new QSpinBox(gp_Assign6);
        assign6_TargetMax->setObjectName(QString::fromUtf8("assign6_TargetMax"));
        assign6_TargetMax->setGeometry(QRect(130, 180, 81, 26));
        assign6_TargetMax->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        assign6_TargetMin = new QSpinBox(gp_Assign6);
        assign6_TargetMin->setObjectName(QString::fromUtf8("assign6_TargetMin"));
        assign6_TargetMin->setGeometry(QRect(130, 150, 81, 26));
        assign6_TargetMin->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        gp_Assign7 = new QGroupBox(BossRc500AssignDialog);
        gp_Assign7->setObjectName(QString::fromUtf8("gp_Assign7"));
        gp_Assign7->setGeometry(QRect(590, 240, 281, 221));
        assign7_Assign = new QCheckBox(gp_Assign7);
        assign7_Assign->setObjectName(QString::fromUtf8("assign7_Assign"));
        assign7_Assign->setGeometry(QRect(10, 30, 131, 23));
        assign7_Assign->setLayoutDirection(Qt::RightToLeft);
        label_assign7_Source = new QLabel(gp_Assign7);
        label_assign7_Source->setObjectName(QString::fromUtf8("label_assign7_Source"));
        label_assign7_Source->setGeometry(QRect(20, 60, 101, 21));
        assign7_Source = new QComboBox(gp_Assign7);
        assign7_Source->setObjectName(QString::fromUtf8("assign7_Source"));
        assign7_Source->setGeometry(QRect(130, 60, 141, 25));
        assign7_SourceMode = new QComboBox(gp_Assign7);
        assign7_SourceMode->setObjectName(QString::fromUtf8("assign7_SourceMode"));
        assign7_SourceMode->setGeometry(QRect(130, 90, 141, 25));
        label_assign7_SourceMode = new QLabel(gp_Assign7);
        label_assign7_SourceMode->setObjectName(QString::fromUtf8("label_assign7_SourceMode"));
        label_assign7_SourceMode->setGeometry(QRect(20, 90, 101, 21));
        label_assign7_Target = new QLabel(gp_Assign7);
        label_assign7_Target->setObjectName(QString::fromUtf8("label_assign7_Target"));
        label_assign7_Target->setGeometry(QRect(20, 120, 101, 21));
        assign7_Target = new QComboBox(gp_Assign7);
        assign7_Target->setObjectName(QString::fromUtf8("assign7_Target"));
        assign7_Target->setGeometry(QRect(130, 120, 141, 25));
        label_assign7_TargetMin = new QLabel(gp_Assign7);
        label_assign7_TargetMin->setObjectName(QString::fromUtf8("label_assign7_TargetMin"));
        label_assign7_TargetMin->setGeometry(QRect(20, 150, 101, 21));
        label_assign7_TargetMax = new QLabel(gp_Assign7);
        label_assign7_TargetMax->setObjectName(QString::fromUtf8("label_assign7_TargetMax"));
        label_assign7_TargetMax->setGeometry(QRect(20, 180, 101, 21));
        assign7_TargetMax = new QSpinBox(gp_Assign7);
        assign7_TargetMax->setObjectName(QString::fromUtf8("assign7_TargetMax"));
        assign7_TargetMax->setGeometry(QRect(130, 180, 81, 26));
        assign7_TargetMax->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        assign7_TargetMin = new QSpinBox(gp_Assign7);
        assign7_TargetMin->setObjectName(QString::fromUtf8("assign7_TargetMin"));
        assign7_TargetMin->setGeometry(QRect(130, 150, 81, 26));
        assign7_TargetMin->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        gp_Assign8 = new QGroupBox(BossRc500AssignDialog);
        gp_Assign8->setObjectName(QString::fromUtf8("gp_Assign8"));
        gp_Assign8->setGeometry(QRect(880, 240, 281, 221));
        assign8_Assign = new QCheckBox(gp_Assign8);
        assign8_Assign->setObjectName(QString::fromUtf8("assign8_Assign"));
        assign8_Assign->setGeometry(QRect(10, 30, 131, 23));
        assign8_Assign->setLayoutDirection(Qt::RightToLeft);
        label_assign8_Source = new QLabel(gp_Assign8);
        label_assign8_Source->setObjectName(QString::fromUtf8("label_assign8_Source"));
        label_assign8_Source->setGeometry(QRect(20, 60, 101, 21));
        assign8_Source = new QComboBox(gp_Assign8);
        assign8_Source->setObjectName(QString::fromUtf8("assign8_Source"));
        assign8_Source->setGeometry(QRect(130, 60, 141, 25));
        assign8_SourceMode = new QComboBox(gp_Assign8);
        assign8_SourceMode->setObjectName(QString::fromUtf8("assign8_SourceMode"));
        assign8_SourceMode->setGeometry(QRect(130, 90, 141, 25));
        label_assign8_SourceMode = new QLabel(gp_Assign8);
        label_assign8_SourceMode->setObjectName(QString::fromUtf8("label_assign8_SourceMode"));
        label_assign8_SourceMode->setGeometry(QRect(20, 90, 101, 21));
        label_assign8_Target = new QLabel(gp_Assign8);
        label_assign8_Target->setObjectName(QString::fromUtf8("label_assign8_Target"));
        label_assign8_Target->setGeometry(QRect(20, 120, 101, 21));
        assign8_Target = new QComboBox(gp_Assign8);
        assign8_Target->setObjectName(QString::fromUtf8("assign8_Target"));
        assign8_Target->setGeometry(QRect(130, 120, 141, 25));
        label_assign8_TargetMin = new QLabel(gp_Assign8);
        label_assign8_TargetMin->setObjectName(QString::fromUtf8("label_assign8_TargetMin"));
        label_assign8_TargetMin->setGeometry(QRect(20, 150, 101, 21));
        label_assign8_TargetMax = new QLabel(gp_Assign8);
        label_assign8_TargetMax->setObjectName(QString::fromUtf8("label_assign8_TargetMax"));
        label_assign8_TargetMax->setGeometry(QRect(20, 180, 101, 21));
        assign8_TargetMax = new QSpinBox(gp_Assign8);
        assign8_TargetMax->setObjectName(QString::fromUtf8("assign8_TargetMax"));
        assign8_TargetMax->setGeometry(QRect(130, 180, 81, 26));
        assign8_TargetMax->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        assign8_TargetMin = new QSpinBox(gp_Assign8);
        assign8_TargetMin->setObjectName(QString::fromUtf8("assign8_TargetMin"));
        assign8_TargetMin->setGeometry(QRect(130, 150, 81, 26));
        assign8_TargetMin->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        button_Apply = new QPushButton(BossRc500AssignDialog);
        button_Apply->setObjectName(QString::fromUtf8("button_Apply"));
        button_Apply->setGeometry(QRect(1080, 480, 71, 24));
        button_Cancel = new QPushButton(BossRc500AssignDialog);
        button_Cancel->setObjectName(QString::fromUtf8("button_Cancel"));
        button_Cancel->setGeometry(QRect(1000, 480, 71, 24));
        QWidget::setTabOrder(assign1_Assign, assign1_Source);
        QWidget::setTabOrder(assign1_Source, assign1_SourceMode);
        QWidget::setTabOrder(assign1_SourceMode, assign1_Target);
        QWidget::setTabOrder(assign1_Target, assign1_TargetMin);
        QWidget::setTabOrder(assign1_TargetMin, assign1_TargetMax);
        QWidget::setTabOrder(assign1_TargetMax, assign2_Assign);
        QWidget::setTabOrder(assign2_Assign, assign2_Source);
        QWidget::setTabOrder(assign2_Source, assign2_SourceMode);
        QWidget::setTabOrder(assign2_SourceMode, assign2_Target);
        QWidget::setTabOrder(assign2_Target, assign2_TargetMin);
        QWidget::setTabOrder(assign2_TargetMin, assign2_TargetMax);
        QWidget::setTabOrder(assign2_TargetMax, assign3_Assign);
        QWidget::setTabOrder(assign3_Assign, assign3_Source);
        QWidget::setTabOrder(assign3_Source, assign3_SourceMode);
        QWidget::setTabOrder(assign3_SourceMode, assign3_Target);
        QWidget::setTabOrder(assign3_Target, assign3_TargetMin);
        QWidget::setTabOrder(assign3_TargetMin, assign3_TargetMax);
        QWidget::setTabOrder(assign3_TargetMax, assign4_Assign);
        QWidget::setTabOrder(assign4_Assign, assign4_Source);
        QWidget::setTabOrder(assign4_Source, assign4_SourceMode);
        QWidget::setTabOrder(assign4_SourceMode, assign4_Target);
        QWidget::setTabOrder(assign4_Target, assign4_TargetMin);
        QWidget::setTabOrder(assign4_TargetMin, assign4_TargetMax);
        QWidget::setTabOrder(assign4_TargetMax, assign5_Assign);
        QWidget::setTabOrder(assign5_Assign, assign5_Source);
        QWidget::setTabOrder(assign5_Source, assign5_SourceMode);
        QWidget::setTabOrder(assign5_SourceMode, assign5_Target);
        QWidget::setTabOrder(assign5_Target, assign5_TargetMin);
        QWidget::setTabOrder(assign5_TargetMin, assign5_TargetMax);
        QWidget::setTabOrder(assign5_TargetMax, assign6_Assign);
        QWidget::setTabOrder(assign6_Assign, assign6_Source);
        QWidget::setTabOrder(assign6_Source, assign6_SourceMode);
        QWidget::setTabOrder(assign6_SourceMode, assign6_Target);
        QWidget::setTabOrder(assign6_Target, assign6_TargetMin);
        QWidget::setTabOrder(assign6_TargetMin, assign6_TargetMax);
        QWidget::setTabOrder(assign6_TargetMax, assign7_Assign);
        QWidget::setTabOrder(assign7_Assign, assign7_Source);
        QWidget::setTabOrder(assign7_Source, assign7_SourceMode);
        QWidget::setTabOrder(assign7_SourceMode, assign7_Target);
        QWidget::setTabOrder(assign7_Target, assign7_TargetMin);
        QWidget::setTabOrder(assign7_TargetMin, assign7_TargetMax);
        QWidget::setTabOrder(assign7_TargetMax, assign8_Assign);
        QWidget::setTabOrder(assign8_Assign, assign8_Source);
        QWidget::setTabOrder(assign8_Source, assign8_SourceMode);
        QWidget::setTabOrder(assign8_SourceMode, assign8_Target);
        QWidget::setTabOrder(assign8_Target, assign8_TargetMin);
        QWidget::setTabOrder(assign8_TargetMin, assign8_TargetMax);
        QWidget::setTabOrder(assign8_TargetMax, button_Cancel);
        QWidget::setTabOrder(button_Cancel, button_Apply);

        retranslateUi(BossRc500AssignDialog);

        QMetaObject::connectSlotsByName(BossRc500AssignDialog);
    } // setupUi

    void retranslateUi(QDialog *BossRc500AssignDialog)
    {
        BossRc500AssignDialog->setWindowTitle(QCoreApplication::translate("BossRc500AssignDialog", "Dialog", nullptr));
        gp_Assign1->setTitle(QCoreApplication::translate("BossRc500AssignDialog", "ASSIGN 1", nullptr));
        assign1_Assign->setText(QCoreApplication::translate("BossRc500AssignDialog", "Active", nullptr));
        label_assign1_Source->setText(QCoreApplication::translate("BossRc500AssignDialog", "Source", nullptr));
        label_assign1_SourceMode->setText(QCoreApplication::translate("BossRc500AssignDialog", "Source Mode", nullptr));
        label_assign1_Target->setText(QCoreApplication::translate("BossRc500AssignDialog", "Target", nullptr));
        label_assign1_TargetMin->setText(QCoreApplication::translate("BossRc500AssignDialog", "Target Min.", nullptr));
        label_assign1_TargetMax->setText(QCoreApplication::translate("BossRc500AssignDialog", "Target Max.", nullptr));
        gp_Assign2->setTitle(QCoreApplication::translate("BossRc500AssignDialog", "ASSIGN 2", nullptr));
        assign2_Assign->setText(QCoreApplication::translate("BossRc500AssignDialog", "Active", nullptr));
        label_assign2_Source->setText(QCoreApplication::translate("BossRc500AssignDialog", "Source", nullptr));
        label_assign2_SourceMode->setText(QCoreApplication::translate("BossRc500AssignDialog", "Source Mode", nullptr));
        label_assign2_Target->setText(QCoreApplication::translate("BossRc500AssignDialog", "Target", nullptr));
        label_assign2_TargetMin->setText(QCoreApplication::translate("BossRc500AssignDialog", "Target Min.", nullptr));
        label_assign2_TargetMax->setText(QCoreApplication::translate("BossRc500AssignDialog", "Target Max.", nullptr));
        gp_Assign3->setTitle(QCoreApplication::translate("BossRc500AssignDialog", "ASSIGN 3", nullptr));
        assign3_Assign->setText(QCoreApplication::translate("BossRc500AssignDialog", "Active", nullptr));
        label_assign3_Source->setText(QCoreApplication::translate("BossRc500AssignDialog", "Source", nullptr));
        label_assign3_SourceMode->setText(QCoreApplication::translate("BossRc500AssignDialog", "Source Mode", nullptr));
        label_assign3_Target->setText(QCoreApplication::translate("BossRc500AssignDialog", "Target", nullptr));
        label_assign3_TargetMin->setText(QCoreApplication::translate("BossRc500AssignDialog", "Target Min.", nullptr));
        label_assign3_TargetMax->setText(QCoreApplication::translate("BossRc500AssignDialog", "Target Max.", nullptr));
        gp_Assign4->setTitle(QCoreApplication::translate("BossRc500AssignDialog", "ASSIGN 4", nullptr));
        assign4_Assign->setText(QCoreApplication::translate("BossRc500AssignDialog", "Active", nullptr));
        label_assign4_Source->setText(QCoreApplication::translate("BossRc500AssignDialog", "Source", nullptr));
        label_assign4_SourceMode->setText(QCoreApplication::translate("BossRc500AssignDialog", "Source Mode", nullptr));
        label_assign4_Target->setText(QCoreApplication::translate("BossRc500AssignDialog", "Target", nullptr));
        label_assign4_TargetMin->setText(QCoreApplication::translate("BossRc500AssignDialog", "Target Min.", nullptr));
        label_assign4_TargetMax->setText(QCoreApplication::translate("BossRc500AssignDialog", "Target Max.", nullptr));
        gp_Assign5->setTitle(QCoreApplication::translate("BossRc500AssignDialog", "ASSIGN 5", nullptr));
        assign5_Assign->setText(QCoreApplication::translate("BossRc500AssignDialog", "Active", nullptr));
        label_assign5_Source->setText(QCoreApplication::translate("BossRc500AssignDialog", "Source", nullptr));
        label_assign5_SourceMode->setText(QCoreApplication::translate("BossRc500AssignDialog", "Source Mode", nullptr));
        label_assign5_Target->setText(QCoreApplication::translate("BossRc500AssignDialog", "Target", nullptr));
        label_assign5_TargetMin->setText(QCoreApplication::translate("BossRc500AssignDialog", "Target Min.", nullptr));
        label_assign5_TargetMax->setText(QCoreApplication::translate("BossRc500AssignDialog", "Target Max.", nullptr));
        gp_Assign6->setTitle(QCoreApplication::translate("BossRc500AssignDialog", "ASSIGN 6", nullptr));
        assign6_Assign->setText(QCoreApplication::translate("BossRc500AssignDialog", "Active", nullptr));
        label_assign6_Source->setText(QCoreApplication::translate("BossRc500AssignDialog", "Source", nullptr));
        label_assign6_SourceMode->setText(QCoreApplication::translate("BossRc500AssignDialog", "Source Mode", nullptr));
        label_assign6_Target->setText(QCoreApplication::translate("BossRc500AssignDialog", "Target", nullptr));
        label_assign6_TargetMin->setText(QCoreApplication::translate("BossRc500AssignDialog", "Target Min.", nullptr));
        label_assign6_TargetMax->setText(QCoreApplication::translate("BossRc500AssignDialog", "Target Max.", nullptr));
        gp_Assign7->setTitle(QCoreApplication::translate("BossRc500AssignDialog", "ASSIGN 7", nullptr));
        assign7_Assign->setText(QCoreApplication::translate("BossRc500AssignDialog", "Active", nullptr));
        label_assign7_Source->setText(QCoreApplication::translate("BossRc500AssignDialog", "Source", nullptr));
        label_assign7_SourceMode->setText(QCoreApplication::translate("BossRc500AssignDialog", "Source Mode", nullptr));
        label_assign7_Target->setText(QCoreApplication::translate("BossRc500AssignDialog", "Target", nullptr));
        label_assign7_TargetMin->setText(QCoreApplication::translate("BossRc500AssignDialog", "Target Min.", nullptr));
        label_assign7_TargetMax->setText(QCoreApplication::translate("BossRc500AssignDialog", "Target Max.", nullptr));
        gp_Assign8->setTitle(QCoreApplication::translate("BossRc500AssignDialog", "ASSIGN 8", nullptr));
        assign8_Assign->setText(QCoreApplication::translate("BossRc500AssignDialog", "Active", nullptr));
        label_assign8_Source->setText(QCoreApplication::translate("BossRc500AssignDialog", "Source", nullptr));
        label_assign8_SourceMode->setText(QCoreApplication::translate("BossRc500AssignDialog", "Source Mode", nullptr));
        label_assign8_Target->setText(QCoreApplication::translate("BossRc500AssignDialog", "Target", nullptr));
        label_assign8_TargetMin->setText(QCoreApplication::translate("BossRc500AssignDialog", "Target Min.", nullptr));
        label_assign8_TargetMax->setText(QCoreApplication::translate("BossRc500AssignDialog", "Target Max.", nullptr));
        button_Apply->setText(QCoreApplication::translate("BossRc500AssignDialog", "Apply", nullptr));
        button_Cancel->setText(QCoreApplication::translate("BossRc500AssignDialog", "Cancel", nullptr));
    } // retranslateUi

};

QT_END_NAMESPACE

#endif // BOSS_2D_RC500_2D_ASSIGNKZPQTE_H
