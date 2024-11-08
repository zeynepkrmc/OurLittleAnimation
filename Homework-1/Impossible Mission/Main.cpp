//#include <windows.h>
//#include "icb_gui.h"
//
////#pragma comment (lib,"winmm.lib")
//
//int F1, F2;
//ICBYTES Corridor, Agent;
//ICBYTES AgentStanding; // Ajan ayakta dururken
//ICBYTES AgentRun[4];   // Normal h�zda ko�an ajan
//ICBYTES AgentRunFast[6]; // H�zland�r�lm�� ajan ko�ma dizisi
//
//void ICGUI_Create() {
//    ICG_MWSize(1200, 830);
//    ICG_MWTitle("IMPOSSIBLE MISSION");
//}
//
//void LoadAgentRun() {
//    ReadImage("grass.bmp", Corridor);
//
//    // Ajan�n durdu�u pozisyonu y�kleme
//    Copy(Agent, 212, 7, 45, 55, AgentStanding);
//    PasteNon0(AgentStanding, 600, 450, Corridor);
//
//    // Ko�ma animasyonu i�in diziyi doldurma
//    ICBYTES cordinat{ {210, 7, 45, 55}, {286, 7, 45, 55}, {210, 67, 45, 55}, {286, 66, 45, 55} };
//    for (int i = 0; i < cordinat.Y(); i++) {
//        Copy(Agent, cordinat.I(1, i + 1), cordinat.I(2, i + 1), cordinat.I(3, i + 1), cordinat.I(4, i + 1), AgentRun[i]);
//    }
//
//    // H�zl� ko�ma animasyonu i�in diziyi doldurma
//    ICBYTES fastCordinat{ {210, 7, 45, 55}, {113, 8, 75, 55}, {19, 67, 75, 55}, {210, 67, 45, 55}, {113, 67, 75, 55}, {19, 5, 75, 55} };
//    for (int i = 0; i < fastCordinat.Y(); i++) {
//        Copy(Agent, fastCordinat.I(1, i + 1), fastCordinat.I(2, i + 1), fastCordinat.I(3, i + 1), fastCordinat.I(4, i + 1), AgentRunFast[i]);
//    }
//
//    ICBYTES TV;
//    MagnifyX3(Corridor, TV); // Arka plan� b�y�terek g�sterme
//    DisplayImage(F1, TV); // Arka plan y�kl�
//}
//
//void MakeAgentRun(void*) {
//    int xcor = 1, ycor = 100; // Ajan�n ba�lang�� pozisyonu
//    ICBYTES TV, back;
//    int step[] = { 3, 3, 3, 3 }; // Normal h�z ad�mlar�
//    int fastStep[] = { 9, 9, 9, 9 }; // H�zl� ad�mlar
//    bool isFast = false; // H�zland�rma bayra��
//
//    // Arka plan� y�kle ve g�ster
//    ReadImage("grass.bmp", Corridor);
//    MagnifyX3(Corridor, TV);
//    DisplayImage(F1, TV);
//
//    // Ba�lang��ta ajan durma pozisyonu g�steriliyor
//    PasteNon0(AgentStanding, xcor, ycor, Corridor);
//    MagnifyX3(Corridor, TV);
//    DisplayImage(F1, TV);
//
//    int i = 0;
//    while (true) {
//        // Her karede arka plan� yeniden �izme
//        ReadImage("grass.bmp", Corridor); // �nceki kareyi temizler
//        PasteNon0(AgentStanding, xcor, ycor, Corridor); // Ajan� pozisyonuna g�re yeniden �izer
//
//        // H�z kontrol�
//        if (xcor >= 150) {
//            isFast = true; // H�zl� harekete ge�
//        }
//
//        if (isFast) {
//            PasteNon0(AgentRunFast[i % 6], xcor, ycor, Corridor); // H�zl� kareler
//            xcor += fastStep[i % 4]; // H�zl� hareket
//        }
//        else {
//            PasteNon0(AgentRun[i % 4], xcor, ycor, Corridor); // Normal kareler
//            xcor += step[i % 4]; // Normal hareket
//        }
//
//        // G�ncellenmi� kareyi g�sterme
//        MagnifyX3(Corridor, TV);
//        DisplayImage(F1, TV);
//        Sleep(isFast ? 40 : 60); // H�z durumuna g�re bekleme s�resi
//
//        if (i % 4 == 0) PlaySound("Step.wav", NULL, SND_ASYNC); // Ad�m sesi
//        i++;
//
//        // Ajan s�n�r� ge�ti�inde ba�lang�ca d�nd�rme
//        if (xcor > 300) {
//            xcor = 1; // Pozisyonu s�f�rla
//            isFast = false; // H�z� s�f�rla
//            i = 0;
//        }
//    }
//}
//
//void ICGUI_main() {
//    F1 = ICG_FrameThin(5, 140, 450, 430);
//    F2 = ICG_FrameThin(5, 5, 20, 20);
//    ICG_Button(400, 5, 160, 55, "Load Agent Run\n1 -----------------------------------\n KO�AN AJANI Y�KLE", LoadAgentRun);
//    ICG_TButton(580, 5, 160, 55, "Make Agent Run\n2 -----------------------------------\n AJANI KO�TUR", MakeAgentRun, NULL);
//    ReadImage("grass.bmp", Corridor);
//    DisplayImage(F1, Corridor);
//    ReadImage("5363267w.bmp", Agent);
//    DisplayImage(F2, Agent);
//}

//#include<windows.h>
//#include"icb_gui.h"
//
////#pragma comment (lib,"winmm.lib")
//
//int F1, F2;
//ICBYTES Corridor, Agent;
//ICBYTES AgentStanding;//Ajan ayakta dururken 
////AJAN KO?MA KARELER? ALTTAK? RES?M D?Z?N?NE Y�KLEN?YOR
//ICBYTES AgentRun[4]; // <--Agent Running sequence will be uploaded here
//void ICGUI_Create()
//{
//    ICG_MWSize(1200, 830);
//    ICG_MWTitle("IMPOSSIBLE MISSION");
//}
//
//void LoadAgentRun()
//{
//    Copy(Agent, 5, 10, 13, 30, AgentStanding);
//    PasteNon0(AgentStanding, 10, 58, Corridor);
//    ICBYTES cordinat{ {210, 7, 45, 55}, {286, 7, 45, 55}, {210, 67, 45, 55}, {286, 66, 45, 55} };
//    for (int i = 1; i <= cordinat.Y(); i++)
//    {
//        Copy(Agent, cordinat.I(1, i), cordinat.I(2, i), cordinat.I(3, i), cordinat.I(4, i), AgentRun[i - 1]);
//        PasteNon0(AgentRun[i - 1], 33 * i, 58, Corridor);
//    }
//    ICBYTES TV;
//    MagnifyX3(Corridor, TV);
//    DisplayImage(F1, TV);
//
//}
//
//void MakeAgentRun(void*)
//{
//    int xcor = 1, ycor = 58;
//    ICBYTES TV, back;
//    int step[] = { 5,5,5,5,5,8,8 };
//    ReadImage("impossible_mission_elevator.bmp", Corridor);
//    Copy(Corridor, xcor, ycor, 25, 32, back);
//    PasteNon0(AgentStanding, xcor, ycor, Corridor);
//    MagnifyX3(Corridor, TV);
//    DisplayImage(F1, TV);
//    PlaySound("Another_Visitor.wav", NULL, SND_SYNC);
//    Paste(back, xcor, ycor, Corridor);
//    int i = 0;
//    while (true)
//    {
//        Copy(Corridor, xcor, ycor, 25, 32, back);
//        PasteNon0(AgentRun[i % 7], xcor, ycor, Corridor);
//        MagnifyX3(Corridor, TV);
//        DisplayImage(F1, TV);
//#ifdef _DEBUG
//        Sleep(20);//DEBUG MODU YAVA? OLDU?U ?�?N DAHA AZ BEKLET?YORUZ
//#else
//        Sleep(60); //Release mode is fast so we delay more
//#endif
//        Paste(back, xcor, ycor, Corridor);
//        if (i % 7 == 4)PlaySound("Step.wav", NULL, SND_ASYNC);
//        xcor += step[i % 7];
//        i++;
//        if (i > 52) {
//            xcor = 1; i = 0;
//        }
//    }
//}
//
//
//void ICGUI_main()
//{
//    F1 = ICG_FrameThin(5, 140, 450, 430);
//    F2 = ICG_FrameThin(5, 5, 20, 20);
//    ICG_Button(400, 5, 160, 55, "Load Agent Run\n1 -----------------------------------\n KO?AN AJANI Y�KLE", LoadAgentRun);
//    ICG_TButton(580, 5, 160, 55, "Make Agent Run\n2 -----------------------------------\n AJANI KO?TUR", MakeAgentRun, NULL);
//    ReadImage("impossible_mission_elevator.bmp", Corridor);
//    DisplayImage(F1, Corridor);
//    ReadImage("x.bmp", Agent);
//    DisplayImage(F2, Agent);
//}

//#include <windows.h>
//#include "icb_gui.h"
//
////#pragma comment (lib,"winmm.lib")
//
//int F1, F2;
//ICBYTES Corridor, Agent, UFO;
//ICBYTES AgentStanding; // Ajan ayakta dururken
//ICBYTES AgentRun[4];   // Normal h�zda ko�an ajan
//ICBYTES AgentRunFast[6]; // H�zland�r�lm�� ajan ko�ma dizisi
//
//void ICGUI_Create() {
//    ICG_MWSize(1200, 830);
//    ICG_MWTitle("IMPOSSIBLE MISSION");
//}
//
//void LoadAgentRun() {
//    ReadImage("touchsome.bmp", Corridor);
//    ReadImage("pixilUfo.bmp", UFO); // UFO g�r�nt�s�n� y�kle
//
//    // Ajan�n durdu�u pozisyonu y�kleme
//    Copy(Agent, 212, 7, 45, 55, AgentStanding);
//    PasteNon0(AgentStanding, 600, 450, Corridor);
//
//    // Ko�ma animasyonu i�in diziyi doldurma
//    ICBYTES cordinat{ {210, 7, 50, 55}, {286, 7, 50, 55}, {210, 67, 50, 55}, {286, 66, 50, 55} };
//    for (int i = 0; i < cordinat.Y(); i++) {
//        Copy(Agent, cordinat.I(1, i + 1), cordinat.I(2, i + 1), cordinat.I(3, i + 1), cordinat.I(4, i + 1), AgentRun[i]);
//        PasteNon0(AgentRun[i], 33 * i, 58, Corridor);
//    }
//
//    // H�zl� ko�ma animasyonu i�in diziyi doldurma
//    ICBYTES fastCordinat{ {210, 7, 50, 55}, {113, 8, 75, 55}, {19, 67, 75, 55}, {210, 67, 50, 55}, {113, 67, 75, 55}, {19, 5, 75, 55} };
//    for (int i = 0; i < fastCordinat.Y(); i++) {
//        Copy(Agent, fastCordinat.I(1, i + 1), fastCordinat.I(2, i + 1), fastCordinat.I(3, i + 1), fastCordinat.I(4, i + 1), AgentRunFast[i]);
//    }
//
//    ICBYTES TV;
//    MagnifyX3(Corridor, TV); // Arka plan� b�y�terek g�sterme
//    DisplayImage(F1, TV); // Arka plan y�kl�
//}
//
//void MakeAgentRun(void*) {
//    int xcor = 1, ycor = 85; // Ajan�n pozisyonu
//    int ufoX = 250, ufoY = 20; // UFO ba�lang�� konumu yukar�dan ba�lar
//    ICBYTES TV, back;
//    int step[] = { 3, 3, 3, 3 }; // Normal h�z ad�mlar�
//    int fastStep[] = { 9, 9, 9, 9 }; // H�zl� ad�mlar
//    bool isFast = false;
//    bool showUFO = true;
//    bool ufoWaited = false;
//
//    // Arka plan� y�kle ve ba�lang��ta ajan durma pozisyonunu g�ster
//    ReadImage("touchsome.bmp", Corridor);
//    Copy(Corridor, xcor, ycor, 75, 55, back); // Daha b�y�k bir kare boyutu kaydediyoruz
//
//    // Ajan durma pozisyonu ba�lang��ta ekranda g�steriliyor
//    PasteNon0(AgentStanding, xcor, ycor, Corridor);
//    MagnifyX3(Corridor, TV);
//    DisplayImage(F1, TV);
//
//    // Ba�lang�� sesi oynatma
//    //PlaySound("Another_Visitor.wav", NULL, SND_SYNC);
//
//    // Ajan ko�maya ba�l�yor
//    int i = 0;
//    while (true) {
//        // Her karede arka plan� yeniden �izme
//        ReadImage("touchsome.bmp", Corridor); // �nceki kareyi temizler
//
//        // UFO hareketi
//        if (showUFO) {
//            PasteNon0(UFO, ufoX, ufoY, Corridor);
//            ufoX -= 20; // UFO h�zl� bir �ekilde sa�dan sola hareket ediyor
//            if (ufoX <= 450 && !ufoWaited) { // UFO ekran�n ortas�na geldi�inde
//                Sleep(1000); // K�sa bir bekleme s�resi (1 saniye)
//                ufoWaited = true;
//            }
//            if (ufoX < -100) showUFO = false; // UFO ekran�n solundan ��k�nca kaybolacak
//        }
//
//        // H�z kontrol�
//        if (ufoX < 450 && ufoWaited) {
//            isFast = true; // UFO ekran�n ortas�na geldikten sonra h�zlan
//        }
//
//        if (isFast) {
//            PasteNon0(AgentRunFast[i % 6], xcor, ycor, Corridor); // H�zl� kareler
//            xcor += fastStep[i % 4]; // H�zl� hareket
//        }
//        else {
//            PasteNon0(AgentRun[i % 4], xcor, ycor, Corridor); // Normal kareler
//            xcor += step[i % 4]; // Normal hareket
//        }
//
//        // G�ncellenmi� kareyi g�sterme
//        MagnifyX3(Corridor, TV);
//        DisplayImage(F1, TV);
//        Sleep(isFast ? 40 : 60); // H�z durumuna g�re bekleme s�resi
//
//        if (i % 4 == 0) PlaySound("Step.wav", NULL, SND_ASYNC); // Ad�m sesi
//        i++;
//
//        // Ajan s�n�r� ge�ti�inde ba�lang�ca d�nd�rme
//        if (xcor > 300) {
//            xcor = 1; // Pozisyonu s�f�rla
//            isFast = false; // H�z� s�f�rla
//            i = 0;
//            showUFO = true; // Ajan s�f�rlan�nca UFO tekrar g�r�n�r
//            ufoX = 900; // UFO ba�lang�� pozisyonuna s�f�rlan�r
//            ufoWaited = false; // UFO tekrar ortaya geldi�inde bekleme yapmas� i�in s�f�rlan�r
//        }
//
//        // Ajan�n durma pozisyonunu yeniden ekranda g�ster
//        PasteNon0(AgentStanding, xcor, ycor, Corridor); // Durma pozisyonu her d�ng�de yeniden �izilmelidir.
//    }
//}
//
//void ICGUI_main() {
//    F1 = ICG_FrameThin(5, 140, 450, 430);
//    F2 = ICG_FrameThin(5, 5, 20, 20);
//    ICG_Button(400, 5, 160, 55, "Load Agent Run\n1 -----------------------------------\n KO�AN AJANI Y�KLE", LoadAgentRun);
//    ICG_TButton(580, 5, 160, 55, "Make Agent Run\n2 -----------------------------------\n AJANI KO�TUR", MakeAgentRun, NULL);
//    ReadImage("touchsome.bmp", Corridor);
//    DisplayImage(F1, Corridor);
//    ReadImage("53632678.bmp", Agent);
//    DisplayImage(F2, Agent);
//}


#include <windows.h>
#include "icb_gui.h"

//#pragma comment (lib,"winmm.lib")

int F1, F2;
ICBYTES Corridor, Agent, UFO, Cow, Tree, Bird, Dog; // Cow ekleniyor
ICBYTES AgentStanding; // Ajan ayakta dururken
ICBYTES AgentRun[4];   // Normal h�zda ko�an ajan
ICBYTES AgentRunFast[6]; // H�zland�r�lm�� ajan ko�ma dizisi
ICBYTES DogRunFast[3];
ICBYTES CowRun[2];
ICBYTES BirdFly[6];

void ICGUI_Create() {
    ICG_MWSize(1200, 830);
    ICG_MWTitle("IMPOSSIBLE MISSION");
}

void playSound(const char* soundFile) {
    PlaySound(soundFile, NULL, SND_ASYNC);
}

void LoadAgentRun() {
    ReadImage("touchsome.bmp", Corridor);
    ReadImage("pixilUfo.bmp", UFO); // UFO g�r�nt�s�n� 
    ReadImage("xyy.bmp", Cow);
    ReadImage("Treee.bmp", Tree);
    ReadImage("birds.bmp", Bird);
    ReadImage("dogg.bmp", Dog);

    // Ajan�n durdu�u pozisyonu y�kleme
    Copy(Agent, 212, 7, 45, 55, AgentStanding);
    PasteNon0(AgentStanding, 600, 450, Corridor);

    // Ko�ma animasyonu i�in diziyi doldurma
    ICBYTES cordinat{ {210, 7, 50, 55}, {286, 7, 50, 55}, {210, 67, 50, 55}, {286, 66, 50, 55} };
    for (int i = 0; i < cordinat.Y(); i++) {
        Copy(Agent, cordinat.I(1, i + 1), cordinat.I(2, i + 1), cordinat.I(3, i + 1), cordinat.I(4, i + 1), AgentRun[i]);

    }

    // H�zl� ko�ma animasyonu i�in diziyi doldurma
    ICBYTES fastCordinat{ {210, 7, 50, 55}, {113, 8, 75, 55}, {19, 67, 75, 55}, {210, 67, 50, 55}, {113, 67, 75, 55}, {19, 5, 75, 55} };
    for (int i = 0; i < fastCordinat.Y(); i++) {
        Copy(Agent, fastCordinat.I(1, i + 1), fastCordinat.I(2, i + 1), fastCordinat.I(3, i + 1), fastCordinat.I(4, i + 1), AgentRunFast[i]);
    }

    // �nek i�in koordinatlar
    ICBYTES cowCoordinates{ {38, 15, 60, 40}, { 38, 68, 60, 40 } };

    // �nek g�r�nt�lerini y�kleme
    for (int i = 0; i < cowCoordinates.Y(); i++) {
        Copy(Cow, cowCoordinates.I(1, i + 1), cowCoordinates.I(2, i + 1), cowCoordinates.I(3, i + 1), cowCoordinates.I(4, i + 1), CowRun[i]);
    }

    //Ku� i�in koordinatlar
    ICBYTES birdCoordinates{ {2, 5, 38, 39}, { 42, 5, 38, 39 }, { 82, 12, 40, 30 },{ 3, 52, 39, 41 } ,{ 43, 55, 39, 28 } ,{ 83, 50, 39, 32 } };
    // �nek g�r�nt�lerini y�kleme
    for (int i = 0; i < birdCoordinates.Y(); i++) {
        Copy(Bird, birdCoordinates.I(1, i + 1), birdCoordinates.I(2, i + 1), birdCoordinates.I(3, i + 1), birdCoordinates.I(4, i + 1), BirdFly[i]);
    }

    ICBYTES dogFastCoords{ {10,90,71,32}, {86,89,71,33}, {163,91,75,31} }; // Fast run frames
    for (int i = 0; i < 3; i++) {
        Copy(Dog, dogFastCoords.I(1, i + 1), dogFastCoords.I(2, i + 1), dogFastCoords.I(3, i + 1), dogFastCoords.I(4, i + 1), DogRunFast[i]);
    }

    ICBYTES TV;
    MagnifyX3(Corridor, TV); // Arka plan� b�y�terek g�sterme
    DisplayImage(F1, TV); // Arka plan y�kl�
}

void MakeAgentRun(void*) {
    int agentX = 1, agentY = 90;      // Ajan�n pozisyonu
    int ufoX = -40, ufoY = 20;        // UFO ba�lang�� konumu (solda ve yukar�da)
    int cowX = 140, cowY = 103;       // �ne�in pozisyonu
    int cowShrinkRate = 5;            // �ne�in boyutunu k���ltme oran�
    int birdX = 250;                  // Ku�un ba�lang�� konumu (sa�dan ba�layacak)
    int birdY = 40;                   // Ku�un Y koordinat�
    int dogX = 25;  // Position the dog slightly behind the agent
    int dogY = 125;
    ICBYTES TV, back;                 // A�a� i�in ICBYTES tan�m�
    int fastStep[] = { 6, 6, 6, 6 };  // H�zl� ad�mlar
    bool showUFO = false;
    bool cowCaught = false;
    bool cowDisappear = false;
    bool birdVisible = false;          // Ku�un g�r�n�rl�k durumu

    // Arka plan� y�kle ve ajan ba�lang��ta durma pozisyonunda
    ReadImage("touchsome.bmp", Corridor);
    Copy(Corridor, agentX, agentY, 75, 55, back);
    PasteNon0(AgentRunFast[0], agentX, agentY, Corridor); // Ajan h�zl� ko�ma pozisyonunda
    MagnifyX3(Corridor, TV);
    DisplayImage(F1, TV);
    Sleep(500); // Ba�lang��ta k�sa bekleme
    PlaySound("scream2.wav", NULL, SND_ASYNC);


    // A�a� g�r�nt�s�n� y�kle
    ReadImage("treee.bmp", Tree); // A�a� g�r�nt�s�n� y�kle
    int treeX = 200;               // A�a� X koordinat� (sa� tarafta)
    int treeY = 2;                 // A�a� Y koordinat� (�imlerin �zerine yerle�tirmek i�in)

    int i = 0;
    while (true) {
        ReadImage("touchsome.bmp", Corridor); // Arka plan� temizle

        // A�a� g�r�nt�s�n� ekrana yerle�tir
        PasteNon0(Tree, treeX, treeY, Corridor);

        // UFO�yu g�r�n�r yap
        if (agentX >= cowX - 50 && !showUFO) {
            showUFO = true; // UFO ekrana giriyor
            
        }     

        // UFO, ajan�n pe�inden gelir
        if (showUFO) {
            PasteNon0(UFO, ufoX, ufoY, Corridor); // UFO'yu �iz
            

            // UFO, ine�in �st�ne geldi�inde ine�i yukar� �eker ve kaybolmas�n� sa�lar
            if (ufoX >= cowX - 40 && ufoX < cowX + 40 && !cowCaught) {
                cowCaught = true; // �nek yakaland�
                PlaySound("cowww.wav", NULL, SND_ASYNC);
                
            }

            // UFO'nun Y koordinat�n� sabit tut
            if (cowCaught) {
                ufoY = 20; // UFO'nun Y pozisyonunu sabit tut
            }
            else {

                ufoX += 5; // UFO sa�a do�ru hareket eder
            }

            // Ku�u hareket ettirmek i�in ku� g�r�n�rl���n� kontrol et
            if (!birdVisible) {
                birdVisible = true; // Ku� g�r�n�r hale geliyor
                PlaySound("birdd.wav", NULL, SND_ASYNC);
            }
        }

        // Ku�u ekrana yerle�tir ve hareket ettir
        if (birdVisible) {
            PasteNon0(BirdFly[i / 10 % 6], birdX, birdY, Corridor); // Ku� animasyonu
            birdX -= 15; // Ku� sola do�ru daha h�zl� hareket eder
            birdY -= 2;  // Ku� yukar�ya do�ru hafif hareket eder
        }

        // Ajan�n h�zl� ko�ma animasyonu
        PasteNon0(AgentRunFast[i % 6], agentX, agentY, Corridor);
        agentX += fastStep[i % 4]; // Ajan s�rekli h�zl� ko�ar

        PasteNon0(DogRunFast[i % 3], dogX, dogY, Corridor);
        dogX += fastStep[i % 4];

        // �nek animasyonu
        if (!cowCaught && !cowDisappear) {
            PasteNon0(CowRun[(i / 10) % 2], cowX, cowY, Corridor); // �nek animasyonu
        }
        
        // �nek yakalan�nca yukar� hareket ve k���lme
        if (cowCaught && !cowDisappear) {
            cowY -= 10; // �ne�i yukar� do�ru hareket ettir
            cowShrinkRate += 2; // �ne�in boyutunu k���lt 
            PasteNon0(CowRun[0], cowX, cowY, Corridor);

            if (cowY < ufoY + 10) { // UFO�ya ula�t���nda kaybolur
                cowDisappear = true;
                PlaySound("flyUfoo.wav", NULL, SND_ASYNC);
            }
        }

        // UFO, ine�in yukar� hareketi s�ras�nda bekle
        if (cowDisappear) {
            ufoX += 10; // UFO sa�a h�zlanarak gider
            if (ufoX > 400) break; // Ekrandan tamamen ��kt���nda d�ng� biter
        }

        // Ekran� g�ncelle
        MagnifyX3(Corridor, TV);
        DisplayImage(F1, TV);
        Sleep(40); // Animasyon h�z�n� kontrol eder

        i++; // �er�eve say�s�n� art�r
    }
}

void ICGUI_main() {
    F1 = ICG_FrameThin(5, 140, 450, 430);
    F2 = ICG_FrameThin(5, 5, 20, 20);
    ICG_Button(400, 5, 160, 55, "Load Agent Run\n1 -----------------------------------\n Hikayeyi Y�kle", LoadAgentRun);
    ICG_TButton(580, 5, 160, 55, "Make Agent Run\n2 -----------------------------------\n Ajan� Ko�tur", MakeAgentRun, NULL);
    ReadImage("touchsome.bmp", Corridor);
    DisplayImage(F1, Corridor);
    ReadImage("53632678.bmp", Agent);
    DisplayImage(F2, Agent);
}