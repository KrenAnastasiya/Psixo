#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "dialog.h"
#include "cabinet.h"
#include "enter.h"
#include <QTime>
#include<QFile>
#include <QDir>

#define APP_HOME_DIR QDir::homePath() + "/ppsixo"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setFixedSize(1024, 771);
    QFile file(APP_HOME_DIR+"/top.txt");
    file.open(QIODevice::ReadOnly);
    QString s=file.readLine();
    return;
    ui->label_9->setText(s);
    file.close();
    QList<QString> list;
    file.setFileName(APP_HOME_DIR+"/com.txt");
    file.open(QIODevice::ReadOnly);
    while(!file.atEnd()){
       s=file.readLine();
        list<<s;

    }
    file.close();
    QTime midnight(0,0,0);
    qsrand(midnight.secsTo(QTime::currentTime()));
    int n = qrand() % list.size();
    ui->label_8->setText(list[n]);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    Dialog d;

    d.my_count=0;
    d.t.resetResScore();

    d.t.setName("уровень внимательности");
    d.t.setInfo("Есть люди, которые всегда начеку — ничто их не может удивить, ошеломить, поставить в тупик. Им противоположность - люди рассеянные и невнимательные, теряющиеся в простейших ситуациях. Определите уровень своей внимательности. Ответьте «да» или «нет» на следующие вопросы.");
    d.t.setQNum(15);

     d.t.questions[0].setText("Часто ли Вы проигрываете в играх из-за невнимания?");
     d.t.questions[0].setNum(2);
     d.t.questions[0].setAnswer(0,"да");
     d.t.questions[0].setAnswer(1,"нет");
     d.t.questions[0].setScore(0,0);
     d.t.questions[0].setScore(1,1);


     d.t.questions[1].setText("Разыгрывают ли Вас друзья и знакомые?");
     d.t.questions[1].setNum(2);
     d.t.questions[1].setAnswer(0,"да");
     d.t.questions[1].setAnswer(1,"нет");
     d.t.questions[1].setScore(0,1);
     d.t.questions[1].setScore(1,0);


     d.t.questions[2].setText(" Умеете ли Вы заниматься каким-либо делом и одновременно слушать то, о чем говорят вокруг Вас?");
     d.t.questions[2].setNum(2);
     d.t.questions[2].setAnswer(0,"да");
     d.t.questions[2].setAnswer(1,"нет");
     d.t.questions[2].setScore(0,1);
     d.t.questions[2].setScore(1,0);


     d.t.questions[3].setText("Находили ли Вы когда-нибудь на улице деньги или ключи?");
     d.t.questions[3].setNum(2);
     d.t.questions[3].setAnswer(0,"да");
     d.t.questions[3].setAnswer(1,"нет");
     d.t.questions[3].setScore(0,1);
     d.t.questions[3].setScore(1,0);


     d.t.questions[4].setText("Смотрите ли внимательно по сторонам, когда переходите улицу?");
     d.t.questions[4].setNum(2);
     d.t.questions[4].setAnswer(0,"да");
     d.t.questions[4].setAnswer(1,"нет");
     d.t.questions[4].setScore(0,1);
     d.t.questions[4].setScore(1,0);


     d.t.questions[5].setText("Способны ли вспомнить в деталях фильм, который посмотрели два дня назад?");
     d.t.questions[5].setNum(2);
     d.t.questions[5].setAnswer(0,"да");
     d.t.questions[5].setAnswer(1,"нет");
     d.t.questions[5].setScore(0,1);
     d.t.questions[5].setScore(1,0);


     d.t.questions[6].setText("Раздражает ли Вас, когда кто-то отрывает Вас от чтения книги, газеты, просмотра телевизора или какого-либо иного занятия?");
     d.t.questions[6].setNum(2);
     d.t.questions[6].setAnswer(0,"да");
     d.t.questions[6].setAnswer(1,"нет");
     d.t.questions[6].setScore(0,0);
     d.t.questions[6].setScore(1,1);


     d.t.questions[7].setText(" Проверяете ли сдачу в магазине сразу у кассы?");
     d.t.questions[7].setNum(2);
     d.t.questions[7].setAnswer(0,"да");
     d.t.questions[7].setAnswer(1,"нет");
     d.t.questions[7].setScore(0,1);
     d.t.questions[7].setScore(1,0);


     d.t.questions[8].setText(" Быстро ли находите в квартире нужную вещь?");
     d.t.questions[8].setNum(2);
     d.t.questions[8].setAnswer(0,"да");
     d.t.questions[8].setAnswer(1,"нет");
     d.t.questions[8].setScore(0,1);
     d.t.questions[8].setScore(1,0);


     d.t.questions[9].setText("Вздрагиваете ли, если Вас внезапно кто-то окликнет на улице?");
     d.t.questions[9].setNum(2);
     d.t.questions[9].setAnswer(0,"да");
     d.t.questions[9].setAnswer(1,"нет");
     d.t.questions[9].setScore(0,0);
     d.t.questions[9].setScore(1,1);

     d.t.questions[10].setText(" Бывает ли, что Вы одного человека принимаете за другого?");
     d.t.questions[10].setNum(2);
     d.t.questions[10].setAnswer(0,"да");
     d.t.questions[10].setAnswer(1,"нет");
     d.t.questions[10].setScore(0,0);
     d.t.questions[10].setScore(1,1);


     d.t.questions[11].setText("Увлекшись беседой, можете ли пропустить нужную Вам остановку?");
     d.t.questions[11].setNum(2);
     d.t.questions[11].setAnswer(0,"да");
     d.t.questions[11].setAnswer(1,"нет");
     d.t.questions[11].setScore(0,0);
     d.t.questions[11].setScore(1,1);


     d.t.questions[12].setText("Можете ли Вы, не мешкая назвать даты рождения Ваших близких?");
     d.t.questions[12].setNum(2);
     d.t.questions[12].setAnswer(0,"да");
     d.t.questions[12].setAnswer(1,"нет");
     d.t.questions[12].setScore(0,1);
     d.t.questions[12].setScore(1,0);


     d.t.questions[13].setText("Легко ли Вы пробуждаетесь ото сна?");
     d.t.questions[13].setNum(2);
     d.t.questions[13].setAnswer(0,"да");
     d.t.questions[13].setAnswer(1,"нет");
     d.t.questions[13].setScore(0,1);
     d.t.questions[13].setScore(1,0);


     d.t.questions[14].setText(" Найдете ли Вы в большом городе без посторонней помощи то место (музей, кинотеатр, магазин, учреждение), где побывали единожды в прошлом году?");
     d.t.questions[14].setNum(2);
     d.t.questions[14].setAnswer(0,"да");
     d.t.questions[14].setAnswer(1,"нет");
     d.t.questions[14].setScore(0,1);
     d.t.questions[14].setScore(1,0);

     d.t.setResNum(3);

     d.t.setKey(0,0);
     d.t.setRes(0,"Вы очень рассеянны, и это является причиной многих неприятностей в Вашей жизни. Что значит, например, забыть завернуть водопроводный кран или потерять взятую у кого-то редкую книгу? Бывает, что люди даже бравируют своей рассеянностью, хотя, если разобраться, это качество отрицательное. В зрелые годы и особенно в молодые каждому под силу перебороть свою невнимательность, воспитать собранность и постоянно тренировать память.");

     d.t.setKey(1,5);
     d.t.setRes(1,"Вы достаточно внимательны, не забываете ничего важного. Однако, как говорится, и на старуху бывает проруха — кое-что можете запамятовать. Иногда проявляете рассеянность, что оборачивается досадными недоразумениями. И все же Вы способны в ответственный момент сосредоточиться и не допустить какой-либо промашки.");

     d.t.setKey(2,11);
     d.t.setRes(2," Вы удивительно внимательны и проницательны. Такой памяти и такой внимательности остается только позавидовать — это дано не каждому.");


     d.showOut();
      d.exec();
}

void MainWindow::on_pushButton_7_clicked()
{
    QFile file(APP_HOME_DIR+"/cur.txt");
    file.open(QIODevice::ReadOnly);
    QString s=file.readLine();
    if(s=="")
    {
       enter e;
       e.exec();
    }
    else
    {
        cabinet d;
           d.setInfo();
         d.exec();
    }

}

void MainWindow::on_pushButton_2_clicked()
{
    Dialog d;

    d.my_count=0;
    d.t.resetResScore();

    d.t.setName("Вы прагматик или мечтатель?");
    d.t.setInfo("Как понять, кто вы по складу характера? Для того чтобы изменить свою жизнь к лучшему, надо сначала представить, что тебе нужно, затем очень этого захотеть. Фантазии и мечты уравновешивают прагматичный подход. Именно с них нередко начинается движение вперед. Хотя любая фантазия легко может превратиться в средство ухода от реальности. Одним словом, во всем необходимо равновесие, и насколько его удается вам сохранять, поможет определить тест.");
    d.t.setQNum(17);

     d.t.questions[0].setText("Вы любите ездить на большой скорости?");
     d.t.questions[0].setNum(2);
     d.t.questions[0].setAnswer(0,"да");
     d.t.questions[0].setAnswer(1,"нет");
     d.t.questions[0].setScore(0,0);
     d.t.questions[0].setScore(1,5);


     d.t.questions[1].setText("Часто ли вы бываете рассеянны, беседуя с людьми?");
     d.t.questions[1].setNum(2);
     d.t.questions[1].setAnswer(0,"да");
     d.t.questions[1].setAnswer(1,"нет");
     d.t.questions[1].setScore(0,5);
     d.t.questions[1].setScore(1,0);


     d.t.questions[2].setText("Вы легкоранимый человек, ничего не стоит вас обидеть или задеть?");
     d.t.questions[2].setNum(2);
     d.t.questions[2].setAnswer(0,"да");
     d.t.questions[2].setAnswer(1,"нет");
     d.t.questions[2].setScore(0,5);
     d.t.questions[2].setScore(1,0);


     d.t.questions[3].setText("У вас иногда появляется желание жить в другом городе?");
     d.t.questions[3].setNum(2);
     d.t.questions[3].setAnswer(0,"да");
     d.t.questions[3].setAnswer(1,"нет");
     d.t.questions[3].setScore(0,5);
     d.t.questions[3].setScore(1,0);


     d.t.questions[4].setText("Вы согласны с тем, что не стоит делиться с окружающими своими проблемами?");
     d.t.questions[4].setNum(2);
     d.t.questions[4].setAnswer(0,"да");
     d.t.questions[4].setAnswer(1,"нет");
     d.t.questions[4].setScore(0,0);
     d.t.questions[4].setScore(1,5);


     d.t.questions[5].setText("У вас часто бывают спады и подъемы настроения?");
     d.t.questions[5].setNum(2);
     d.t.questions[5].setAnswer(0,"да");
     d.t.questions[5].setAnswer(1,"нет");
     d.t.questions[5].setScore(0,5);
     d.t.questions[5].setScore(1,0);


     d.t.questions[6].setText("Случается ли так: неприятности настолько выбивают из колеи, что вы даже заболеваете?");
     d.t.questions[6].setNum(2);
     d.t.questions[6].setAnswer(0,"да");
     d.t.questions[6].setAnswer(1,"нет");
     d.t.questions[6].setScore(0,5);
     d.t.questions[6].setScore(1,0);


     d.t.questions[7].setText("Вы любите помечтать перед сном в постели?");
     d.t.questions[7].setNum(2);
     d.t.questions[7].setAnswer(0,"да");
     d.t.questions[7].setAnswer(1,"нет");
     d.t.questions[7].setScore(0,5);
     d.t.questions[7].setScore(1,0);


     d.t.questions[8].setText("Хранить любовные письма глупо?");
     d.t.questions[8].setNum(2);
     d.t.questions[8].setAnswer(0,"да");
     d.t.questions[8].setAnswer(1,"нет");
     d.t.questions[8].setScore(0,0);
     d.t.questions[8].setScore(1,5);


     d.t.questions[9].setText("Верно ли, что вы обычно предпочитаете книги общению с людьми?");
     d.t.questions[9].setNum(2);
     d.t.questions[9].setAnswer(0,"да");
     d.t.questions[9].setAnswer(1,"нет");
     d.t.questions[9].setScore(0,5);
     d.t.questions[9].setScore(1,0);

     d.t.questions[10].setText("Всем остальным жанрам кино вы предпочитаете мелодрамы и романтические комедии?");
     d.t.questions[10].setNum(2);
     d.t.questions[10].setAnswer(0,"да");
     d.t.questions[10].setAnswer(1,"нет");
     d.t.questions[10].setScore(0,5);
     d.t.questions[10].setScore(1,0);


     d.t.questions[11].setText("Вы разделяете мнение, что характер – это наследственная черта?");
     d.t.questions[11].setNum(2);
     d.t.questions[11].setAnswer(0,"да");
     d.t.questions[11].setAnswer(1,"нет");
     d.t.questions[11].setScore(0,5);
     d.t.questions[11].setScore(1,0);


     d.t.questions[12].setText("Бывает ли, что в задумчивости вы проезжаете нужную остановку?");
     d.t.questions[12].setNum(2);
     d.t.questions[12].setAnswer(0,"да");
     d.t.questions[12].setAnswer(1,"нет");
     d.t.questions[12].setScore(0,5);
     d.t.questions[12].setScore(1,0);


     d.t.questions[13].setText("Берясь за какую-либо работу, вы не любите связывать себя планом действий, а во многом следуете интуиции?");
     d.t.questions[13].setNum(2);
     d.t.questions[13].setAnswer(0,"да");
     d.t.questions[13].setAnswer(1,"нет");
     d.t.questions[13].setScore(0,5);
     d.t.questions[13].setScore(1,0);


     d.t.questions[14].setText("Имеете ли вы обыкновение сначала просматривать журнал или газету, а затем лишь приступать к чтению каких-либо статей?");
     d.t.questions[14].setNum(2);
     d.t.questions[14].setAnswer(0,"да");
     d.t.questions[14].setAnswer(1,"нет");
     d.t.questions[14].setScore(0,5);
     d.t.questions[14].setScore(1,0);

     d.t.questions[15].setText("Вы избегаете мыслей о смерти?");
     d.t.questions[15].setNum(2);
     d.t.questions[15].setAnswer(0,"да");
     d.t.questions[15].setAnswer(1,"нет");
     d.t.questions[15].setScore(0,5);
     d.t.questions[15].setScore(1,0);

     d.t.questions[16].setText("Часто ли бывает, что вы действуете под влиянием сиюминутного настроения?");
     d.t.questions[16].setNum(2);
     d.t.questions[16].setAnswer(0,"да");
     d.t.questions[16].setAnswer(1,"нет");
     d.t.questions[16].setScore(0,5);
     d.t.questions[16].setScore(1,0);

     d.t.setResNum(4);

     d.t.setKey(0,0);
     d.t.setRes(0,"Если вы полагаете, что предаваться мечтам и фантазировать – значит в пустую тратить время, то вы заблуждаетесь. В разумных пределах это основа любой творческой деятельности. Разрешите себе иногда помечтать, что поможет вам полнее раскрыть свой творческий потенциал.");

     d.t.setKey(1,30);
     d.t.setRes(1,"Судя по всему, вам удалось найти золотую середину между иллюзиями и реальностью. Несмотря на то что вам свойственна некоторая мечтательность, вы вполне соизмеряете ее с действительными возможностями.");

     d.t.setKey(2,55);
     d.t.setRes(2,"Для вас существует риск забыться, увлекшись своими мечтами. Хотя в целом вы способны трезво смотреть на вещи. Старайтесь уделять больше внимания поступающей информации и анализу ситуации!");

     d.t.setKey(3,75);
     d.t.setRes(3,"Пожалуй, вы прячетесь от действительности, предпочитая не решать проблемы, а уходить от них в мир своих грез и фантазий. Если вы хотите оградить себя от неприятностей, смотрите на вещи реальнее.");



     d.showOut();
      d.exec();
}

void MainWindow::on_pushButton_3_clicked()
{
Dialog d;
    d.my_count=0;
    d.t.resetResScore();

    d.t.setName("Каков уровень Вашего воображения?");
    d.t.setInfo("");
    d.t.setQNum(12);

     d.t.questions[0].setText("Интересуетесь ли Вы живописью?");
     d.t.questions[0].setNum(2);
     d.t.questions[0].setAnswer(0,"да");
     d.t.questions[0].setAnswer(1,"нет");
     d.t.questions[0].setScore(0,2);
     d.t.questions[0].setScore(1,1);


     d.t.questions[1].setText("Часто ли Вы скучаете?");
     d.t.questions[1].setNum(2);
     d.t.questions[1].setAnswer(0,"да");
     d.t.questions[1].setAnswer(1,"нет");
     d.t.questions[1].setScore(0,1);
     d.t.questions[1].setScore(1,2);


     d.t.questions[2].setText("Рассказывая какую-либо историю, любите ли Вы украсить ее красочной деталью, добавленной от себя? ");
     d.t.questions[2].setNum(2);
     d.t.questions[2].setAnswer(0,"да");
     d.t.questions[2].setAnswer(1,"нет");
     d.t.questions[2].setScore(0,1);
     d.t.questions[2].setScore(1,0);


     d.t.questions[3].setText("Инициативны ли Вы на работе?");
     d.t.questions[3].setNum(2);
     d.t.questions[3].setAnswer(0,"да");
     d.t.questions[3].setAnswer(1,"нет");
     d.t.questions[3].setScore(0,2);
     d.t.questions[3].setScore(1,1);


     d.t.questions[4].setText("\"Широко\" ли Вы пишите, много ли занимаете место на бумаге? ");
     d.t.questions[4].setNum(2);
     d.t.questions[4].setAnswer(0,"да");
     d.t.questions[4].setAnswer(1,"нет");
     d.t.questions[4].setScore(0,1);
     d.t.questions[4].setScore(1,0);


     d.t.questions[5].setText("Руководствуетесь ли Вы в выборе одежды законами моды или собственным вкусом?");
     d.t.questions[5].setNum(2);
     d.t.questions[5].setAnswer(0,"да");
     d.t.questions[5].setAnswer(1,"нет");
     d.t.questions[5].setScore(0,2);
     d.t.questions[5].setScore(1,1);


     d.t.questions[6].setText("Любите ли Вы рисовать во время собраний или лекций на листе бумаги одни и те же фигурки? ");
     d.t.questions[6].setNum(2);
     d.t.questions[6].setAnswer(0,"да");
     d.t.questions[6].setAnswer(1,"нет");
     d.t.questions[6].setScore(0,0);
     d.t.questions[6].setScore(1,1);


     d.t.questions[7].setText("Слушая музыку, представляете ли Вы какие-либо образы, связанные с ней?");
     d.t.questions[7].setNum(2);
     d.t.questions[7].setAnswer(0,"да");
     d.t.questions[7].setAnswer(1,"нет");
     d.t.questions[7].setScore(0,1);
     d.t.questions[7].setScore(1,0);


     d.t.questions[8].setText("Любите ли Вы писать длинные письма?");
     d.t.questions[8].setNum(2);
     d.t.questions[8].setAnswer(0,"да");
     d.t.questions[8].setAnswer(1,"нет");
     d.t.questions[8].setScore(0,2);
     d.t.questions[8].setScore(1,1);


     d.t.questions[9].setText("Видите ли Вы иногда цветные сны?");
     d.t.questions[9].setNum(2);
     d.t.questions[9].setAnswer(0,"да");
     d.t.questions[9].setAnswer(1,"нет");
     d.t.questions[9].setScore(0,1);
     d.t.questions[9].setScore(1,0);

     d.t.questions[10].setText("Любите ли Вы мысленно бывать в тех местах, которые знаете лишь по рассказам? ");
     d.t.questions[10].setNum(2);
     d.t.questions[10].setAnswer(0,"да");
     d.t.questions[10].setAnswer(1,"нет");
     d.t.questions[10].setScore(0,1);
     d.t.questions[10].setScore(1,0);


     d.t.questions[11].setText("Часто ли Вы плачете, расстраиваетесь в кино? ");
     d.t.questions[11].setNum(2);
     d.t.questions[11].setAnswer(0,"да");
     d.t.questions[11].setAnswer(1,"нет");
     d.t.questions[11].setScore(0,1);
     d.t.questions[11].setScore(1,0);




     d.t.setResNum(3);

     d.t.setKey(0,5);
     d.t.setRes(0," Вы реалист в полном смысле этого слова. В облаках не витаете. Однако немного фантазии еще никому не вредило.");

     d.t.setKey(1,9);
     d.t.setRes(1,"У Вас среднее воображение. Такое воображение встречается у очень многих людей. От Вас и только от Вас зависит, сумеете ли Вы развить его.");

     d.t.setKey(2,14);
     d.t.setRes(2," У Вас богатое воображение. Если Вы сумеете применить его в жизни, то добьетесь больших творческих успехов.");


     d.showOut();
      d.exec();
}

void MainWindow::on_pushButton_4_clicked()
{
    Dialog d;

    d.my_count=0;
    d.t.resetResScore();

    d.t.setName("Любите ли Вы себя");
    d.t.setInfo("Чтобы Вас полюбили окружающие, Вам нужно для начала полюбить себя – со всеми недостатками и достоинствами. Это аксиома. Комплексы, низкая самооценка, жесткая самокритика вряд ли хорошие помощники на пути к счастью, гармонии и успеху. Другое дело – когда Вы цените сами себя, знаете свои сильные стороны. Главное – не перейти границу, где начинается завышенная самооценка. Давайте проверим, насколько Вы любите себя.");
    d.t.setQNum(10);

     d.t.questions[0].setText("Чувствуете ли Вы себя хорошо таким, каков Вы есть?");
     d.t.questions[0].setNum(2);
     d.t.questions[0].setAnswer(0,"да");
     d.t.questions[0].setAnswer(1,"нет");
     d.t.questions[0].setScore(0,5);
     d.t.questions[0].setScore(1,0);


     d.t.questions[1].setText(" Считаете ли, что Вас преследуют неудачи?");
     d.t.questions[1].setNum(2);
     d.t.questions[1].setAnswer(0,"да");
     d.t.questions[1].setAnswer(1,"нет");
     d.t.questions[1].setScore(0,0);
     d.t.questions[1].setScore(1,5);


     d.t.questions[2].setText("Сопоставляете ли свой поступок с мнением окружающих?");
     d.t.questions[2].setNum(2);
     d.t.questions[2].setAnswer(0,"да");
     d.t.questions[2].setAnswer(1,"нет");
     d.t.questions[2].setScore(0,0);
     d.t.questions[2].setScore(1,5);


     d.t.questions[3].setText("Имеете ли привычку вспоминать прежние разговоры и ситуации, чтобы понять, что предпринимали в подобных ситуациях другие люди?");
     d.t.questions[3].setNum(2);
     d.t.questions[3].setAnswer(0,"да");
     d.t.questions[3].setAnswer(1,"нет");
     d.t.questions[3].setScore(0,0);
     d.t.questions[3].setScore(1,5);


     d.t.questions[4].setText("Испытываете ли Вы смущение, когда Вас хвалят в вашем присутствии?");
     d.t.questions[4].setNum(2);
     d.t.questions[4].setAnswer(0,"да");
     d.t.questions[4].setAnswer(1,"нет");
     d.t.questions[4].setScore(0,0);
     d.t.questions[4].setScore(1,5);


     d.t.questions[5].setText("Можете ли Вы длительное время находиться в одиночестве?");
     d.t.questions[5].setNum(2);
     d.t.questions[5].setAnswer(0,"да");
     d.t.questions[5].setAnswer(1,"нет");
     d.t.questions[5].setScore(0,0);
     d.t.questions[5].setScore(1,5);


     d.t.questions[6].setText("Чувствуете ли несомненную зависимость между материальным положением и душевным комфортом?");
     d.t.questions[6].setNum(2);
     d.t.questions[6].setAnswer(0,"да");
     d.t.questions[6].setAnswer(1,"нет");
     d.t.questions[6].setScore(0,0);
     d.t.questions[6].setScore(1,5);


     d.t.questions[7].setText("Часто ли испытываете опасения, что случиться самое плохое?");
     d.t.questions[7].setNum(2);
     d.t.questions[7].setAnswer(0,"да");
     d.t.questions[7].setAnswer(1,"нет");
     d.t.questions[7].setScore(0,0);
     d.t.questions[7].setScore(1,5);


     d.t.questions[8].setText("Трудно ли Вам проявлять свои чувства к другим?");
     d.t.questions[8].setNum(2);
     d.t.questions[8].setAnswer(0,"да");
     d.t.questions[8].setAnswer(1,"нет");
     d.t.questions[8].setScore(0,0);
     d.t.questions[8].setScore(1,5);




     d.t.questions[9].setText("Можете ли противостоять общепринятым правилам, если Вас они не устраивают?");
     d.t.questions[9].setNum(2);
     d.t.questions[9].setAnswer(0,"да");
     d.t.questions[9].setAnswer(1,"нет");
     d.t.questions[9].setScore(0,0);
     d.t.questions[9].setScore(1,5);


     d.t.setResNum(3);

     d.t.setKey(0,0);
     d.t.setRes(0," Вы определенно не любите себя. Ожидаете, что с Вами случиться плохое, и, признайтесь, эти Ваши ожидания нередко сбываются. Бывают мгновения, когда Вы ненавидите себя и в результате принимаете ошибочные решения. Пришло время измениться. Подумайте об этом!");

     d.t.setKey(1,15);
     d.t.setRes(1,"Трудно сказать, любите ли Вы себя. Наверняка Вы редко думаете об этом. Вы не всегда используете все свои способности, обращая чрезмерное внимание на свои слабости, а также на слабости других. Это может Вызвать у Вас минутную неприязнь к самому себе, невозможность отвлечься от собственной личности, дарить другим внимание и любовь.");

     d.t.setKey(2,35);
     d.t.setRes(2," Вы себя любите, значит, любите и других. Это в большой степени предопределяет Ваши успехи и жизнерадостность. Благодаря этому, получаете от окружающих положительные стимулы, и корабль Вашей жизни плывет под парусами. Вы чувствуете свою необходимость и считаете, что жизнь имеет смысл. Во всяком случае, Вы способны придать ей необходимый индивидуальный смысл. Вы умеете оценивать достоинства других. Помогает Вам и то, что Вы считаете себя личностью с достоинствами и потенциальными возможностями.");




     d.showOut();
      d.exec();
}

void MainWindow::on_pushButton_5_clicked()
{
    Dialog d;

    d.my_count=0;
    d.t.resetResScore();

    d.t.setName("Насколько вы ленивы");
    d.t.setInfo("Кто-то считает лень – двигателем технического прогресса. Кто-то относится к этому явлению, как к «болячке», из-за которой можно упустить свой шанс и удачу. Люди из первой категории зачастую наблюдают за течение жизни со стороны, пропуская самое интересное, что в ней есть. Представители второй категории, как правило, находят свое предназначение, а с ним уважение и благополучие. Что ближе Вам? Узнаете, ответив на ниже приведенные вопросы.");
    d.t.setQNum(10);

     d.t.questions[0].setText("Если я дома не один (-на), никогда не снимаю телефонную трубку, надеясь, что это сделает кто-то другой. ");
     d.t.questions[0].setNum(2);
     d.t.questions[0].setAnswer(0,"да");
     d.t.questions[0].setAnswer(1,"нет");
     d.t.questions[0].setScore(0,1);
     d.t.questions[0].setScore(1,0);


     d.t.questions[1].setText("Часто опаздываю на работу или на встречу, поскольку встаю с постели в последний момент.");
     d.t.questions[1].setNum(2);
     d.t.questions[1].setAnswer(0,"да");
     d.t.questions[1].setAnswer(1,"нет");
     d.t.questions[1].setScore(0,1);
     d.t.questions[1].setScore(1,0);


     d.t.questions[2].setText("Не выхожу из маршрутки (машины) раньше времени, чтобы не идти пешком лишние метры пешком, даже если застрял (-а) в пробке.");
     d.t.questions[2].setNum(2);
     d.t.questions[2].setAnswer(0,"да");
     d.t.questions[2].setAnswer(1,"нет");
     d.t.questions[2].setScore(0,1);
     d.t.questions[2].setScore(1,0);


     d.t.questions[3].setText(" Не бегаю, не хожу пешком, не езжу на велосипеде, не занимаюсь спортом. Физические нагрузки очень ограничены.");
     d.t.questions[3].setNum(2);
     d.t.questions[3].setAnswer(0,"да");
     d.t.questions[3].setAnswer(1,"нет");
     d.t.questions[3].setScore(0,1);
     d.t.questions[3].setScore(1,0);


     d.t.questions[4].setText(" Смотрю телевизор или читаю почти всегда лежа на диване.");
     d.t.questions[4].setNum(2);
     d.t.questions[4].setAnswer(0,"да");
     d.t.questions[4].setAnswer(1,"нет");
     d.t.questions[4].setScore(0,1);
     d.t.questions[4].setScore(1,0);


     d.t.questions[5].setText("Посвящаю хотя бы два часа в день \"ничегонеделанию\" - размышляю, мечтаю или просто смотрю бесцельно вокруг.");
     d.t.questions[5].setNum(2);
     d.t.questions[5].setAnswer(0,"да");
     d.t.questions[5].setAnswer(1,"нет");
     d.t.questions[5].setScore(0,1);
     d.t.questions[5].setScore(1,0);


     d.t.questions[6].setText("После работы редко ищу дополнительное занятие.");
     d.t.questions[6].setNum(2);
     d.t.questions[6].setAnswer(0,"да");
     d.t.questions[6].setAnswer(1,"нет");
     d.t.questions[6].setScore(0,1);
     d.t.questions[6].setScore(1,0);


     d.t.questions[7].setText(" Если поблизости нет урны для мусора, иногда бросаю его на землю.");
     d.t.questions[7].setNum(2);
     d.t.questions[7].setAnswer(0,"да");
     d.t.questions[7].setAnswer(1,"нет");
     d.t.questions[7].setScore(0,1);
     d.t.questions[7].setScore(1,0);


     d.t.questions[8].setText("Никогда не подметаю под кроватью или за мебелью.");
     d.t.questions[8].setNum(2);
     d.t.questions[8].setAnswer(0,"да");
     d.t.questions[8].setAnswer(1,"нет");
     d.t.questions[8].setScore(0,1);
     d.t.questions[8].setScore(1,0);


     d.t.questions[9].setText("Если работаю вместе с кем-то, стараюсь, чтобы он сделал как можно больше. Не вижу причины напрягаться после того, как результат записан на общий счет.");
     d.t.questions[9].setNum(2);
     d.t.questions[9].setAnswer(0,"да");
     d.t.questions[9].setAnswer(1,"нет");
     d.t.questions[9].setScore(0,1);
     d.t.questions[9].setScore(1,0);


     d.t.setResNum(3);

     d.t.setKey(0,0);
     d.t.setRes(0,"У Вас нет даже намека на лень. А крайности, говорят, вредны. Может, стоит хотя бы некоторое время проводить в бездействии. Не исключено, что это окажется полезным.");

     d.t.setKey(1,4);
     d.t.setRes(1,"Как большинство людей Вы имеете склонность к лени. Но можно сказать, что Вы в границах нормы.");

     d.t.setKey(2,8);
     d.t.setRes(2,"Вы на редкость ленивы. Вряд ли Вас кто-нибудь обвинит в излишней активности. Тут у Вас просто нет конкурентов. И все-таки следовало бы приложить усилия. Возможно, Ваша лень мешает Вам в карьере, в отношениях с окружающими. Они вынуждены компенсировать Ваше бездействие, это может озлобить их.");


     d.showOut();
      d.exec();
}

void MainWindow::on_pushButton_6_clicked()
{
    Dialog d;

    d.my_count=0;
    d.t.resetResScore();

    d.t.setName("Есть ли у вас задатки лидера?");
    d.t.setInfo("Вас посещают мысли о том, чтобы из роли ведомого перейти в роль ведущего? На работе, в компании друзей, дома. Если так, может, пора взять инициативу на себя? Не исключено, что Вы – прирожденный лидер. Только прячете этот талант очень глубоко. Сейчас мы это проверим.");
    d.t.setQNum(15);

     d.t.questions[0].setText("Еще в детстве необходимость подчиняться другим людям была для меня проблемой.");
     d.t.questions[0].setNum(2);
     d.t.questions[0].setAnswer(0,"да");
     d.t.questions[0].setAnswer(1,"нет");
     d.t.questions[0].setScore(0,10);
     d.t.questions[0].setScore(1,0);


     d.t.questions[1].setText("Думаю, что прогресс в науке и культуре немыслим без людей с развитыми потребностями управлять другими.");
     d.t.questions[1].setNum(2);
     d.t.questions[1].setAnswer(0,"да");
     d.t.questions[1].setAnswer(1,"нет");
     d.t.questions[1].setScore(0,10);
     d.t.questions[1].setScore(1,0);


     d.t.questions[2].setText(" Думаю, что настоящий мужчина умеет подчинять своей воле женщин.");
     d.t.questions[2].setNum(2);
     d.t.questions[2].setAnswer(0,"да");
     d.t.questions[2].setAnswer(1,"нет");
     d.t.questions[2].setScore(0,10);
     d.t.questions[2].setScore(1,0);


     d.t.questions[3].setText("Честно говоря, не люблю, когда близкие опекают.");
     d.t.questions[3].setNum(2);
     d.t.questions[3].setAnswer(0,"да");
     d.t.questions[3].setAnswer(1,"нет");
     d.t.questions[3].setScore(0,10);
     d.t.questions[3].setScore(1,0);


     d.t.questions[4].setText("Согласен (-на) с утверждением, что истинная натура женщины - покорность.");
     d.t.questions[4].setNum(2);
     d.t.questions[4].setAnswer(0,"да");
     d.t.questions[4].setAnswer(1,"нет");
     d.t.questions[4].setScore(0,10);
     d.t.questions[4].setScore(1,0);


     d.t.questions[5].setText("Не все, возможно, догадываются, что брать все на себя мне приходится из-за постоянных опасений за благополучие родных.");
     d.t.questions[5].setNum(2);
     d.t.questions[5].setAnswer(0,"да");
     d.t.questions[5].setAnswer(1,"нет");
     d.t.questions[5].setScore(0,10);
     d.t.questions[5].setScore(1,0);


     d.t.questions[6].setText("По-моему, большинство проблем возникает из-за недостатка лидеров с \"железной рукой\".");
     d.t.questions[6].setNum(2);
     d.t.questions[6].setAnswer(0,"да");
     d.t.questions[6].setAnswer(1,"нет");
     d.t.questions[6].setScore(0,10);
     d.t.questions[6].setScore(1,0);


     d.t.questions[7].setText("В трудных ситуациях, требующих быстрого решения, мне обычно не надо много времени, чтобы поступить правильно.");
     d.t.questions[7].setNum(2);
     d.t.questions[7].setAnswer(0,"да");
     d.t.questions[7].setAnswer(1,"нет");
     d.t.questions[7].setScore(0,10);
     d.t.questions[7].setScore(1,0);


     d.t.questions[8].setText("Сейчас мне комфортнее руководить другими людьми, чем быть в подчинении.");
     d.t.questions[8].setNum(2);
     d.t.questions[8].setAnswer(0,"да");
     d.t.questions[8].setAnswer(1,"нет");
     d.t.questions[8].setScore(0,10);
     d.t.questions[8].setScore(1,0);


     d.t.questions[9].setText(" Не умею и не хочу открываться до конца не перед кем.");
     d.t.questions[9].setNum(2);
     d.t.questions[9].setAnswer(0,"да");
     d.t.questions[9].setAnswer(1,"нет");
     d.t.questions[9].setScore(0,10);
     d.t.questions[9].setScore(1,0);

     d.t.questions[10].setText("Мне приятны мечты о \"тихой пристани\".");
     d.t.questions[10].setNum(2);
     d.t.questions[10].setAnswer(0,"да");
     d.t.questions[10].setAnswer(1,"нет");
     d.t.questions[10].setScore(0,10);
     d.t.questions[10].setScore(1,0);

     d.t.questions[11].setText("Думаю, что подчиненному необходимо уметь выполнять любые приказы начальника.");
     d.t.questions[11].setNum(2);
     d.t.questions[11].setAnswer(0,"да");
     d.t.questions[11].setAnswer(1,"нет");
     d.t.questions[11].setScore(0,10);
     d.t.questions[11].setScore(1,0);

     d.t.questions[12].setText(". Возможно, это странно, но в отношениях с близкими мне людьми испытываю внутреннее сопротивление, когда вынужден (-на) просить о чем-то.");
     d.t.questions[12].setNum(2);
     d.t.questions[12].setAnswer(0,"да");
     d.t.questions[12].setAnswer(1,"нет");
     d.t.questions[12].setScore(0,10);
     d.t.questions[12].setScore(1,0);

     d.t.questions[13].setText("Часто бывают ситуации, когда кто-то ждет от меня объяснений, хотя, на мой взгляд, все и так ясно.");
     d.t.questions[13].setNum(2);
     d.t.questions[13].setAnswer(0,"да");
     d.t.questions[13].setAnswer(1,"нет");
     d.t.questions[13].setScore(0,10);
     d.t.questions[13].setScore(1,0);

     d.t.questions[14].setText("Мне кажется, что мой характер похож на характер отца (матери),который (-ая) является опорой в семье.");
     d.t.questions[14].setNum(2);
     d.t.questions[14].setAnswer(0,"да");
     d.t.questions[14].setAnswer(1,"нет");
     d.t.questions[14].setScore(0,10);
     d.t.questions[14].setScore(1,0);

     d.t.setResNum(3);

     d.t.setKey(0,0);
     d.t.setRes(0,"Ваши ответы характерны для \"психологического ужа\". Вы способны проглотить любой упрек, даже если это не обязательно, всем пожертвовать, хотя этого никто не требует. Часто, чувствуя собственное бессилие, Вы способны на... решительный поступок. Испытывая беспомощность, ищите в других недостающие Вам черты характера. И в этом находите смысл и надежду на лучшую для Вас жизнь.");

     d.t.setKey(1,50);
     d.t.setRes(1,"Гармония и решительность, мудрость и расчет, умение дать мудрый совет - вот Ваши главные достоинства. Если необходимо - руководите, если нужно – уступаете. Всегда принимаете во внимание чужое мнение и желание. Но только Вам известно, всегда ли Вы добиваетесь цели достойными средствами.");

     d.t.setKey(2,100);
     d.t.setRes(2,"Ваши ответы рисуют образ великого диктатора, который считает, что знает, как есть и как должно быть. И такому поведению Вы легко находите оправдание. Вы умеете убеждать и руководить другими, заставить выполнить работу в срок. Но иногда что-то в тоне, взгляде, жесте Ваших \"подчиненных\" говорит: дай передохнуть!");


     d.showOut();
      d.exec();
}

void MainWindow::on_pushButton_8_clicked()
{
    QFile file(APP_HOME_DIR+"/top.txt");
    file.open(QIODevice::ReadOnly);
    QString s=file.readLine();
    file.close();
    int r = s.toInt();
    r++;
    qDebug() << APP_HOME_DIR;
     ui->label_9->setText(QString::number(r));
     file.setFileName(APP_HOME_DIR+"/top.txt");
     file.open(QIODevice::WriteOnly);
     file.write(QString::number(r).toUtf8().data());
     file.close();


}

void MainWindow::on_pushButton_9_clicked()
{
    QFile file(APP_HOME_DIR+"/top.txt");
    file.open(QIODevice::ReadOnly);
    QString s=file.readLine();
    file.close();
    int r = s.toInt();
   if(r>0){
       r--;
       ui->label_9->setText(QString::number(r));
       file.setFileName(APP_HOME_DIR+"/top.txt");
       file.open(QIODevice::WriteOnly);
       file.write(QString::number(r).toUtf8().data());
       file.close();
   }

}

void MainWindow::on_pushButton_10_clicked()
{
    QString text=ui->textEdit->toPlainText();
    ui->textEdit->clear();
    if(text!=""){text+="\r\n";}
    QFile file(APP_HOME_DIR+"/com.txt");
    file.open(QIODevice::ReadOnly);
    QString s;
    while(!file.atEnd()){
        s=file.readLine();
        if(s!=""){
            text+=s;
           // text+="\r\n";
        }

    }
    file.close();
    file.open(QIODevice::WriteOnly);
    file.write(text.toUtf8().data());
    file.close();
}

void MainWindow::on_pushButton_11_clicked()
{
    QList<QString> list;
    QFile file(APP_HOME_DIR+"/com.txt");
    file.open(QIODevice::ReadOnly);
    QString s;
    while(!file.atEnd()){
        s=file.readLine();
        if(s!=""){
            list<<s;

        }

    }
    file.close();
    QTime midnight(0,0,0);
    qsrand(midnight.secsTo(QTime::currentTime()));
    int n = qrand() % list.size();
    ui->label_8->setText(list[n]);

}

void MainWindow::on_actionPersonal_triggered()
{

}
