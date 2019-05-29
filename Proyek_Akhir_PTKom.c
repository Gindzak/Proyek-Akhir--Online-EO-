#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
#include <conio.h>
int body();
void fullscreen();
void gotoxy();
char num[666],num1[666],num2[666],num3[666],num4[666],num5[666],num6[666],num7[666],num8[666],num9[666],num10[666],num11[666],num12[666],num13[666],num14[666],num15[666],num16[666],num17[666],num18[666],num19[666],num20[666],num21[666],num22[666],num23[666],num24[666],num25[666];
int wilayah(),eventjkt(),eventbgr(),eventdpk(),eventtgr(),eventbks(),list(),next(),end(),jenisevent(),help();
int ratingarief(int cek),ratinggibran(),ratingfarid(),ratingasad(),ratingalfian(int cek),ratingnathan(),ratingarva(),ratingsyahmi(),ratingramadhan(),ratinghanvey(),ratingadit(),ratingaldo(),ratingelyaser(),ratingfatah(),ratingtaka(),ratingsadam(),ratingubay(),ratinghanif(),ratinghanif(),ratingghalib(),ratingsalman(),ratingpeka(),ratingharits(),ratingilsa(),ratingelloy(),ratingaldi();
int rarief=4;
int gibran(),asad(),farid(),arief(),arief1(),alfian(),nathan(),arva(),syahmi(),ramadhan(),hanvey(),adit(),aldo(),elyaser(),fatah(),taka(),sadam(),ubay(),hanif(),ghalib(),salman(),peka(),harits(),ilsa(),elloy(),aldi();
int wpjkt(),wpbgr(),wpdpk(),wptgr(),wpbks();
int bpjkt(),bpbgr(),bpdpk(),bptgr(),bpbks();
int byjkt(),bybgr(),bydpk(),bytgr(),bybks();
int npilih;
int rating[666]={4,3,3},rating1[666]={4,5,3,3},rating2[666]={4,4,3},rating3[666]={4,5,3},rating4[666]={4,5,4},rating5[666]={3,3,5},rating6[666]={5,5,4},rating7[666]={4,4,4},rating8[666]={2,5,5},rating9[666]={4,3,4},rating10[666]={5,5,3},rating11[666]={4,4,3},rating12[666]={4,3,5},rating13[666]={5,3,4},rating14[666]={5,5,4},rating15[666]={5,5,3},rating16[666]={3,3,4},rating17[666]={4,3,5},rating18[666]={1,5,5,},rating19[666]={4,5,2},rating20[666]={5,4,3},rating21[666]={3,3,4},rating22[666]={4,5,2},rating23[666]={1,5,5},rating24[666]={4,4,4};
int g,h=3,i=4,g1,h1=4,i1=5,g2,h2=3,i2=4,g3,h3=3,i3=4,g4,h4=3,i4=4,g5,h5=3,i5=4,g6,h6=3,i6=4,g7,h7=3,i7=4,g8,h8=3,i8=4,g9,h9=3,i9=4,g10,h10=3,i10=4,g11,h11=3,i11=4,g12,h12=3,i12=4,g13,h13=3,i13=4,g14,h14=3,i14=4,g15,h15=3,i15=4,g16,h16=3,i16=4,g17,h17=3,i17=4,g18,h18=3,i18=4,g19,h19=3,i19=4,g20,h20=3,i20=4,g21,h21=3,i21=4,g22,h22=3,i22=4,g23,h23=3,i23=4,g24,h24=3,i24=4;
float rat1,rat,ratArif=3.33,ratAlfian=3.75,rat2,ratAsad=3.67,rat3,ratFarid=4,rat4,ratGibran=4.33;
int valid,pilih,pilih1,pilih2,pilih3,pilih4,pilih5,pilih6,pilih7,pilih8,pilih9,pilih10,pilih11,pilih12,pilih13,pilih14,pilih15,pilih16,pilih17,pilih18,pilih19,pilih20,pilih21,pilih22,pilih23,pilih24,pilih25;
void validation(char number[], int validate);
int main(){
  system ("cls");
  fullscreen();
  body();
  do{

		printf("\n\n\t \t \t \t \t \t \t \t \t \t \t Silahkan Pilih Menu : ");
		scanf("%s",num);getchar();

		validation(num,valid);
	system ("cls");
	body();
	}while(valid==1);
	pilih = atoi(num) ;
	switch (pilih){
		case 1 :{
			system ("cls");
			wilayah();
			break;}

		case 2 :{
			system ("cls");
			list();
      next();
			break;}

    case 3:{
      system ("cls");
      help();
      next();
      break;
    }

    case 4:{
      system ("cls");
      end();
    }
	}
}
int body(){
  system("cls");
  printf("===================================================================================================================================================================================================================");
  printf("\n");
  printf("\n\t\t\t\t\t\t\t\t\t    ||||||||||||||||||||||||||||||||||||||||||||||||||");
  printf("\n\t\t\t\t\t\t\t\t\t    ||||||||||||||||||||||||||||||||||||||||||||||||||");
  printf("\n\t\t\t\t\t\t\t\t\t    ||||||||||||||||||||||||||||||||||||||||||||||||||");
  printf("\n\t\t\t\t\t\t\t\t\t    ||||||                |||||                 ||||||");
  printf("\n\t\t\t\t\t\t\t\t\t    ||||||  |||||||||||||||||||      |||||      ||||||");
  printf("\n\t\t\t\t\t\t\t\t\t    ||||||  |||||||||||||||||||      |||||      ||||||");
  printf("\n\t\t\t\t\t\t\t\t\t    ||||||  |||||||||||||||||||      |||||      ||||||");
  printf("\n\t\t\t\t\t\t\t\t\t    ||||||  |||||||||||||||||||      |||||      ||||||");
  printf("\n\t\t\t\t\t\t\t\t\t    ||||||  |||||||||||||||||||      |||||      ||||||");
  printf("\n\t\t\t\t\t\t\t\t\t    ||||||                |||||      |||||      ||||||");
  printf("\n\t\t\t\t\t\t\t\t\t    ||||||  |||||||||||||||||||      |||||      ||||||");
  printf("\n\t\t\t\t\t\t\t\t\t    ||||||  |||||||||||||||||||      |||||      ||||||");
  printf("\n\t\t\t\t\t\t\t\t\t    ||||||  |||||||||||||||||||      |||||      ||||||");
  printf("\n\t\t\t\t\t\t\t\t\t    ||||||  |||||||||||||||||||      |||||      ||||||");
  printf("\n\t\t\t\t\t\t\t\t\t    ||||||  |||||||||||||||||||      |||||      ||||||");
  printf("\n\t\t\t\t\t\t\t\t\t    ||||||                |||||                 ||||||");
  printf("\n\t\t\t\t\t\t\t\t\t    ||||||||||||||||||||||||||||||||||||||||||||||||||");
  printf("\n\t\t\t\t\t\t\t\t\t    ||||||||||||||||||||||||||||||||||||||||||||||||||");
  printf("\n\t\t\t\t\t\t\t\t\t    ||||||||||||||||||||||||||||||||||||||||||||||||||");
  printf("\n\n\n\t\t\t\t\t\t\t\t\t\t      Butuh EO?, Cek Onlie EO Segera!");
  printf("\n");
  printf("\n");
  printf("\n");
  printf("===================================================================================================================================================================================================================");
  printf("\n");
  printf("\n\n\t\t\t\t\t\t\t\t\t\t       Selamat Datang di Online EO!");
  printf("\n\n\t\t\t\t\t\t\t\t\t\t==========================================");
  printf("\n\t\t\t\t\t\t\t\t\t\t=\t\t[1] Pesan\t\t =");
  printf("\n\t\t\t\t\t\t\t\t\t\t==========================================");
  printf("\n\n");
  printf("\n\n\t\t\t\t\t\t\t\t\t\t==========================================");
  printf("\n\t\t\t\t\t\t\t\t\t\t=\t       [2] Daftar EO\t\t =");
  printf("\n\t\t\t\t\t\t\t\t\t\t==========================================");
  printf("\n\n");
  printf("\n\n\t\t\t\t\t\t\t\t\t\t==========================================");
  printf("\n\t\t\t\t\t\t\t\t\t\t=\t\t[3] Bantuan\t\t =");
  printf("\n\t\t\t\t\t\t\t\t\t\t==========================================");
  printf("\n\n");
  printf("\n\n\t\t\t\t\t\t\t\t\t\t==========================================");
  printf("\n\t\t\t\t\t\t\t\t\t\t=\t\t[4] Keluar\t\t =");
  printf("\n\t\t\t\t\t\t\t\t\t\t==========================================");
  printf("\n\n");
  printf("\n\n===================================================================================================================================================================================================================");

//printf("\t \t \t \tPilihan Anda : ");
//scanf("%d",&num);


}



int list(){
    printf("\n\t\t\t\t\t\t\t\t\t=================================================");
    printf("\n\t\t\t\t\t\t\t\t\t=================================================");
    printf("\n\t\t\t\t\t\t\t\t\t=\t\tEO yang Tersedia\t        =");
    printf("\n\t\t\t\t\t\t\t\t\t=================================================");
    printf("\n\t\t\t\t\t\t\t\t\t=================================================");
    printf("\n");
    printf("\n___________________________________________________________________________________________________________________________________________________________________________________________________________________");
    printf("\n\t\t\t\t\t\t\t\t\t\t=================================");
    printf("\n\t\t\t\t\t\t\t\t\t\t1\t   [Arief EO]\t        1");
    printf("\n\t\t\t\t\t\t\t\t\t\t=================================");
    printf("\n\n\tKami membuka berbagai layanan jasa Event Organizer baik itu event kecil maupun besar, kami siap melayani Anda. Percayakan kepada kami event anda mulai dari perancangan hingga event selesai.");
    printf("\n\nWilayah : Jakarta");
    printf("\n\nNo. Telp : 081287679809");
    printf("\n\nEmail : ariefsaferman@gmail.com");
    printf("\n___________________________________________________________________________________________________________________________________________________________________________________________________________________");
    printf("\n\t\t\t\t\t\t\t\t\t\t=================================");
    printf("\n\t\t\t\t\t\t\t\t\t\t2\t   [Alfian EO]\t        2");
    printf("\n\t\t\t\t\t\t\t\t\t\t=================================");
    printf("\n\n\t\t\tAtas dasar kerja, tanggung jawab, semangat dan ide-ide Terbaik kami yang inovatif dan kreatif, berbagai event yang kami kerjakan dapat dilaksanakan dengan baik. \n\t\t\t\t\tDan hal itu pula yang menjadi pemicu kami untuk bekerja tetap memberikan yang Terbaik, lebih baik dan lebih baik lagi.");
    printf("\n\nWilayah : Jakarta");
    printf("\n\nNo. Telp : 081236780347");
    printf("\n\nEmail : alfianbadrulisnan@gmail.com");
    printf("\n___________________________________________________________________________________________________________________________________________________________________________________________________________________");
    printf("\n\t\t\t\t\t\t\t\t\t\t=================================");
    printf("\n\t\t\t\t\t\t\t\t\t\t3\t   [Nathan EO]\t        3");
    printf("\n\t\t\t\t\t\t\t\t\t\t=================================");
    printf("\n\n\t\t\t\tVisi Kami adalah terwujudnya EO yang dapat melayani masyarakat di bidang perancangan event. Kami bergerak dengan asas kejujuran dan kedisiplinan.");
    printf("\n\nWilayah : Bogor");
    printf("\n\nNo. Telp : 081283097788");
    printf("\n\nEmail : nathanielfaustine@gmail.com");
    printf("\n___________________________________________________________________________________________________________________________________________________________________________________________________________________");
    printf("\n\t\t\t\t\t\t\t\t\t\t=================================");
    printf("\n\t\t\t\t\t\t\t\t\t\t4\t   [Gibran EO]\t        4");
    printf("\n\t\t\t\t\t\t\t\t\t\t=================================");
    printf("\n\n\t\t\t\t\t\tKamu bingung mau bikin acara besar? Dengan Harga yang cukup terjangkau kami siap melayani kapanpun dan dimanapun.");
    printf("\n\nWilayah : Jakarta");
    printf("\n\nNo. Telp : 081209099090");
    printf("\n\nEmail : gibranaufalzakwan@gmail.com");
    printf("\n___________________________________________________________________________________________________________________________________________________________________________________________________________________");
    printf("\n\t\t\t\t\t\t\t\t\t\t=================================");
    printf("\n\t\t\t\t\t\t\t\t\t\t5\t   [Farid EO]\t        5");
    printf("\n\t\t\t\t\t\t\t\t\t\t=================================");
    printf("\n\n\t     Kami adalah Event Organizer yang mengusung gerbrakan baru di dunia perancangan event. Kami dipenuhi orang orang muda yang mempunyai inovasi, kreatifitas, dan etos kerja yang baik.");
    printf("\n\nWilayah : Jakarta");
    printf("\n\nNo. Telp : 081386895977");
    printf("\n\nEmail : faridrahman@gmail.com");
    printf("\n___________________________________________________________________________________________________________________________________________________________________________________________________________________");
    printf("\n\t\t\t\t\t\t\t\t\t\t=================================");
    printf("\n\t\t\t\t\t\t\t\t\t\t6\t   [Arva EO]\t        6");
    printf("\n\t\t\t\t\t\t\t\t\t\t=================================");
    printf("\n\n\tKami membuka berbagai layanan jasa Event Organizer baik itu event kecil maupun besar, kami siap melayani Anda. Percayakan kepada kami event anda mulai dari perancangan hingga event selesai.");
    printf("\n\nWilayah : Bogor");
    printf("\n\nNo. Telp : 081366778899");
    printf("\n\nEmail : arvalinoarva@gmail.com");
    printf("\n___________________________________________________________________________________________________________________________________________________________________________________________________________________");
    printf("\n\t\t\t\t\t\t\t\t\t\t=================================");
    printf("\n\t\t\t\t\t\t\t\t\t\t7\t   [Syahmi EO]\t        7");
    printf("\n\t\t\t\t\t\t\t\t\t\t=================================");
    printf("\n\n\t\t\tAtas dasar kerja, tanggung jawab, semangat dan ide-ide Terbaik kami yang inovatif dan kreatif, berbagai event yang kami kerjakan dapat dilaksanakan dengan baik. \n\t\t\t\t\tDan hal itu pula yang menjadi pemicu kami untuk bekerja tetap memberikan yang Terbaik, lebih baik dan lebih baik lagi.");
    printf("\n\nWilayah : Bogor");
    printf("\n\nNo. Telp : 081344556677");
    printf("\n\nEmail : syahmimujtahid");
    printf("\n___________________________________________________________________________________________________________________________________________________________________________________________________________________");
    printf("\n\t\t\t\t\t\t\t\t\t\t=================================");
    printf("\n\t\t\t\t\t\t\t\t\t\t8\t   [Ramadhan EO]        8");
    printf("\n\t\t\t\t\t\t\t\t\t\t=================================");
    printf("\n\n\t\t\t\tVisi Kami adalah terwujudnya EO yang dapat melayani masyarakat di bidang perancangan event. Kami bergerak dengan asas kejujuran dan kedisiplinan.");
    printf("\n\nWilayah : Bogor");
    printf("\n\nNo. Telp 081255443322: ");
    printf("\n\nEmail : ramadhankalihs@gmail.com");
    printf("\n___________________________________________________________________________________________________________________________________________________________________________________________________________________");
    printf("\n\t\t\t\t\t\t\t\t\t\t=================================");
    printf("\n\t\t\t\t\t\t\t\t\t\t9\t   [Hanvey EO]\t        9");
    printf("\n\t\t\t\t\t\t\t\t\t\t=================================");
    printf("\n\n\t\t\t\t\t\tKamu bingung mau bikin acara besar? Dengan Harga yang cukup terjangkau kami siap melayani kapanpun dan dimanapun.");
    printf("\n\nWilayah : Bogor");
    printf("\n\nNo. Telp : 081383485700");
    printf("\n\nEmail : hanveyxavero@gmail.com");
    printf("\n___________________________________________________________________________________________________________________________________________________________________________________________________________________");
    printf("\n\t\t\t\t\t\t\t\t\t\t==================================");
    printf("\n\t\t\t\t\t\t\t\t\t\t10\t   [Adit EO]\t        10");
    printf("\n\t\t\t\t\t\t\t\t\t\t==================================");
    printf("\n\n\t     Kami adalah Event Organizer yang mengusung gerbrakan baru di dunia perancangan event. Kami dipenuhi orang orang muda yang mempunyai inovasi, kreatifitas, dan etos kerja yang baik.");
    printf("\n\nWilayah : Depok");
    printf("\n\nNo. Telp : 081200889780");
    printf("\n\nEmail : adityarizkidp@gmail.com");
    printf("\n___________________________________________________________________________________________________________________________________________________________________________________________________________________");
    printf("\n\t\t\t\t\t\t\t\t\t\t==================================");
    printf("\n\t\t\t\t\t\t\t\t\t\t11\t   [Aldo EO]\t        11");
    printf("\n\t\t\t\t\t\t\t\t\t\t==================================");
    printf("\n\n\tKami membuka berbagai layanan jasa Event Organizer baik itu event kecil maupun besar, kami siap melayani Anda. Percayakan kepada kami event anda mulai dari perancangan hingga event selesai.");
    printf("\n\nWilayah : Depok");
    printf("\n\nNo. Telp : 081391283511");
    printf("\n\nEmail : alfialdolio@gmail.com");
    printf("\n___________________________________________________________________________________________________________________________________________________________________________________________________________________");
    printf("\n\t\t\t\t\t\t\t\t\t\t==================================");
    printf("\n\t\t\t\t\t\t\t\t\t\t12\t   [Elyaser EO]\t        12");
    printf("\n\t\t\t\t\t\t\t\t\t\t==================================");
    printf("\n\n\t\t\tAtas dasar kerja, tanggung jawab, semangat dan ide-ide Terbaik kami yang inovatif dan kreatif, berbagai event yang kami kerjakan dapat dilaksanakan dengan baik. \n\t\t\t\t\tDan hal itu pula yang menjadi pemicu kami untuk bekerja tetap memberikan yang Terbaik, lebih baik dan lebih baik lagi.");
    printf("\n\nWilayah : Depok & Tanggerang");
    printf("\n\nNo. Telp : 081266661250");
    printf("\n\nEmail : elyaserbenguno@gmail.com");
    printf("\n___________________________________________________________________________________________________________________________________________________________________________________________________________________");
    printf("\n\t\t\t\t\t\t\t\t\t\t==================================");
    printf("\n\t\t\t\t\t\t\t\t\t\t13\t   [Fatah EO]\t        13");
    printf("\n\t\t\t\t\t\t\t\t\t\t==================================");
    printf("\n\n\t\t\t\tVisi Kami adalah terwujudnya EO yang dapat melayani masyarakat di bidang perancangan event. Kami bergerak dengan asas kejujuran dan kedisiplinan.");
    printf("\n\nWilayah : Depok");
    printf("\n\nNo. Telp : 081377819812");
    printf("\n\nEmail : abdulfatahismail@gmail.com");
    printf("\n___________________________________________________________________________________________________________________________________________________________________________________________________________________");
    printf("\n\t\t\t\t\t\t\t\t\t\t==================================");
    printf("\n\t\t\t\t\t\t\t\t\t\t14\t   [Taka EO]\t        14");
    printf("\n\t\t\t\t\t\t\t\t\t\t==================================");
    printf("\n\n\t\t\t\t\t\tKamu bingung mau bikin acara besar? Dengan Harga yang cukup terjangkau kami siap melayani kapanpun dan dimanapun.");
    printf("\n\nWilayah : Depok");
    printf("\n\nNo. Telp : 081323168720");
    printf("\n\nEmail : takatakemura@gmail.com");
    printf("\n___________________________________________________________________________________________________________________________________________________________________________________________________________________");
    printf("\n\t\t\t\t\t\t\t\t\t\t==================================");
    printf("\n\t\t\t\t\t\t\t\t\t\t15\t   [Sadam EO]\t        15");
    printf("\n\t\t\t\t\t\t\t\t\t\t==================================");
    printf("\n\n\t     Kami adalah Event Organizer yang mengusung gerbrakan baru di dunia perancangan event. Kami dipenuhi orang orang muda yang mempunyai inovasi, kreatifitas, dan etos kerja yang baik.");
    printf("\n\nWilayah : Tanggerang");
    printf("\n\nNo. Telp : 081281375251");
    printf("\n\nEmail : sadamfachriansyah@gmail.com");
    printf("\n___________________________________________________________________________________________________________________________________________________________________________________________________________________");
    printf("\n\t\t\t\t\t\t\t\t\t\t==================================");
    printf("\n\t\t\t\t\t\t\t\t\t\t16\t   [As'ad EO]\t        16");
    printf("\n\t\t\t\t\t\t\t\t\t\t==================================");
    printf("\n\n\tKami membuka berbagai layanan jasa Event Organizer baik itu event kecil maupun besar, kami siap melayani Anda. Percayakan kepada kami event anda mulai dari perancangan hingga event selesai.");
    printf("\n\nWilayah : Jakarta");
    printf("\n\nNo. Telp : 081307283617");
    printf("\n\nEmail : asadmusyasir@gmail.com");
    printf("\n___________________________________________________________________________________________________________________________________________________________________________________________________________________");
    printf("\n\t\t\t\t\t\t\t\t\t\t==================================");
    printf("\n\t\t\t\t\t\t\t\t\t\t17\t   [Ubay EO]\t        17");
    printf("\n\t\t\t\t\t\t\t\t\t\t==================================");
    printf("\n\n\t\t\tAtas dasar kerja, tanggung jawab, semangat dan ide-ide Terbaik kami yang inovatif dan kreatif, berbagai event yang kami kerjakan dapat dilaksanakan dengan baik. \n\t\t\t\t\tDan hal itu pula yang menjadi pemicu kami untuk bekerja tetap memberikan yang Terbaik, lebih baik dan lebih baik lagi.");
    printf("\n\nWilayah : Tanggerang");
    printf("\n\nNo. Telp : 085889674255");
    printf("\n\nEmail : bayupangestu@gamil.com");
    printf("\n___________________________________________________________________________________________________________________________________________________________________________________________________________________");
    printf("\n\t\t\t\t\t\t\t\t\t\t==================================");
    printf("\n\t\t\t\t\t\t\t\t\t\t18\t   [Hanif EO]        18");
    printf("\n\t\t\t\t\t\t\t\t\t\t==================================");
    printf("\n\n\t\t\t\tVisi Kami adalah terwujudnya EO yang dapat melayani masyarakat di bidang perancangan event. Kami bergerak dengan asas kejujuran dan kedisiplinan.");
    printf("\n\nWilayah : Tanggerang");
    printf("\n\nNo. Telp : 085899715477");
    printf("\n\nEmail : hanifzufarafif@gmail.com");
    printf("\n___________________________________________________________________________________________________________________________________________________________________________________________________________________");
    printf("\n\t\t\t\t\t\t\t\t\t\t==================================");
    printf("\n\t\t\t\t\t\t\t\t\t\t19\t   [Ghalib EO]\t        19");
    printf("\n\t\t\t\t\t\t\t\t\t\t==================================");
    printf("\n\n\t\t\t\t\t\tKamu bingung mau bikin acara besar? Dengan Harga yang cukup terjangkau kami siap melayani kapanpun dan dimanapun.");
    printf("\n\nWilayah : Tanggerang");
    printf("\n\nNo. Telp : 085712963386");
    printf("\n\nEmail : adityaghalibh@gmail.com");
    printf("\n___________________________________________________________________________________________________________________________________________________________________________________________________________________");
    printf("\n\t\t\t\t\t\t\t\t\t\t==================================");
    printf("\n\t\t\t\t\t\t\t\t\t\t20\t   [Salman EO]\t        20");
    printf("\n\t\t\t\t\t\t\t\t\t\t==================================");
    printf("\n\n\t     Kami adalah Event Organizer yang mengusung gerbrakan baru di dunia perancangan event. Kami dipenuhi orang orang muda yang mempunyai inovasi, kreatifitas, dan etos kerja yang baik.");
    printf("\n\nWilayah : Tanggerang");
    printf("\n\nNo. Telp : 089688326390");
    printf("\n\nEmail : salmanalfarisi@gmail.com");
    printf("\n___________________________________________________________________________________________________________________________________________________________________________________________________________________");
    printf("\n\t\t\t\t\t\t\t\t\t\t==================================");
    printf("\n\t\t\t\t\t\t\t\t\t\t21\t   [Peka EO]\t        21");
    printf("\n\t\t\t\t\t\t\t\t\t\t==================================");
    printf("\n\n\tKami membuka berbagai layanan jasa Event Organizer baik itu event kecil maupun besar, kami siap melayani Anda. Percayakan kepada kami event anda mulai dari perancangan hingga event selesai.");
    printf("\n\nWilayah : Bekasi");
    printf("\n\nNo. Telp : 085844907492");
    printf("\n\nEmail : pkrenaldy@gmail.com");
    printf("\n___________________________________________________________________________________________________________________________________________________________________________________________________________________");
    printf("\n\t\t\t\t\t\t\t\t\t\t==================================");
    printf("\n\t\t\t\t\t\t\t\t\t\t22\t   [Harits EO]\t        22");
    printf("\n\t\t\t\t\t\t\t\t\t\t==================================");
    printf("\n\n\t\t\tAtas dasar kerja, tanggung jawab, semangat dan ide-ide Terbaik kami yang inovatif dan kreatif, berbagai event yang kami kerjakan dapat dilaksanakan dengan baik. \n\t\t\t\t\tDan hal itu pula yang menjadi pemicu kami untuk bekerja tetap memberikan yang Terbaik, lebih baik dan lebih baik lagi.");
    printf("\n\nWilayah : Bekasi");
    printf("\n\nNo. Telp : 085890554108");
    printf("\n\nEmail : fadhlanharits@gmail.com");
    printf("\n___________________________________________________________________________________________________________________________________________________________________________________________________________________");
    printf("\n\t\t\t\t\t\t\t\t\t\t==================================");
    printf("\n\t\t\t\t\t\t\t\t\t\t23\t   [Ilsa EO]\t        23");
    printf("\n\t\t\t\t\t\t\t\t\t\t==================================");
    printf("\n\n\t\t\t\tVisi Kami adalah terwujudnya EO yang dapat melayani masyarakat di bidang perancangan event. Kami bergerak dengan asas kejujuran dan kedisiplinan.");
    printf("\n\nWilayah : Bekasi");
    printf("\n\nNo. Telp : 085811327906");
    printf("\n\nEmail : ailsyafadynia@gmail.com");
    printf("\n___________________________________________________________________________________________________________________________________________________________________________________________________________________");
    printf("\n\t\t\t\t\t\t\t\t\t\t==================================");
    printf("\n\t\t\t\t\t\t\t\t\t\t24\t   [Elloy EO]\t        24");
    printf("\n\t\t\t\t\t\t\t\t\t\t==================================");
    printf("\n\n\t\t\t\t\t\tKamu bingung mau bikin acara besar? Dengan Harga yang cukup terjangkau kami siap melayani kapanpun dan dimanapun.");
    printf("\n\nWilayah : Bekasi");
    printf("\n\nNo. Telp : 0858551062858");
    printf("\n\nEmail : jonathanelloy@gmail.com");
    printf("\n___________________________________________________________________________________________________________________________________________________________________________________________________________________");
    printf("\n\t\t\t\t\t\t\t\t\t\t==================================");
    printf("\n\t\t\t\t\t\t\t\t\t\t25\t   [Aldi EO]\t        25");
    printf("\n\t\t\t\t\t\t\t\t\t\t==================================");
    printf("\n\n\t     Kami adalah Event Organizer yang mengusung gerbrakan baru di dunia perancangan event. Kami dipenuhi orang orang muda yang mempunyai inovasi, kreatifitas, dan etos kerja yang baik.");
    printf("\n\nWilayah : Bekasi");
    printf("\n\nNo. Telp : 081317625922");
    printf("\n\nEmail : aldiandyairsyad@gmail.com");
    printf("\n___________________________________________________________________________________________________________________________________________________________________________________________________________________");

}

void validation(char number[], int validate){
	int x;
	validate=0;
	for(x=0; strlen(number)>x ;x++){
		if(number[x]<48 || number[x]>57) validate=1;
	}

}

int wilayah(){
  printf("\n\t\t\t\t\t\t\t\t\t\t=================================================");
  printf("\n\t\t\t\t\t\t\t\t\t\t=\t\t  Pilih Region\t                =");
  printf("\n\t\t\t\t\t\t\t\t\t\t=================================================");
  printf("\n\n\n");
  printf("\n\n\n___________________________________________________________________________________________________________________________________________________________________________________________________________________");
  printf("\n\n\n\t\t\t\t\t\t\t\t  |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||");
  printf("\n\t\t\t\t\t\t\t\t  |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||");
  printf("\n\t\t\t\t\t\t\t\t  |||||||||      ||||   ||||  |||  ||||   ||||       ||        |||   ||||||||||");
  printf("\n\t\t\t\t\t\t\t\t  |||||||||||  ||||  |||  ||  ||  |||  |||  ||  ||||  ||||  ||||  |||  ||||||||");
  printf("\n\t\t\t\t\t\t\t\t  |||||||||||  ||||  |||  ||  |  ||||  |||  ||  ||||  ||||  ||||  |||  ||||||||");
  printf("\n\tPilih '1' Untuk Daerah : \t\t\t\t  |||||||||||  ||||  |||  ||    |||||  |||  ||  |||  |||||  ||||  |||  ||||||||");
  printf("\n\t\t\t\t\t\t\t\t  |||||||||||  ||||       ||  |  ||||       ||     |||||||  ||||       ||||||||");
  printf("\n\t\t\t\t\t\t\t\t  |||||||||||  ||||  |||  ||  ||  |||  |||  ||  ||   |||||  ||||  |||  ||||||||");
  printf("\n\t\t\t\t\t\t\t\t  ||||||||     ||||  |||  ||  |||  ||  |||  ||  |||   ||||  ||||  |||  ||||||||");
  printf("\n\t\t\t\t\t\t\t\t  |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||");
  printf("\n\t\t\t\t\t\t\t\t  |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||");
  printf("\n\n\n___________________________________________________________________________________________________________________________________________________________________________________________________________________");
  printf("\n\n\n\t\t\t\t\t\t\t\t  |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||");
  printf("\n\t\t\t\t\t\t\t\t  |||||||||||        ||||       ||||         ||||       |||        ||||||||||||");
  printf("\n\t\t\t\t\t\t\t\t  |||||||||||  |||||  ||  |||||  ||   ||||    ||  |||||  ||  ||||   |||||||||||");
  printf("\n\t\t\t\t\t\t\t\t  |||||||||||  |||||  ||  |||||  ||   ||||||||||  |||||  ||  ||||   |||||||||||");
  printf("\n\t\t\t\t\t\t\t\t  |||||||||||  |||||  ||  |||||  ||   ||||||||||  |||||  ||  |||   ||||||||||||");
  printf("\n\tPilih '2' Untuk Daerah : \t\t\t\t  |||||||||||         ||  |||||  ||   |||     ||  |||||  ||  ||   |||||||||||||");
  printf("\n\t\t\t\t\t\t\t\t  |||||||||||  |||||  ||  |||||  ||   |||||   ||  |||||  ||      ||||||||||||||");
  printf("\n\t\t\t\t\t\t\t\t  |||||||||||  |||||  ||  |||||  ||   |||||   ||  |||||  ||  ||   |||||||||||||");
  printf("\n\t\t\t\t\t\t\t\t  |||||||||||  |||||  ||  |||||  ||   |||||   ||  |||||  ||  |||   ||||||||||||");
  printf("\n\t\t\t\t\t\t\t\t  |||||||||||        ||||       ||||         ||||       |||  ||||   |||||||||||");
  printf("\n\t\t\t\t\t\t\t\t  |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||");
  printf("\n\n\n___________________________________________________________________________________________________________________________________________________________________________________________________________________");
  printf("\n\n\n\t\t\t\t\t\t\t\t  |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||");
  printf("\n\t\t\t\t\t\t\t\t  ||||||||||          ||||         |||        ||||       |||   ||||   |||||||||");
  printf("\n\t\t\t\t\t\t\t\t  ||||||||||  |||||||  ||  |||||||||||  |||||  ||  |||||  ||   |||   ||||||||||");
  printf("\n\t\t\t\t\t\t\t\t  ||||||||||  |||||||  ||  |||||||||||  |||||  ||  |||||  ||   ||   |||||||||||");
  printf("\n\t\t\t\t\t\t\t\t  ||||||||||  |||||||  ||  |||||||||||  |||||  ||  |||||  ||   |   ||||||||||||");
  printf("\n\tPilih '3' Untuk Daerah : \t\t\t\t  ||||||||||  |||||||  ||          |||        |||  |||||  ||     ||||||||||||||");
  printf("\n\t\t\t\t\t\t\t\t  ||||||||||  |||||||  ||  |||||||||||  |||||||||  |||||  ||   |   ||||||||||||");
  printf("\n\t\t\t\t\t\t\t\t  ||||||||||  |||||||  ||  |||||||||||  |||||||||  |||||  ||   ||   |||||||||||");
  printf("\n\t\t\t\t\t\t\t\t  ||||||||||  |||||||  ||  |||||||||||  |||||||||  |||||  ||   |||   ||||||||||");
  printf("\n\t\t\t\t\t\t\t\t  ||||||||||          ||||         |||  ||||||||||       |||   ||||   |||||||||");
  printf("\n\t\t\t\t\t\t\t\t  |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||");
  printf("\n\n\n___________________________________________________________________________________________________________________________________________________________________________________________________________________");
  printf("\n\n\n\t\t\t\t\t\t\t  ||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||");
  printf("\n\t\t\t\t\t\t\t  ||||        ||    |||  |||| |||     ||||     |||     |||     ||||    |||  |||| |||     |||||||");
  printf("\n\t\t\t\t\t\t\t  |||||||  ||||  ||  ||  |||| || ||||  || ||||  || ||||||| |||  ||  ||  ||  |||| || ||||  ||||||");
  printf("\n\t\t\t\t\t\t\t  |||||||  ||||  ||  || | ||| || |||||||| |||||||| ||||||| |||  ||  ||  || | ||| || ||||||||||||");
  printf("\n\t\t\t\t\t\t\t  |||||||  ||||  ||  || | ||| || |||||||| |||||||| ||||||| |||  ||  ||  || | ||| || ||||||||||||");
  printf("\n\tPilih '4' Untuk Daerah : \t\t\t  |||||||  ||||  ||  || || || || |||   || |||   ||     ||| ||  |||  ||  || || || || |||   ||||||");
  printf("\n\t\t\t\t\t\t\t  |||||||  ||||      || ||| | || ||||| || ||||| || ||||||| |  ||||      || ||| | || ||||| ||||||");
  printf("\n\t\t\t\t\t\t\t  |||||||  ||||  ||  || ||| | || ||||| || ||||| || ||||||| ||  |||  ||  || ||| | || ||||| ||||||");
  printf("\n\t\t\t\t\t\t\t  |||||||  ||||  ||  || ||||  || ||||| || ||||| || ||||||| |||  ||  ||  || ||||  || ||||| ||||||");
  printf("\n\t\t\t\t\t\t\t  |||||||  ||||  ||  || ||||  |||     ||||     |||     ||| ||||  |  ||  || ||||  |||     |||||||");
  printf("\n\t\t\t\t\t\t\t  ||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||");
  printf("\n\n\n___________________________________________________________________________________________________________________________________________________________________________________________________________________");
  printf("\n\n\n\t\t\t\t\t\t\t\t  |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||");
  printf("\n\t\t\t\t\t\t\t\t  |||||||||       ||||       |||   ||||   |||       ||||         |||   ||||||||");
  printf("\n\t\t\t\t\t\t\t\t  |||||||||  ||||  |||  ||||||||   |||   |||   |||   |||  |||||||||||||||||||||");
  printf("\n\t\t\t\t\t\t\t\t  |||||||||  ||||  |||  ||||||||   ||   ||||   |||   |||  ||||||||||   ||||||||");
  printf("\n\t\t\t\t\t\t\t\t  |||||||||  ||||  |||  ||||||||   |   |||||   |||   |||  ||||||||||   ||||||||");
  printf("\n\tPilih '5' Untuk Daerah : \t\t\t\t  |||||||||       ||||       |||     |||||||   |||   |||         |||   ||||||||");
  printf("\n\t\t\t\t\t\t\t\t  |||||||||  ||||  |||  ||||||||   |   |||||         ||||||||||  |||   ||||||||");
  printf("\n\t\t\t\t\t\t\t\t  |||||||||  ||||  |||  ||||||||   ||   ||||   |||   ||||||||||  |||   ||||||||");
  printf("\n\t\t\t\t\t\t\t\t  |||||||||  ||||  |||  ||||||||   |||   |||   |||   ||||||||||  |||   ||||||||");
  printf("\n\t\t\t\t\t\t\t\t  |||||||||       ||||       |||   ||||   ||   |||   |||         |||   ||||||||");
  printf("\n\t\t\t\t\t\t\t\t  |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||");
  printf("\n\n\n___________________________________________________________________________________________________________________________________________________________________________________________________________________");
  printf("\n\n\tPilih '6' Untuk Kembali Ke Menu");
  printf("\n\n\tPilih '7' Untuk Keluar");
	do{

		printf("\n\n\t \t \t \t \t \t \t \t \t \t \t Silahkan Pilih Menu : ");
		scanf("%s",num1);getchar();

		validation(num1,valid);
	system ("cls");
	//body();
	}while(valid==1);
	pilih1 = atoi(num1) ;
	switch (pilih1) {
		case 1 :
			eventjkt();
			break;
		case 2 :
			eventbgr();
			break;
		case 3 :
			eventdpk();
			break;
		case 4 :
			eventtgr();
			break;
		case 5 :
			eventbks();
			break;
    case 6:
      main();
    case 7:
      end();
	}
}
int eventjkt(){
jenisevent();
	do{
    printf("\n\n\n___________________________________________________________________________________________________________________________________________________________________________________________________________________");
		printf("\n\n\t \t \t \t \t \t \t \t \t \t\tPilih Menu : ");
		scanf("%s",num2);getchar();

		validation(num2,valid);
	system ("cls");
	//body();
	}while(valid==1);
	pilih2 = atoi(num2) ;
	switch (pilih2){
		case 1 :
			wpjkt();
			break;
		case 2 :
			bpjkt();
      break;
		case 3 :
			byjkt();
      break;
    case 4:
      main();
	}
}

int eventbgr(){
	jenisevent();
	do{
    printf("\n\n\n___________________________________________________________________________________________________________________________________________________________________________________________________________________");
		printf("\n\n\t \t \t \t \t \t \t \t \t \t\tPilih Menu : ");
		scanf("%s",num3);getchar();

		validation(num3,valid);
	system ("cls");
	//body();
	}while(valid==1);
	pilih3 = atoi(num3) ;
	switch (pilih3){
		case 1 :
			wpbgr();
      break;
		case 2 :
			bpbgr();
      break;
		case 3 :
			bybgr();
      break;
    case 4:
      main();
	}
}

int eventdpk(){
	jenisevent();
	do{
    printf("\n\n\n___________________________________________________________________________________________________________________________________________________________________________________________________________________");
		printf("\n\n\t \t \t \t \t \t \t \t \t \t\tPilih Menu : ");
		scanf("%s",num4);getchar();

		validation(num4,valid);
	system ("cls");
	//body();
	}while(valid==1);
	pilih4 = atoi(num4) ;
	switch (pilih4){
		case 1 :
			wpdpk();
      break;
		case 2 :
			bpdpk();
      break;
		case 3 :
			bydpk();
      break;
    case 4:
      main();
	}
}

int eventtgr(){
	jenisevent();
	do{
    printf("\n\n\n___________________________________________________________________________________________________________________________________________________________________________________________________________________");
		printf("\n\n\t \t \t \t \t \t \t \t \t \t\tPilih Menu : ");
		scanf("%s",num5);getchar();

		validation(num5,valid);
	system ("cls");
	//body();
	}while(valid==1);
	pilih5 = atoi(num5) ;
	switch (pilih5){
		case 1 :
			wptgr();
      break;
		case 2 :
			bptgr();
      break;
		case 3 :
			bytgr();
      break;
    case 4:
      main();
	}
}

int eventbks(){
	jenisevent();
	do{
    printf("\n\n\n___________________________________________________________________________________________________________________________________________________________________________________________________________________");
		printf("\n\n\t \t \t \t \t \t \t \t \t \t\tPilih Menu : ");
		scanf("%s",num6);getchar();

		validation(num6,valid);
	system ("cls");
	//body();
	}while(valid==1);
	pilih6 = atoi(num6) ;
	switch (pilih6){
		case 1 :
			wpbks();
      break;
		case 2 :
			bpbks();
      break;
		case 3 :
			bybks();
      break;
    case 4:
      main();
	}
}

int wpjkt(){
  printf("\n\t\t\t\t\t\t\t\t\t=================================================");
  printf("\n\t\t\t\t\t\t\t\t\t=================================================");
  printf("\n\t\t\t\t\t\t\t\t\t=\t\tEO yang Tersedia\t        =");
  printf("\n\t\t\t\t\t\t\t\t\t=================================================");
  printf("\n\t\t\t\t\t\t\t\t\t=================================================");
  printf("\n");
  printf("\n___________________________________________________________________________________________________________________________________________________________________________________________________________________");
  printf("\n\t\t\t\t\t\t\t\t\t\t=================================");
  printf("\n\t\t\t\t\t\t\t\t\t\t1\t   [As'ad EO]\t        1");
  printf("\n\t\t\t\t\t\t\t\t\t\t=================================");
  printf("\n\n\tKami membuka berbagai layanan jasa Event Organizer baik itu event kecil maupun besar, kami siap melayani Anda. Percayakan kepada kami event anda mulai dari perancangan hingga event selesai.");
  printf("\n___________________________________________________________________________________________________________________________________________________________________________________________________________________");
  printf("\n\t\t\t\t\t\t\t\t\t\t=================================");
  printf("\n\t\t\t\t\t\t\t\t\t\t2\t   [Farid EO]\t        2");
  printf("\n\t\t\t\t\t\t\t\t\t\t=================================");
  printf("\n\n\t\t\tAtas dasar kerja, tanggung jawab, semangat dan ide-ide Terbaik kami yang inovatif dan kreatif, berbagai event yang kami kerjakan dapat dilaksanakan dengan baik. \n\t\t\t\t\tDan hal itu pula yang menjadi pemicu kami untuk bekerja tetap memberikan yang Terbaik, lebih baik dan lebih baik lagi.");
  printf("\n___________________________________________________________________________________________________________________________________________________________________________________________________________________");
  printf("\n\t\t\t\t\t\t\t\t\t\t=================================");
  printf("\n\t\t\t\t\t\t\t\t\t\t3\t   [Gibran EO]\t        3");
  printf("\n\t\t\t\t\t\t\t\t\t\t=================================");
  printf("\n\n\t\t\t\tVisi Kami adalah terwujudnya EO yang dapat melayani masyarakat di bidang perancangan event. Kami bergerak dengan asas kejujuran dan kedisiplinan.");
  printf("\n___________________________________________________________________________________________________________________________________________________________________________________________________________________");
  printf("\n\nPilih '4' Untuk Kembali Ke Menu Awal");
  printf("\n\n___________________________________________________________________________________________________________________________________________________________________________________________________________________");
	do{
		printf("\n\n \t \t \t \t \t \t \t \t \t \t \t Pilih EO : ");
		scanf("%s",num7);getchar();

		validation(num7,valid);
	system ("cls");
	//body();
	}while(valid==1);
	pilih7 = atoi(num7) ;
	switch (pilih7){
		case 1 :
			asad();
			break;
		case 2 :
			farid();
			break;
		case 3 :
			gibran();
			break;
    case 4:
      main();
	}

}

int wpbks(){
  printf("\n\t\t\t\t\t\t\t\t\t=================================================");
  printf("\n\t\t\t\t\t\t\t\t\t=================================================");
  printf("\n\t\t\t\t\t\t\t\t\t=\t\tEO yang Tersedia\t        =");
  printf("\n\t\t\t\t\t\t\t\t\t=================================================");
  printf("\n\t\t\t\t\t\t\t\t\t=================================================");
  printf("\n");
  printf("\n___________________________________________________________________________________________________________________________________________________________________________________________________________________");
  printf("\n\t\t\t\t\t\t\t\t\t\t=================================");
  printf("\n\t\t\t\t\t\t\t\t\t\t1\t   [Peka EO]\t        1");
  printf("\n\t\t\t\t\t\t\t\t\t\t=================================");
  printf("\n\n\tKami membuka berbagai layanan jasa Event Organizer baik itu event kecil maupun besar, kami siap melayani Anda. Percayakan kepada kami event anda mulai dari perancangan hingga event selesai.");
  printf("\n___________________________________________________________________________________________________________________________________________________________________________________________________________________");
  printf("\n\t\t\t\t\t\t\t\t\t\t=================================");
  printf("\n\t\t\t\t\t\t\t\t\t\t2\t   [Harits EO]\t        2");
  printf("\n\t\t\t\t\t\t\t\t\t\t=================================");
  printf("\n\n\t\t\tAtas dasar kerja, tanggung jawab, semangat dan ide-ide Terbaik kami yang inovatif dan kreatif, berbagai event yang kami kerjakan dapat dilaksanakan dengan baik. \n\t\t\t\t\tDan hal itu pula yang menjadi pemicu kami untuk bekerja tetap memberikan yang Terbaik, lebih baik dan lebih baik lagi.");
  printf("\n___________________________________________________________________________________________________________________________________________________________________________________________________________________");
  printf("\n\t\t\t\t\t\t\t\t\t\t=================================");
  printf("\n\t\t\t\t\t\t\t\t\t\t3\t   [Ilsa EO]\t        3");
  printf("\n\t\t\t\t\t\t\t\t\t\t=================================");
  printf("\n\n\t\t\t\tVisi Kami adalah terwujudnya EO yang dapat melayani masyarakat di bidang perancangan event. Kami bergerak dengan asas kejujuran dan kedisiplinan.");
  printf("\n___________________________________________________________________________________________________________________________________________________________________________________________________________________");
  printf("\n\nPilih '4' Untuk Kembali Ke Menu Awal");
  printf("\n\n___________________________________________________________________________________________________________________________________________________________________________________________________________________");
	do{
		printf("\n\n \t \t \t \t \t \t \t \t \t \t \t Pilih EO : ");
		scanf("%s",num8);getchar();

		validation(num8,valid);
	system ("cls");
	//body();
	}while(valid==1);
	pilih8 = atoi(num8) ;
	switch (pilih8){
		case 1 :
			peka();
      break;
		case 2 :
			harits();
      break;
		case 3 :
			ilsa();
      break;
    case 4:
      main();
	}

}

int wpbgr(){
  printf("\n\t\t\t\t\t\t\t\t\t=================================================");
  printf("\n\t\t\t\t\t\t\t\t\t=================================================");
  printf("\n\t\t\t\t\t\t\t\t\t=\t\tEO yang Tersedia\t        =");
  printf("\n\t\t\t\t\t\t\t\t\t=================================================");
  printf("\n\t\t\t\t\t\t\t\t\t=================================================");
  printf("\n");
  printf("\n___________________________________________________________________________________________________________________________________________________________________________________________________________________");
  printf("\n\t\t\t\t\t\t\t\t\t\t=================================");
  printf("\n\t\t\t\t\t\t\t\t\t\t1\t   [Nathan EO]\t        1");
  printf("\n\t\t\t\t\t\t\t\t\t\t=================================");
  printf("\n\n\tKami membuka berbagai layanan jasa Event Organizer baik itu event kecil maupun besar, kami siap melayani Anda. Percayakan kepada kami event anda mulai dari perancangan hingga event selesai.");
  printf("\n___________________________________________________________________________________________________________________________________________________________________________________________________________________");
  printf("\n\t\t\t\t\t\t\t\t\t\t=================================");
  printf("\n\t\t\t\t\t\t\t\t\t\t2\t   [Arva EO]\t        2");
  printf("\n\t\t\t\t\t\t\t\t\t\t=================================");
  printf("\n\n\t\t\tAtas dasar kerja, tanggung jawab, semangat dan ide-ide Terbaik kami yang inovatif dan kreatif, berbagai event yang kami kerjakan dapat dilaksanakan dengan baik. \n\t\t\t\t\tDan hal itu pula yang menjadi pemicu kami untuk bekerja tetap memberikan yang Terbaik, lebih baik dan lebih baik lagi.");
  printf("\n___________________________________________________________________________________________________________________________________________________________________________________________________________________");
  printf("\n\t\t\t\t\t\t\t\t\t\t=================================");
  printf("\n\t\t\t\t\t\t\t\t\t\t3\t   [Syahmi EO]\t        3");
  printf("\n\t\t\t\t\t\t\t\t\t\t=================================");
  printf("\n\n\t\t\t\tVisi Kami adalah terwujudnya EO yang dapat melayani masyarakat di bidang perancangan event. Kami bergerak dengan asas kejujuran dan kedisiplinan.");
  printf("\n___________________________________________________________________________________________________________________________________________________________________________________________________________________");
  printf("\n\nPilih '4' Untuk Kembali Ke Menu Awal");
  printf("\n\n___________________________________________________________________________________________________________________________________________________________________________________________________________________");
	do{
		printf("\n\n \t \t \t \t \t \t \t \t \t \t \t Pilih EO : ");
		scanf("%s",num9);getchar();

		validation(num9,valid);
	system ("cls");
	//body();
	}while(valid==1);
	pilih9 = atoi(num9) ;
	switch (pilih9){
		case 1 :
			nathan();
      break;
		case 2 :
			arva();
      break;
		case 3 :
			syahmi();
      break;
    case 4:
      main();
	}

}

int wpdpk(){
  printf("\n\t\t\t\t\t\t\t\t\t=================================================");
  printf("\n\t\t\t\t\t\t\t\t\t=================================================");
  printf("\n\t\t\t\t\t\t\t\t\t=\t\tEO yang Tersedia\t        =");
  printf("\n\t\t\t\t\t\t\t\t\t=================================================");
  printf("\n\t\t\t\t\t\t\t\t\t=================================================");
  printf("\n");
  printf("\n___________________________________________________________________________________________________________________________________________________________________________________________________________________");
  printf("\n\t\t\t\t\t\t\t\t\t\t=================================");
  printf("\n\t\t\t\t\t\t\t\t\t\t1\t   [Adit EO]\t        1");
  printf("\n\t\t\t\t\t\t\t\t\t\t=================================");
  printf("\n\n\tKami membuka berbagai layanan jasa Event Organizer baik itu event kecil maupun besar, kami siap melayani Anda. Percayakan kepada kami event anda mulai dari perancangan hingga event selesai.");
  printf("\n___________________________________________________________________________________________________________________________________________________________________________________________________________________");
  printf("\n\t\t\t\t\t\t\t\t\t\t=================================");
  printf("\n\t\t\t\t\t\t\t\t\t\t2\t   [Aldo EO]\t        2");
  printf("\n\t\t\t\t\t\t\t\t\t\t=================================");
  printf("\n\n\t\t\tAtas dasar kerja, tanggung jawab, semangat dan ide-ide Terbaik kami yang inovatif dan kreatif, berbagai event yang kami kerjakan dapat dilaksanakan dengan baik. \n\t\t\t\t\tDan hal itu pula yang menjadi pemicu kami untuk bekerja tetap memberikan yang Terbaik, lebih baik dan lebih baik lagi.");
  printf("\n___________________________________________________________________________________________________________________________________________________________________________________________________________________");
  printf("\n\t\t\t\t\t\t\t\t\t\t=================================");
  printf("\n\t\t\t\t\t\t\t\t\t\t3\t   [Elyaser EO]\t        3");
  printf("\n\t\t\t\t\t\t\t\t\t\t=================================");
  printf("\n\n\t\t\t\tVisi Kami adalah terwujudnya EO yang dapat melayani masyarakat di bidang perancangan event. Kami bergerak dengan asas kejujuran dan kedisiplinan.");
  printf("\n___________________________________________________________________________________________________________________________________________________________________________________________________________________");
  printf("\n\nPilih '4' Untuk Kembali Ke Menu Awal");
  printf("\n\n___________________________________________________________________________________________________________________________________________________________________________________________________________________");
	do{
		printf("\n\n \t \t \t \t \t \t \t \t \t \t \t Pilih EO : ");
		scanf("%s",num10);getchar();

		validation(num10,valid);
	system ("cls");
	//body();
	}while(valid==1);
	pilih10 = atoi(num10) ;
	switch (pilih10){
		case 1 :
			adit();
      break;
		case 2 :
			aldo();
      break;
		case 3 :
			elyaser();
      break;
    case 4:
      main();
	}

}

int wptgr(){
  printf("\n\t\t\t\t\t\t\t\t\t=================================================");
  printf("\n\t\t\t\t\t\t\t\t\t=================================================");
  printf("\n\t\t\t\t\t\t\t\t\t=\t\tEO yang Tersedia\t        =");
  printf("\n\t\t\t\t\t\t\t\t\t=================================================");
  printf("\n\t\t\t\t\t\t\t\t\t=================================================");
  printf("\n");
  printf("\n___________________________________________________________________________________________________________________________________________________________________________________________________________________");
  printf("\n\t\t\t\t\t\t\t\t\t\t=================================");
  printf("\n\t\t\t\t\t\t\t\t\t\t1\t   [Sadam EO]\t        1");
  printf("\n\t\t\t\t\t\t\t\t\t\t=================================");
  printf("\n\n\tKami membuka berbagai layanan jasa Event Organizer baik itu event kecil maupun besar, kami siap melayani Anda. Percayakan kepada kami event anda mulai dari perancangan hingga event selesai.");
  printf("\n___________________________________________________________________________________________________________________________________________________________________________________________________________________");
  printf("\n\t\t\t\t\t\t\t\t\t\t=================================");
  printf("\n\t\t\t\t\t\t\t\t\t\t2\t   [Ubay EO]\t        2");
  printf("\n\t\t\t\t\t\t\t\t\t\t=================================");
  printf("\n\n\t\t\tAtas dasar kerja, tanggung jawab, semangat dan ide-ide Terbaik kami yang inovatif dan kreatif, berbagai event yang kami kerjakan dapat dilaksanakan dengan baik. \n\t\t\t\t\tDan hal itu pula yang menjadi pemicu kami untuk bekerja tetap memberikan yang Terbaik, lebih baik dan lebih baik lagi.");
  printf("\n___________________________________________________________________________________________________________________________________________________________________________________________________________________");
  printf("\n\t\t\t\t\t\t\t\t\t\t=================================");
  printf("\n\t\t\t\t\t\t\t\t\t\t3\t   [Elyaser EO]\t        3");
  printf("\n\t\t\t\t\t\t\t\t\t\t=================================");
  printf("\n\n\t\t\t\tVisi Kami adalah terwujudnya EO yang dapat melayani masyarakat di bidang perancangan event. Kami bergerak dengan asas kejujuran dan kedisiplinan.");
  printf("\n___________________________________________________________________________________________________________________________________________________________________________________________________________________");
  printf("\n\nPilih '4' Untuk Kembali Ke Menu Awal");
  printf("\n\n___________________________________________________________________________________________________________________________________________________________________________________________________________________");
	do{
		printf("\n\n \t \t \t \t \t \t \t \t \t \t \t Pilih EO : ");
		scanf("%s",num11);getchar();

		validation(num11,valid);
	system ("cls");
	//body();
	}while(valid==1);
	pilih11 = atoi(num11) ;
	switch (pilih11){
		case 1 :
			sadam();
      break;
		case 2 :
			ubay();
      break;
		case 3 :
			hanif();
      break;
    case 4:
      main();
	}

}


int bpjkt(){
  printf("\n\t\t\t\t\t\t\t\t\t=================================================");
  printf("\n\t\t\t\t\t\t\t\t\t=================================================");
  printf("\n\t\t\t\t\t\t\t\t\t=\t\tEO yang Tersedia\t        =");
  printf("\n\t\t\t\t\t\t\t\t\t=================================================");
  printf("\n\t\t\t\t\t\t\t\t\t=================================================");
  printf("\n");
  printf("\n___________________________________________________________________________________________________________________________________________________________________________________________________________________");
  printf("\n\t\t\t\t\t\t\t\t\t\t=================================");
  printf("\n\t\t\t\t\t\t\t\t\t\t1\t   [Arief EO]\t        1");
  printf("\n\t\t\t\t\t\t\t\t\t\t=================================");
  printf("\n\n\tKami membuka berbagai layanan jasa Event Organizer baik itu event kecil maupun besar, kami siap melayani Anda. Percayakan kepada kami event anda mulai dari perancangan hingga event selesai.");
  printf("\n___________________________________________________________________________________________________________________________________________________________________________________________________________________");
  printf("\n\t\t\t\t\t\t\t\t\t\t=================================");
  printf("\n\t\t\t\t\t\t\t\t\t\t2\t   [Alfian EO]\t        2");
  printf("\n\t\t\t\t\t\t\t\t\t\t=================================");
  printf("\n\n\t\t\tAtas dasar kerja, tanggung jawab, semangat dan ide-ide Terbaik kami yang inovatif dan kreatif, berbagai event yang kami kerjakan dapat dilaksanakan dengan baik. \n\t\t\t\t\tDan hal itu pula yang menjadi pemicu kami untuk bekerja tetap memberikan yang Terbaik, lebih baik dan lebih baik lagi.");
  printf("\n___________________________________________________________________________________________________________________________________________________________________________________________________________________");
  printf("\n\nPilih '3' Untuk Kembali Ke Menu Awal");
  printf("\n\n___________________________________________________________________________________________________________________________________________________________________________________________________________________");
	do{
		printf("\n\n \t \t \t \t \t \t \t \t \t \t \t Pilih EO : ");
		scanf("%s",num12);getchar();

		validation(num12,valid);
	system ("cls");
	//body();
	}while(valid==1);
	pilih12 = atoi(num12) ;
	switch (pilih12){
		case 1 :
			arief();
			break;
		case 2 :
			alfian();
      break;
    case 3:
      main();
	}

}

int bpbgr(){
  printf("\n\t\t\t\t\t\t\t\t\t=================================================");
  printf("\n\t\t\t\t\t\t\t\t\t=================================================");
  printf("\n\t\t\t\t\t\t\t\t\t=\t\tEO yang Tersedia\t        =");
  printf("\n\t\t\t\t\t\t\t\t\t=================================================");
  printf("\n\t\t\t\t\t\t\t\t\t=================================================");
  printf("\n");
  printf("\n___________________________________________________________________________________________________________________________________________________________________________________________________________________");
  printf("\n\t\t\t\t\t\t\t\t\t\t=================================");
  printf("\n\t\t\t\t\t\t\t\t\t\t1\t   [Ramadhan EO]\t        1");
  printf("\n\t\t\t\t\t\t\t\t\t\t=================================");
  printf("\n\n\tKami membuka berbagai layanan jasa Event Organizer baik itu event kecil maupun besar, kami siap melayani Anda. Percayakan kepada kami event anda mulai dari perancangan hingga event selesai.");
  printf("\n___________________________________________________________________________________________________________________________________________________________________________________________________________________");
  printf("\n\t\t\t\t\t\t\t\t\t\t=================================");
  printf("\n\t\t\t\t\t\t\t\t\t\t2\t   [Hanvey EO]\t        2");
  printf("\n\t\t\t\t\t\t\t\t\t\t=================================");
  printf("\n\n\t\t\tAtas dasar kerja, tanggung jawab, semangat dan ide-ide Terbaik kami yang inovatif dan kreatif, berbagai event yang kami kerjakan dapat dilaksanakan dengan baik. \n\t\t\t\t\tDan hal itu pula yang menjadi pemicu kami untuk bekerja tetap memberikan yang Terbaik, lebih baik dan lebih baik lagi.");
  printf("\n___________________________________________________________________________________________________________________________________________________________________________________________________________________");
  printf("\n\nPilih '3' Untuk Kembali Ke Menu Awal");
  printf("\n\n___________________________________________________________________________________________________________________________________________________________________________________________________________________");
	do{
		printf("\n\n \t \t \t \t \t \t \t \t \t \t \t Pilih EO : ");
		scanf("%s",num13);getchar();

		validation(num13,valid);
	system ("cls");
	//body();
	}while(valid==1);
	pilih13 = atoi(num13) ;
	switch (pilih13){
		case 1 :
			ramadhan();
      break;
		case 2 :
			hanvey();
      break;
    case 3:
      main();

	}

}

int bpdpk(){
  printf("\n\t\t\t\t\t\t\t\t\t=================================================");
  printf("\n\t\t\t\t\t\t\t\t\t=================================================");
  printf("\n\t\t\t\t\t\t\t\t\t=\t\tEO yang Tersedia\t        =");
  printf("\n\t\t\t\t\t\t\t\t\t=================================================");
  printf("\n\t\t\t\t\t\t\t\t\t=================================================");
  printf("\n");
  printf("\n___________________________________________________________________________________________________________________________________________________________________________________________________________________");
  printf("\n\t\t\t\t\t\t\t\t\t\t=================================");
  printf("\n\t\t\t\t\t\t\t\t\t\t1\t   [Fatah EO]\t        1");
  printf("\n\t\t\t\t\t\t\t\t\t\t=================================");
  printf("\n\n\tKami membuka berbagai layanan jasa Event Organizer baik itu event kecil maupun besar, kami siap melayani Anda. Percayakan kepada kami event anda mulai dari perancangan hingga event selesai.");
  printf("\n___________________________________________________________________________________________________________________________________________________________________________________________________________________");
  printf("\n\t\t\t\t\t\t\t\t\t\t=================================");
  printf("\n\t\t\t\t\t\t\t\t\t\t2\t   [Taka EO]\t        2");
  printf("\n\t\t\t\t\t\t\t\t\t\t=================================");
  printf("\n\n\t\t\tAtas dasar kerja, tanggung jawab, semangat dan ide-ide Terbaik kami yang inovatif dan kreatif, berbagai event yang kami kerjakan dapat dilaksanakan dengan baik. \n\t\t\t\t\tDan hal itu pula yang menjadi pemicu kami untuk bekerja tetap memberikan yang Terbaik, lebih baik dan lebih baik lagi.");
  printf("\n___________________________________________________________________________________________________________________________________________________________________________________________________________________");
  printf("\n\nPilih '3' Untuk Kembali Ke Menu Awal");
  printf("\n\n___________________________________________________________________________________________________________________________________________________________________________________________________________________");
	do{
		printf("\n\n \t \t \t \t \t \t \t \t \t \t \t Pilih EO : ");
		scanf("%s",num14);getchar();

		validation(num14,valid);
	system ("cls");
	//body();
	}while(valid==1);
	pilih14 = atoi(num14) ;
	switch (pilih14){
		case 1 :
			fatah();
      break;
		case 2 :
			taka();
      break;
    case 3:
      main();

	}

}

int bptgr(){
  printf("\n\t\t\t\t\t\t\t\t\t=================================================");
  printf("\n\t\t\t\t\t\t\t\t\t=================================================");
  printf("\n\t\t\t\t\t\t\t\t\t=\t\tEO yang Tersedia\t        =");
  printf("\n\t\t\t\t\t\t\t\t\t=================================================");
  printf("\n\t\t\t\t\t\t\t\t\t=================================================");
  printf("\n");
  printf("\n___________________________________________________________________________________________________________________________________________________________________________________________________________________");
  printf("\n\t\t\t\t\t\t\t\t\t\t=================================");
  printf("\n\t\t\t\t\t\t\t\t\t\t1\t   [Ghalib EO]\t        1");
  printf("\n\t\t\t\t\t\t\t\t\t\t=================================");
  printf("\n\n\tKami membuka berbagai layanan jasa Event Organizer baik itu event kecil maupun besar, kami siap melayani Anda. Percayakan kepada kami event anda mulai dari perancangan hingga event selesai.");
  printf("\n___________________________________________________________________________________________________________________________________________________________________________________________________________________");
  printf("\n\t\t\t\t\t\t\t\t\t\t=================================");
  printf("\n\t\t\t\t\t\t\t\t\t\t2\t   [Salman EO]\t        2");
  printf("\n\t\t\t\t\t\t\t\t\t\t=================================");
  printf("\n\n\t\t\tAtas dasar kerja, tanggung jawab, semangat dan ide-ide Terbaik kami yang inovatif dan kreatif, berbagai event yang kami kerjakan dapat dilaksanakan dengan baik. \n\t\t\t\t\tDan hal itu pula yang menjadi pemicu kami untuk bekerja tetap memberikan yang Terbaik, lebih baik dan lebih baik lagi.");
  printf("\n___________________________________________________________________________________________________________________________________________________________________________________________________________________");
  printf("\n\nPilih '4' Untuk Kembali Ke Menu Awal");
  printf("\n\n___________________________________________________________________________________________________________________________________________________________________________________________________________________");
	do{
		printf("\n\n \t \t \t \t \t \t \t \t \t \t \t Pilih EO : ");
		scanf("%s",num15);getchar();

		validation(num15,valid);
	system ("cls");
	//body();
	}while(valid==1);
	pilih15 = atoi(num15) ;
	switch (pilih15){
		case 1 :
			ghalib();
      break;
		case 2 :
			salman();
      break;
    case 3:
      main();

	}

}

int bpbks(){
  printf("\n\t\t\t\t\t\t\t\t\t=================================================");
  printf("\n\t\t\t\t\t\t\t\t\t=================================================");
  printf("\n\t\t\t\t\t\t\t\t\t=\t\tEO yang Tersedia\t        =");
  printf("\n\t\t\t\t\t\t\t\t\t=================================================");
  printf("\n\t\t\t\t\t\t\t\t\t=================================================");
  printf("\n");
  printf("\n___________________________________________________________________________________________________________________________________________________________________________________________________________________");
  printf("\n\t\t\t\t\t\t\t\t\t\t=================================");
  printf("\n\t\t\t\t\t\t\t\t\t\t1\t   [Elloy EO]\t        1");
  printf("\n\t\t\t\t\t\t\t\t\t\t=================================");
  printf("\n\n\tKami membuka berbagai layanan jasa Event Organizer baik itu event kecil maupun besar, kami siap melayani Anda. Percayakan kepada kami event anda mulai dari perancangan hingga event selesai.");
  printf("\n___________________________________________________________________________________________________________________________________________________________________________________________________________________");
  printf("\n\t\t\t\t\t\t\t\t\t\t=================================");
  printf("\n\t\t\t\t\t\t\t\t\t\t2\t   [Aldi EO]\t        2");
  printf("\n\t\t\t\t\t\t\t\t\t\t=================================");
  printf("\n\n\t\t\tAtas dasar kerja, tanggung jawab, semangat dan ide-ide Terbaik kami yang inovatif dan kreatif, berbagai event yang kami kerjakan dapat dilaksanakan dengan baik. \n\t\t\t\t\tDan hal itu pula yang menjadi pemicu kami untuk bekerja tetap memberikan yang Terbaik, lebih baik dan lebih baik lagi.");
  printf("\n___________________________________________________________________________________________________________________________________________________________________________________________________________________");
  printf("\n\nPilih '4' Untuk Kembali Ke Menu Awal");
  printf("\n\n___________________________________________________________________________________________________________________________________________________________________________________________________________________");
	do{
		printf("\n\n \t \t \t \t \t \t \t \t \t \t \t Pilih EO : ");
		scanf("%s",num16);getchar();

		validation(num16,valid);
	system ("cls");
	//body();
	}while(valid==1);
	pilih16 = atoi(num16) ;
	switch (pilih16){
		case 1 :
			elloy();
      break;
		case 2 :
			aldi();
      break;
    case 3:
      main();
	}

}



int byjkt(){
  printf("\n\t\t\t\t\t\t\t\t\t=================================================");
  printf("\n\t\t\t\t\t\t\t\t\t=================================================");
  printf("\n\t\t\t\t\t\t\t\t\t=\t\tEO yang Tersedia\t        =");
  printf("\n\t\t\t\t\t\t\t\t\t=================================================");
  printf("\n\t\t\t\t\t\t\t\t\t=================================================");
  printf("\n");
  printf("\n___________________________________________________________________________________________________________________________________________________________________________________________________________________");
  printf("\n\t\t\t\t\t\t\t\t\t\t=================================");
  printf("\n\t\t\t\t\t\t\t\t\t\t1\t   [As'ad EO]\t        1");
  printf("\n\t\t\t\t\t\t\t\t\t\t=================================");
  printf("\n\n\tKami membuka berbagai layanan jasa Event Organizer baik itu event kecil maupun besar, kami siap melayani Anda. Percayakan kepada kami event anda mulai dari perancangan hingga event selesai.");
  printf("\n___________________________________________________________________________________________________________________________________________________________________________________________________________________");
  printf("\n\t\t\t\t\t\t\t\t\t\t=================================");
  printf("\n\t\t\t\t\t\t\t\t\t\t2\t   [Gibran EO]\t        2");
  printf("\n\t\t\t\t\t\t\t\t\t\t=================================");
  printf("\n\n\t\t\tAtas dasar kerja, tanggung jawab, semangat dan ide-ide Terbaik kami yang inovatif dan kreatif, berbagai event yang kami kerjakan dapat dilaksanakan dengan baik. \n\t\t\t\t\tDan hal itu pula yang menjadi pemicu kami untuk bekerja tetap memberikan yang Terbaik, lebih baik dan lebih baik lagi.");
  printf("\n___________________________________________________________________________________________________________________________________________________________________________________________________________________");
  printf("\n\t\t\t\t\t\t\t\t\t\t=================================");
  printf("\n\t\t\t\t\t\t\t\t\t\t3\t   [Alfian EO]\t        3");
  printf("\n\t\t\t\t\t\t\t\t\t\t=================================");
  printf("\n\n\t\t\t\tVisi Kami adalah terwujudnya EO yang dapat melayani masyarakat di bidang perancangan event. Kami bergerak dengan asas kejujuran dan kedisiplinan.");
  printf("\n___________________________________________________________________________________________________________________________________________________________________________________________________________________");
  printf("\n\nPilih '4' Untuk Kembali Ke Menu Awal");
  printf("\n\n___________________________________________________________________________________________________________________________________________________________________________________________________________________");
	do{
		printf("\n\n \t \t \t \t \t \t \t \t \t \t \t Pilih EO : ");
		scanf("%s",num17);getchar();

		validation(num17,valid);
	system ("cls");
	//body();
	}while(valid==1);
	pilih17 = atoi(num17) ;
	switch (pilih17){
		case 1 :
			asad();
      break;
		case 2 :
			gibran();
      break;
		case 3 :
			alfian();
      break;
    case 4:
      main();
	}

}

int bybgr(){
  printf("\n\t\t\t\t\t\t\t\t\t=================================================");
  printf("\n\t\t\t\t\t\t\t\t\t=================================================");
  printf("\n\t\t\t\t\t\t\t\t\t=\t\tEO yang Tersedia\t        =");
  printf("\n\t\t\t\t\t\t\t\t\t=================================================");
  printf("\n\t\t\t\t\t\t\t\t\t=================================================");
  printf("\n");
  printf("\n___________________________________________________________________________________________________________________________________________________________________________________________________________________");
  printf("\n\t\t\t\t\t\t\t\t\t\t=================================");
  printf("\n\t\t\t\t\t\t\t\t\t\t1\t   [Nathan EO]\t        1");
  printf("\n\t\t\t\t\t\t\t\t\t\t=================================");
  printf("\n\n\tKami membuka berbagai layanan jasa Event Organizer baik itu event kecil maupun besar, kami siap melayani Anda. Percayakan kepada kami event anda mulai dari perancangan hingga event selesai.");
  printf("\n___________________________________________________________________________________________________________________________________________________________________________________________________________________");
  printf("\n\t\t\t\t\t\t\t\t\t\t=================================");
  printf("\n\t\t\t\t\t\t\t\t\t\t2\t   [Syahmi EO]\t        2");
  printf("\n\t\t\t\t\t\t\t\t\t\t=================================");
  printf("\n\n\t\t\tAtas dasar kerja, tanggung jawab, semangat dan ide-ide Terbaik kami yang inovatif dan kreatif, berbagai event yang kami kerjakan dapat dilaksanakan dengan baik. \n\t\t\t\t\tDan hal itu pula yang menjadi pemicu kami untuk bekerja tetap memberikan yang Terbaik, lebih baik dan lebih baik lagi.");
  printf("\n___________________________________________________________________________________________________________________________________________________________________________________________________________________");
  printf("\n\t\t\t\t\t\t\t\t\t\t=================================");
  printf("\n\t\t\t\t\t\t\t\t\t\t3\t   [Hanvey EO]\t        3");
  printf("\n\t\t\t\t\t\t\t\t\t\t=================================");
  printf("\n\n\t\t\t\tVisi Kami adalah terwujudnya EO yang dapat melayani masyarakat di bidang perancangan event. Kami bergerak dengan asas kejujuran dan kedisiplinan.");
  printf("\n___________________________________________________________________________________________________________________________________________________________________________________________________________________");
  printf("\n\nPilih '4' Untuk Kembali Ke Menu Awal");
  printf("\n\n___________________________________________________________________________________________________________________________________________________________________________________________________________________");
	do{
		printf("\n\n \t \t \t \t \t \t \t \t \t \t \t Pilih EO : ");
		scanf("%s",num18);getchar();

		validation(num18,valid);
	system ("cls");
	//body();
	}while(valid==1);
	pilih18 = atoi(num18) ;
	switch (pilih18){
		case 1 :
			nathan();
      break;
		case 2 :
			syahmi();
      break;
		case 3 :
			hanvey();
      break;
    case 4:
      main();
	}

}

int bydpk(){
  printf("\n\t\t\t\t\t\t\t\t\t=================================================");
  printf("\n\t\t\t\t\t\t\t\t\t=================================================");
  printf("\n\t\t\t\t\t\t\t\t\t=\t\tEO yang Tersedia\t        =");
  printf("\n\t\t\t\t\t\t\t\t\t=================================================");
  printf("\n\t\t\t\t\t\t\t\t\t=================================================");
  printf("\n");
  printf("\n___________________________________________________________________________________________________________________________________________________________________________________________________________________");
  printf("\n\t\t\t\t\t\t\t\t\t\t=================================");
  printf("\n\t\t\t\t\t\t\t\t\t\t1\t   [Adit EO]\t        1");
  printf("\n\t\t\t\t\t\t\t\t\t\t=================================");
  printf("\n\n\tKami membuka berbagai layanan jasa Event Organizer baik itu event kecil maupun besar, kami siap melayani Anda. Percayakan kepada kami event anda mulai dari perancangan hingga event selesai.");
  printf("\n___________________________________________________________________________________________________________________________________________________________________________________________________________________");
  printf("\n\t\t\t\t\t\t\t\t\t\t=================================");
  printf("\n\t\t\t\t\t\t\t\t\t\t2\t   [Elyaser EO]\t        2");
  printf("\n\t\t\t\t\t\t\t\t\t\t=================================");
  printf("\n\n\t\t\tAtas dasar kerja, tanggung jawab, semangat dan ide-ide Terbaik kami yang inovatif dan kreatif, berbagai event yang kami kerjakan dapat dilaksanakan dengan baik. \n\t\t\t\t\tDan hal itu pula yang menjadi pemicu kami untuk bekerja tetap memberikan yang Terbaik, lebih baik dan lebih baik lagi.");
  printf("\n___________________________________________________________________________________________________________________________________________________________________________________________________________________");
  printf("\n\t\t\t\t\t\t\t\t\t\t=================================");
  printf("\n\t\t\t\t\t\t\t\t\t\t3\t   [Taka EO]\t        3");
  printf("\n\t\t\t\t\t\t\t\t\t\t=================================");
  printf("\n\n\t\t\t\tVisi Kami adalah terwujudnya EO yang dapat melayani masyarakat di bidang perancangan event. Kami bergerak dengan asas kejujuran dan kedisiplinan.");
  printf("\n___________________________________________________________________________________________________________________________________________________________________________________________________________________");
  printf("\n\nPilih '4' Untuk Kembali Ke Menu Awal");
  printf("\n\n___________________________________________________________________________________________________________________________________________________________________________________________________________________");
	do{
		printf("\n\n \t \t \t \t \t \t \t \t \t \t \t Pilih EO : ");
		scanf("%s",num19);getchar();

		validation(num19,valid);
	system ("cls");
	//body();
	}while(valid==1);
	pilih19 = atoi(num19) ;
	switch (pilih19){
		case 1 :
			adit();
      break;
		case 2 :
			elyaser();
      break;
		case 3 :
			taka();
      break;
    case 4:
      main();
	}

}

int bytgr(){
  printf("\n\t\t\t\t\t\t\t\t\t=================================================");
  printf("\n\t\t\t\t\t\t\t\t\t=================================================");
  printf("\n\t\t\t\t\t\t\t\t\t=\t\tEO yang Tersedia\t        =");
  printf("\n\t\t\t\t\t\t\t\t\t=================================================");
  printf("\n\t\t\t\t\t\t\t\t\t=================================================");
  printf("\n");
  printf("\n___________________________________________________________________________________________________________________________________________________________________________________________________________________");
  printf("\n\t\t\t\t\t\t\t\t\t\t=================================");
  printf("\n\t\t\t\t\t\t\t\t\t\t1\t   [Sadam EO]\t        1");
  printf("\n\t\t\t\t\t\t\t\t\t\t=================================");
  printf("\n\n\tKami membuka berbagai layanan jasa Event Organizer baik itu event kecil maupun besar, kami siap melayani Anda. Percayakan kepada kami event anda mulai dari perancangan hingga event selesai.");
  printf("\n___________________________________________________________________________________________________________________________________________________________________________________________________________________");
  printf("\n\t\t\t\t\t\t\t\t\t\t=================================");
  printf("\n\t\t\t\t\t\t\t\t\t\t2\t   [Hanif EO]\t        2");
  printf("\n\t\t\t\t\t\t\t\t\t\t=================================");
  printf("\n\n\t\t\tAtas dasar kerja, tanggung jawab, semangat dan ide-ide Terbaik kami yang inovatif dan kreatif, berbagai event yang kami kerjakan dapat dilaksanakan dengan baik. \n\t\t\t\t\tDan hal itu pula yang menjadi pemicu kami untuk bekerja tetap memberikan yang Terbaik, lebih baik dan lebih baik lagi.");
  printf("\n___________________________________________________________________________________________________________________________________________________________________________________________________________________");
  printf("\n\t\t\t\t\t\t\t\t\t\t=================================");
  printf("\n\t\t\t\t\t\t\t\t\t\t3\t   [Salman EO]\t        3");
  printf("\n\t\t\t\t\t\t\t\t\t\t=================================");
  printf("\n\n\t\t\t\tVisi Kami adalah terwujudnya EO yang dapat melayani masyarakat di bidang perancangan event. Kami bergerak dengan asas kejujuran dan kedisiplinan.");
  printf("\n___________________________________________________________________________________________________________________________________________________________________________________________________________________");
  printf("\n\nPilih '4' Untuk Kembali Ke Menu Awal");
  printf("\n\n___________________________________________________________________________________________________________________________________________________________________________________________________________________");
	do{
		printf("\n\n \t \t \t \t \t \t \t \t \t \t \t Pilih EO : ");
		scanf("%s",num20);getchar();

		validation(num20,valid);
	system ("cls");
	//body();
	}while(valid==1);
	pilih20 = atoi(num20) ;
	switch (pilih20){
		case 1 :
			sadam();
      break;
		case 2 :
			hanif();
      break;
		case 3 :
			salman();
      break;
    case 4:
      main();
	}

}

int bybks(){
  printf("\n\t\t\t\t\t\t\t\t\t=================================================");
  printf("\n\t\t\t\t\t\t\t\t\t=================================================");
  printf("\n\t\t\t\t\t\t\t\t\t=\t\tEO yang Tersedia\t        =");
  printf("\n\t\t\t\t\t\t\t\t\t=================================================");
  printf("\n\t\t\t\t\t\t\t\t\t=================================================");
  printf("\n");
  printf("\n___________________________________________________________________________________________________________________________________________________________________________________________________________________");
  printf("\n\t\t\t\t\t\t\t\t\t\t=================================");
  printf("\n\t\t\t\t\t\t\t\t\t\t1\t   [Peka EO]\t        1");
  printf("\n\t\t\t\t\t\t\t\t\t\t=================================");
  printf("\n\n\tKami membuka berbagai layanan jasa Event Organizer baik itu event kecil maupun besar, kami siap melayani Anda. Percayakan kepada kami event anda mulai dari perancangan hingga event selesai.");
  printf("\n___________________________________________________________________________________________________________________________________________________________________________________________________________________");
  printf("\n\t\t\t\t\t\t\t\t\t\t=================================");
  printf("\n\t\t\t\t\t\t\t\t\t\t2\t   [Ilsa EO]\t        2");
  printf("\n\t\t\t\t\t\t\t\t\t\t=================================");
  printf("\n\n\t\t\tAtas dasar kerja, tanggung jawab, semangat dan ide-ide Terbaik kami yang inovatif dan kreatif, berbagai event yang kami kerjakan dapat dilaksanakan dengan baik. \n\t\t\t\t\tDan hal itu pula yang menjadi pemicu kami untuk bekerja tetap memberikan yang Terbaik, lebih baik dan lebih baik lagi.");
  printf("\n___________________________________________________________________________________________________________________________________________________________________________________________________________________");
  printf("\n\t\t\t\t\t\t\t\t\t\t=================================");
  printf("\n\t\t\t\t\t\t\t\t\t\t3\t   [Aldi EO]\t        3");
  printf("\n\t\t\t\t\t\t\t\t\t\t=================================");
  printf("\n\n\t\t\t\tVisi Kami adalah terwujudnya EO yang dapat melayani masyarakat di bidang perancangan event. Kami bergerak dengan asas kejujuran dan kedisiplinan.");
  printf("\n___________________________________________________________________________________________________________________________________________________________________________________________________________________");
  printf("\n\nPilih '4' Untuk Kembali Ke Menu Awal");
  printf("\n\n___________________________________________________________________________________________________________________________________________________________________________________________________________________");
	do{
		printf("\n\n \t \t \t \t \t \t \t \t \t \t \t Pilih EO : ");
		scanf("%s",num21);getchar();

		validation(num21,valid);
	system ("cls");
	//body();
	}while(valid==1);
	pilih21 = atoi(num21) ;
	switch (pilih21){
		case 1 :
			peka();
      break;
		case 2 :
			ilsa();
      break;
		case 3 :
			aldi();
      break;
    case 4:
      main();
	}

}

int next(){
  printf("\n\n\tPilih '4' Untuk Kembali ke Menu Awal\n");
  printf("\n\n\tPilih '5' Untuk Keluar\n\n");
  printf("Pilihan anda : ");
  scanf("%d",&npilih);
  switch (npilih) {
    case 4:
     system("cls");
     main();

     case 5:
     system("cls");
     end();
   }
  }


int jenisevent(){
  printf("\n\t\t\t\t\t\t\t\t\t\t=================================================");
  printf("\n\t\t\t\t\t\t\t\t\t\t=\t\t   Jenis Event\t                =");
  printf("\n\t\t\t\t\t\t\t\t\t\t=================================================");
printf("\n\n\n___________________________________________________________________________________________________________________________________________________________________________________________________________________");
printf("\n\t\t\t\t\t\t\t\t\t\t\t       SSSS          SSSSS");
printf("\n\t\t\t\t\t\t\t\t\t\t\t   SSSSSSSS      SSSSSSSSS");
printf("\n\t\t\t\t\t\t\t\t\t\t\t  SSSSSSSSSS    SSSSSSSSSSS");
printf("\n\t\t\t\t\t\t\t\t\t\t\t SSSSSSSSSSSS  SSSSSSSSSSSSS");
printf("\n\t\t\t\t\t\t\t\t\t\t\t SSSSSSSSSSSSS SSSSSSSSSSSSS");
printf("\n\t\t\t\t\t\t\t\t\t\t\tSSSSSSSSSSSSSSSSSSSSSSSSSSSS");
printf("\n\t\t\t\t\t\t\t\t\t\t\tSSSSSSSSSSSSSSSSSSSSSSSSSSSSS");
printf("\n\t\t\t\t\t\t\t\t\t\t\tSSSSSSSSSSSSSSSSSSSSSSSSSSSSS SSSS");
printf("\n\t\t\t\t\t\t\t\t\t\t\tSSSSSSSSSSSSSSSSS     SSSSSSS      S");
printf("\n\t\t\t\t\t\t\t\t\t\t\tSSSSSSSSSSSSSSSS        SSSS        S");
printf("\n\t\t\t\t\t\t\t\t\t\t\t SSSSSSSSSSSSSS          SS          S");
printf("\n\t\t\t\t\t\t\t\t\t\t\t SSSSSSSSSSSSS           S           S");
printf("\n\t\t\t\t\t\t\t\t\t\t\t SSSSSSSSSSSSS                       S");
printf("\n\t\t===================\t\t\t\t\t\t\t  SSSSSSSSSSSS                       S");
printf("\n\t\t 1 : Weeding Party\t\t\t\t\t\t\t   SSSSSSSSSSS                       S");
printf("\n\t\t===================\t\t\t\t\t\t\t    SSSSSSSSSS                       S");
printf("\n\t\t\t\t\t\t\t\t\t\t\t     SSSSSSSSS                       S");
printf("\n\t\t\t\t\t\t\t\t\t\t\t      SSSS  SSS  SSSSS               S");
printf("\n\t\t\t\t\t\t\t\t\t\t\t       S      S S     S             S");
printf("\n\t\t\t\t\t\t\t\t\t\t\t      S       SS      S             S");
printf("\n\t\t\t\t\t\t\t\t\t\t\t      S                S           S");
printf("\n\t\t\t\t\t\t\t\t\t\t\t      S                S          S");
printf("\n\t\t\t\t\t\t\t\t\t\t\t       S               S         S");
printf("\n\t\t\t\t\t\t\t\t\t\t\t       S              S         S");
printf("\n\t\t\t\t\t\t\t\t\t\t\t        S             S        S");
printf("\n\t\t\t\t\t\t\t\t\t\t\t         S           SS      S");
printf("\n\t\t\t\t\t\t\t\t\t\t\t          S         S  S    S");
printf("\n\t\t\t\t\t\t\t\t\t\t\t           S       S     SS");
printf("\n\t\t\t\t\t\t\t\t\t\t\t            SS   SS");
printf("\n\t\t\t\t\t\t\t\t\t\t\t              SSS");
printf("\n\t\t\t\t\t\t\t\t\t\t\t               S");
printf("\n\n\n___________________________________________________________________________________________________________________________________________________________________________________________________________________");
printf("\n\t\t\t\t\t\t\t\t\t\t                   SSSSSS");
printf("\n\t\t\t\t\t\t\t\t\t\t             SSSS  SS  SS SSSSSS");
printf("\n\t\t\t\t\t\t\t\t\t\t     SS  SS SS  SS SSSSSS SS  SS SS    SS");
printf("\n\t\t\t\t\t\t\t\t\t\t     SS  SS SSSSSS SS     SSSSSS  SS  SS");
printf("\n\t\t\t\t\t\t\t\t\t\t     SSSSSS SS  SS SS     SS       SSSS");
printf("\n\t\t\t\t\t\t\t\t\t\t     SS  SS SS  SS        SS        SS");
printf("\n\t\t\t\t\t\t\t\t\t\t     SS  SS                         SS");
printf("\n\t\t\t\t\t\t\t\t\t\t");
printf("\n\t\t\t\t\t\t\t\t\t\t       SSSSSS   SS  SSSSS  SSSSSS SS  SS");
printf("\n\t\t\t\t\t\t\t\t\t\t       SS   SS  SS  SS  SS   SS   SS  SS");
printf("\n\t\t\t\t\t\t\t\t\t\t       SSSSSS   SS  SSSSS    SS   SSSSSS");
printf("\n\t\t\t\t\t\t\t\t\t\t       SS   SS  SS  SS SS    SS   SS  SS");
printf("\n\t\t\t\t\t\t\t\t\t\t       SSSSSS   SS  SS  SS   SS   SS  SS");
printf("\n\t\t\t\t\t\t\t\t\t\t");
printf("\n\t\t\t\t\t\t\t\t\t\t          SSSSSSS          SS    SS");
printf("\n\t\t\t\t\t\t\t\t\t\t           SS   SS   SSSSS  SS  SS");
printf("\n\t\t\t\t\t\t\t\t\t\t           SS   SS  SS   SS  SSSS");
printf("\n\t\t\t\t\t\t\t\t\t\t           SS   SS  SSSSSSS   SS");
printf("\n\t\t\t\t\t\t\t\t\t\t          SSSSSSS   SS   SS   SS");
printf("\n\t\t====================\t\t\t\t\t\t                    SS   SS");
printf("\n\t\t 2 : Birthday Party \t\t\t\t\t\t                00");
printf("\n\t\t====================\t\t\t\t\t\t              0000               00");
printf("\n\t\t\t\t\t\t\t\t\t\t              00S00      00     0000");
printf("\n\t\t\t\t\t\t\t\t\t\t             00SS0     0000    00SS0");
printf("\n\t\t\t\t\t\t\t\t\t\t             00S00    00SS0   00SS00");
printf("\n\t\t\t\t\t\t\t\t\t\t              00      0SS0     0SS0");
printf("\n\t\t\t\t\t\t\t\t\t\t             00000     00       00");
printf("\n\t\t\t\t\t\t\t\t\t\t             0  00    00000    00000");
printf("\n\t\t\t\t\t\t\t\t\t\t             0  00    0  00    0  00");
printf("\n\t\t\t\t\t\t\t\t\t\t             0  0     0  00    0  00");
printf("\n\t\t\t\t\t\t\t\t\t\t             0  0     0  00    0  0");
printf("\n\t\t\t\t\t\t\t\t\t\t             0  0     0  0     0  0");
printf("\n\t\t\t\t\t\t\t\t\t\t           000  0000000  0000000  0");
printf("\n\t\t\t\t\t\t\t\t\t\t        000000  0111110  0111110  0000");
printf("\n\t\t\t\t\t\t\t\t\t\t      00011110  0111110  0111110  0110000");
printf("\n\t\t\t\t\t\t\t\t\t\t     00111S110000111110  011111000011S11000");
printf("\n\t\t\t\t\t\t\t\t\t\t    00111SSSS11111S111000011S1111111SSSS1100");
printf("\n\t\t\t\t\t\t\t\t\t\t    0000111S11111SSSS111111SSSS1111111S11000");
printf("\n\t\t\t\t\t\t\t\t\t\t    0  000000001111S111111111S111111100000 0");
printf("\n\t\t\t\t\t\t\t\t\t\t   00      000000000000000000000000000    000");
printf("\n\t\t\t\t\t\t\t\t\t\t 0000     SS                        SS  001100");
printf("\n\t\t\t\t\t\t\t\t\t\t001100  SS SS   SS     SS    SS   SS SS 001110");
printf("\n\t\t\t\t\t\t\t\t\t\t0111000   SS   SS SS  SS SS SS SS   SS 0001110");
printf("\n\t\t\t\t\t\t\t\t\t\t011110000        SS     SS    SS     000011100");
printf("\n\t\t\t\t\t\t\t\t\t\t000011100000000000        00000000000000110000");
printf("\n\t\t\t\t\t\t\t\t\t\t  0000011111111000000000000000000011111111000");
printf("\n\t\t\t\t\t\t\t\t\t\t    0001111111111111111111111111111111111100");
printf("\n\t\t\t\t\t\t\t\t\t\t     000011100001111111100111111110000111100");
printf("\n\t\t\t\t\t\t\t\t\t\t      0000000000011100000001111000 0000000");
printf("\n\t\t\t\t\t\t\t\t\t\t               00000000   00000000");
printf("\n\n\n___________________________________________________________________________________________________________________________________________________________________________________________________________________");
printf("\n\t\t\t\t\t\t\t  \t\t                                O");
printf("\n\t\t\t\t\t\t\t  \t\t                                OO");
printf("\n\t\t\t\t\t\t\t  \t\t                                OOO");
printf("\n\t\t\t\t\t\t\t  \t\t                                OOOO");
printf("\n\t\t\t\t\t\t\t  \t\t                                0");
printf("\n\t\t\t\t\t\t\t  \t\t                                0");
printf("\n\t\t\t\t\t\t\t  \t\t                                0");
printf("\n\t\t\t\t\t\t\t  \t\t   O                            0                                 O");
printf("\n\t\t\t\t\t\t\t  \t\t   OO                            OOO                             OO");
printf("\n\t\t\t\t\t\t\t  \t\t   OOO                          OOOOO                           OOO");
printf("\n\t\t\t\t\t\t\t  \t\t   OOOO                        OOOOOOO                         OOOO");
printf("\n\t\t\t\t\t\t\t  \t\t   []                          OO|=|OO                          []");
printf("\n\t\t\t\t\t\t\t  \t\t   []                           O|=|O                           []");
printf("\n\t\t\t\t\t\t\t  \t\t   []                           O|=|O                           []");
printf("\n\t\t\t\t\t\t\t  \t\t  OOOO                          OOOO                            OOO");
printf("\n\t\t\t\t\t\t\t  \t\t OOOOO                         [][][]                          OOOOO");
printf("\n\t\t\t\t\t\t\t  \t\t OOOOOOO                       [][][]                         OOOOOOO");
printf("\n\t\t\t\t\t\t\t  \t\t OO|=|OO                       [][][]                         OO|=|OO");
printf("\n\t\t\t\t\t\t\t  \t\t O|=|O                         [][][]                          O|=|O");
printf("\n\t\t\t\t\t\t\t  \t\t O|=|O                         [][][]                          O|=|O");
printf("\n\t\t\t\t\t\t\t  \t\t OOOOO                         [][][]                          OOOOO");
printf("\n\t\t\t\t\t\t\t  \t\t [][][]                        [][][]                          [][][]");
printf("\n\t\t\t\t\t\t\t  \t\t [][][]                        [][][]                          [][][]");
printf("\n\t\t\t\t\t\t\t  \t\t [][][]                        [][][]                          [][][]");
printf("\n\t\t\t\t\t\t\t  \t\t [][][]                        [][][]                          [][][]");
printf("\n\t\t\t\t\t\t\t  \t\t [][][]                        [][][]                          [][][]");
printf("\n\t\t\t\t\t\t\t  \t\t OOOOO                         OOOOO                           OOOOO");
printf("\n\t\t\t\t\t\t\t  \t\t[]|=|[]                        O|=|O                           O|=|O");
printf("\n\t\t\t\t\t\t\t  \t\t[]|=|[]                        O|=|O                           O|=|O");
printf("\n\t\t\t\t\t\t\t  \t\t[]|=|[]                        O|=|O                           O|=|O");
printf("\n\t\t\t\t\t\t\t  \t\t OOOOO                         OOOOOO                          OOOOO");
printf("\n\t\t\t\t\t\t\t  \t\t [][]O                         [][][]                          [][][]");
printf("\n\t\t\t\t\t\t\t  \t\t [][]O                         [][][]                          [][][]");
printf("\n\t\t\t\t\t\t\t  \t\t [][]O                         [][][]                          [][][]");
printf("\n\t\t\t\t\t\t\t  \t\t [][]O [][][][][][][][][][][][][][][][][] [][][][][][][][][][] [][]O");
printf("\n\t\t\t\t\t\t\t  \t\t [][]O [][][][][][][][][][][][][][][][][] [][][][][][][][][][] [][]O");
printf("\n\t\t\t\t\t\t\t  \t\t [][]O [][][][][][][][][][][][][][][][][] [][][][][][][][][][] [][]O");
printf("\n\t\t\t\t\t\t\t  O[][]O [][][][][][][][][][][][][][][][][] [][][][][][][][][][][][][][][][][][][][][][][] O[][]O");
printf("\n\t\t\t\t\t\t\t  \t\t[]OOO[][]|=|[]|=|[]|=|[]|=|[][]OOO[][]|=|[]|=|[]|=|[]|=|[][]OOO[]");
printf("\n\t\t\t\t\t\t\t  \t\t[]|=|[][]|=|[]|=|[]|=|[]|=|[][]|=|[][]|=|[]|=|[]|=|[]|=|[][]|=|[]");
printf("\n\t\t\t\t\t\t\t  \t\t[]|=|[][]|=|[]|=|[]|=|[]|=|[][]|=|[][]|=|[]|=|[]|=|[]|=|[][]|=|[]");
printf("\n\t\t\t\t\t\t\t  \t\t[]|=|[][]|=|[]|=|[]|=|[]|=|[][]|=|[][]|=|[]|=|[]|=|[]|=|[][]|=|[]");
printf("\n\t\t===============\t\t\t\t  \t\t[]|=|[][]|=|[]|=|[]|=|[]|=|[][]|=|[][]|=|[]|=|[]|=|[]|=|[][]|=|[]");
printf("\n\t\t 3 : Year Book\t\t\t\t  [][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][]");
printf("\n\t\t===============\t\t\t\t  \t\t[]|=|[][]|=|[]|=|[]|=|[]|=|[][]|=|[][]|=|[]|=|[]|=|[]|=|[][]|=|[]");
printf("\n\t\t\t\t\t\t\t  \t\t[]|=|[][]|=|[]|=|[]|=|[]|=|[][]|=|[][]|=|[]|=|[]|=|[]|=|[][]|=|[]");
printf("\n\t\t\t\t\t\t\t  \t\t[]|=|[][]|=|[]|=|[]|=|[]|=|[][]|=|[][]|=|[]|=|[]|=|[]|=|[][]|=|[]");
printf("\n\t\t\t\t\t\t\t  \t\t[]|=|[][]|=|[]|=|[]|=|[]|=|[][]|=|[][]|=|[]|=|[]|=|[]|=|[][]|=|[]");
printf("\n\t\t\t\t\t\t\t  [][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][]");
printf("\n\t\t\t\t\t\t\t  [][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][]");
printf("\n\t\t\t\t\t\t\t  \t\t[][]|=|[][]|=||=|[]|=||=|[][]|=||=|[][]|=||=|[]|=||=|[][]|=|[][]");
printf("\n\t\t\t\t\t\t\t  \t\t[][]|=|[][]|=||=|[]|=||=|[][]|=||=|[][]|=||=|[]|=||=|[][]|=|[][]");
printf("\n\t\t\t\t\t\t\t  \t\t[][]|=|[][]|=||=|[]|=||=|[][]|=||=|[][]|=||=|[]|=||=|[][]|=|[][]");
printf("\n\t\t\t\t\t\t\t  \t\t[][]|=|[][]|=||=|[]|=||=|[][]|=||=|[][]|=||=|[]|=||=|[][]|=|[][]");
printf("\n\t\t\t\t\t\t\t  [][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][]");
printf("\n\t\t\t\t\t\t\t  [][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][]");
printf("\n\t\t\t\t\t\t\t  \t\t[][]|=|[][]|=||=|[]|=||=|[][]|=||=|[][]|=||=|[]|=||=|[][]|=|[][]");
printf("\n\t\t\t\t\t\t\t  \t\t[][]|=|[][]|=||=|[]|=||=|[][]|=||=|[][]|=||=|[]|=||=|[][]|=|[][]");
printf("\n\t\t\t\t\t\t\t  \t\t[][]|=|[][]|=||=|[]|=||=|[][]|=||=|[][]|=||=|[]|=||=|[][]|=|[][]");
printf("\n\t\t\t\t\t\t\t  \t\t[][]|=|[][]|=||=|[]|=||=|[][]|=||=|[][]|=||=|[]|=||=|[][]|=|[][]");
printf("\n\t\t\t\t\t\t\t  [][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][]");
printf("\n\t\t\t\t\t\t\t  [][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][]");
printf("\n\t\t\t\t\t\t\t  \t\t[][]|=|[][]|=||=|[]|=||=|[][]|=||=|[][]|=||=|[]|=||=|[][]|=|[][]");
printf("\n\t\t\t\t\t\t\t  \t\t[][]|=|[][]|=||=|[]|=||=|[][]|=||=|[][]|=||=|[]|=||=|[][]|=|[][]");
printf("\n\t\t\t\t\t\t\t  \t\t[][]|=|[][]|=||=|[]|=||=|[][]|=||=|[][]|=||=|[]|=||=|[][]|=|[][]");
printf("\n\t\t\t\t\t\t\t  \t\t[][]|=|[][]|=||=|[]|=||=|[][]|=||=|[][]|=||=|[]|=||=|[][]|=|[][]");
printf("\n\t\t\t\t\t\t\t  \t\t[][]|=|[][]|=||=|[]|=||=|[][]|=||=|[][]|=||=|[]|=||=|[][]|=|[][]");
printf("\n\t\t\t\t\t\t\t  \t\t[][]|=|[][]|=||=|[]|=||=|[][]|=||=|[][]|=||=|[]|=||=|[][]|=|[][]");
printf("\n\t\t\t\t\t\t\t \t\tO[][][][][][][]|=||=|[]|=||=|[][][][][][][][][]|=||=|[]|=||=|[][][][][][][]O");
printf("\n\t\t\t\t\t\t\tO [][][][][][][][] ||||[][][]O[][][]||||||[][][][][][][][][]||||||[][][]O[][][]||||||[][][][][][][][]O");
printf("\n\t\t\t\t\t\t\t||||||||||||O[][][][][][][][][][][][][][][][][][][]☼[][][][][][][][][][][][][][][][][][][]O||||||||||||");
printf("\n\t\t\t\t\t\t\t||||||||||O[][][][][][][][][][][][][][][][][][][][]☼[][][][][][][][][][][][][][][][][][][][]O||||||||||");
printf("\n\t\t\t\t\t\t\t||||||||O[][][][][][][][][][][][][][][][][][][][][]☼[][][][][][][][][][][][][][][][][][][][][]O||||||||");
printf("\n\t\t\t\t\t\t\t||||||O[][][][][][][][][][][][][][][][][][][][][][]☼[][][][][][][][][][][][][][][][][][][][][][]O||||||");
printf("\n\t\t\t\t\t\t\t||||O[][][][][][][][][][][][][][][][][][][][][][][]☼[][][][][][][][][][][][][][][][][][][][][][][]O||||");
printf("\n\n\n___________________________________________________________________________________________________________________________________________________________________________________________________________________");
printf("\n\n\t\t\t\t\t\t\t\t\t\t\tKetik '1' Untuk Weeding Party");
printf("\n\n\t\t\t\t\t\t\t\t\t\t\tKetik '2' Untuk Birthday Party");
printf("\n\n\t\t\t\t\t\t\t\t\t\t\tKetik '3' Untuk Year Book");
printf("\n\n\t\t\t\t\t\t\t\t\t\t\tKetik '4' Untuk Kembali Ke Menu Awal");

}

int help(){
  printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t[Bantuan]\n");
  printf("\n\t\t\t\t\t\t\t=========================================================================================================");
  printf("\n\t\t\t\t\t\t\t=\tSelamat datang di Aplikasi Online EO, Kami akan membantu anda dalam menggunakan Aplikasi ini\t=");
  printf("\n===================================================================================================================================================================================================================");
  printf("___________________________________________________________________________________________________________________________________________________________________________________________________________________");
  printf("\n\nLangkah 1 : Pilih '1' untuk melakukan pemesanan\n\n\t    Pilih '2' untuk melihat deskripsi Event Organizer yang tersedia\n\n\t    Pilih '3' untuk membaca panduan pemesanan\n\n\t    Pilih '4' apabila ingin Logout\n");
  printf("\n___________________________________________________________________________________________________________________________________________________________________________________________________________________");
  printf("\nLangkah 2 : Untuk melakukan pemesanan terlebih dahulu anda harus memilih daerah tinggal Anda sekarang. Kami akan menampilkan data data EO sesuai dengan daerah tinggal Anda\n");
  printf("\n___________________________________________________________________________________________________________________________________________________________________________________________________________________");
  printf("\nLangkah 3 : Pilih jenis event yang ingin Anda pesan\n");
  printf("\n___________________________________________________________________________________________________________________________________________________________________________________________________________________");
  printf("\nLangkah 4 : Selanjutnya akan ditampilkan EO yang available untuk Anda pesan\n");
  printf("\n___________________________________________________________________________________________________________________________________________________________________________________________________________________");
  printf("\nLangkah 5 : Muncul Deskripsi sesuai dengan EO yang anda pilih, apabila sudah cocok click 'book' untuk melakukan pemesanan\n");
  printf("\n___________________________________________________________________________________________________________________________________________________________________________________________________________________");
  printf("\nLangkah 6 : Anda diminta untuk melakukan pengisian data\n");
  printf("\n___________________________________________________________________________________________________________________________________________________________________________________________________________________");
  printf("\nLangkah 7 : Anda akan diminta untuk menunggu. Dalam waktu 1x24 jam Anda akan dihubungi oleh pihak EO untuk melakukan pembahasan lebih lanjut\n");
  printf("\n___________________________________________________________________________________________________________________________________________________________________________________________________________________");
}


int end(){
  printf("\n\t\t\t\t\t\t\t\t\t\t Terima Kasih Sudah Menggunakan Layanan Kami!");
  printf("\n___________________________________________________________________________________________________________________________________________________________________________________________________________________");
  printf("\n\t\t\t\t\t\t\t\t\t\t    |+++++++++++++++++++++++++++++++++++|");
  printf("\n\t\t\t\t\t\t\t\t\t\t    ||000000000000000000000000000000000||");
  printf("\n\t\t\t\t\t\t\t\t\t\t    ||000000000000000000000000000000000||");
  printf("\n\t\t\t\t\t\t\t\t\t\t    ||000000000000000000000000000000000||");
  printf("\n\t\t\t\t\t\t\t\t\t\t    ||000000000000000000000000000000000||");
  printf("\n\t\t\t\t\t\t\t\t\t\t    ||000000000000000000000000000000000||");
  printf("\n\t\t\t\t\t\t\t\t\t\t    ||000000000000000000000000000000000||");
  printf("\n\t\t\t\t\t\t\t\t\t\t    ||000000000000000000000000000000000||");
  printf("\n\t\t\t\t\t\t\t\t\t\t    ||000000|||||||00000000|||||||00000||");
  printf("\n\t\t\t\t\t\t\t\t\t\t    ||000000|||||||00000000|||||||00000||");
  printf("\n\t\t\t\t\t\t\t\t\t\t    ||000000|||||||00 00 00|||||||00000||");
  printf("\n\t\t\t\t\t\t\t\t\t\t    ||000000|||||||00 00 00|||||||00000||");
  printf("\n\t\t\t\t\t\t\t\t\t\t    ||000000|||||||00 00 00|||||||00000||");
  printf("\n\t\t\t\t\t\t\t\t\t\t    ||000000|||||||00 00 00|||||||00000||");
  printf("\n\t\t\t\t\t\t\t\t\t\t    ||000000|||||||00    00|||||||00000||");
  printf("\n\t\t\t\t\t\t\t\t\t\t    ||000000|||||||00 00 00|||||||00000||");
  printf("\n\t\t\t\t\t\t\t\t\t\t    ||000000|||||||00 00 00|||||||00000||");
  printf("\n\t\t\t\t\t\t\t\t\t\t    |||||||||||||||00 00 00||||||||||||||");
  printf("\n\t\t\t\t\t\t\t\t\t\t    |||||||||||||||00 00 00||||||||||||||");
  printf("\n\t\t\t\t\t\t\t\t\t\t    |||||||||||||||00000000||||||||||||||");
  printf("\n\t\t\t\t\t\t\t\t\t\t    |||||||||||||||00000000||||||||||||||");
  printf("\n\t\t\t\t\t\t\t\t\t\t    |||||||||||||||00    00||||||||||||||");
  printf("\n\t\t\t\t\t\t\t\t\t\t    |||||||||||||||00 00 00||||||||||||||");
  printf("\n\t\t\t\t\t\t\t\t\t\t    |||||||||||||||00 00 00||||||||||||||");
  printf("\n\t\t\t\t\t\t\t\t\t\t    |||||||||||||||00 00 00||||||||||||||");
  printf("\n\t\t\t\t\t\t\t\t\t\t    |||||||||||||||00    00||||||||||||||");
  printf("\n\t\t\t\t\t\t\t\t\t\t    |||||||||||||||00 00 00||||||||||||||");
  printf("\n\t\t\t\t\t\t\t\t\t\t    |||||||||||||||00 00 00||||||||||||||");
  printf("\n\t\t\t\t\t\t\t\t\t\t    |||||||||||||||00 00 00||||||||||||||");
  printf("\n\t\t\t\t\t\t\t\t\t\t    |||||||||||||||00 00 00||||||||||||||");
  printf("\n\t\t\t\t\t\t\t\t\t\t    |||||||||||||||00000000||||||||||||||");
  printf("\n\t\t\t\t\t\t\t\t\t\t    |||||||||||||||00000000||||||||||||||");
  printf("\n\t\t\t\t\t\t\t\t\t\t    |||||||||||||||00 00 00||||||||||||||");
  printf("\n\t\t\t\t\t\t\t\t\t\t    |||||||||||||||00 00 00||||||||||||||");
  printf("\n\t\t\t\t\t\t\t\t\t\t    |||||||||||||||00  0 00||||||||||||||");
  printf("\n\t\t\t\t\t\t\t\t\t\t    |||||||||||||||00  0 00||||||||||||||");
  printf("\n\t\t\t\t\t\t\t\t\t\t    |||||||||||||||00  0 00||||||||||||||");
  printf("\n\t\t\t\t\t\t\t\t\t\t    |||||||||||||||00 0  00||||||||||||||");
  printf("\n\t\t\t\t\t\t\t\t\t\t    |||||||||||||||00 0  00||||||||||||||");
  printf("\n\t\t\t\t\t\t\t\t\t\t    |||||||||||||||00 0  00||||||||||||||");
  printf("\n\t\t\t\t\t\t\t\t\t\t    |||||||||||||||00 00 00||||||||||||||");
  printf("\n\t\t\t\t\t\t\t\t\t\t    |||||||||||||||00 00 00||||||||||||||");
  printf("\n\t\t\t\t\t\t\t\t\t\t    |||||||||||||||00000000||||||||||||||");
  printf("\n\t\t\t\t\t\t\t\t\t\t    |||||||||||||||00000000||||||||||||||");
  printf("\n\t\t\t\t\t\t\t\t\t\t    |||||||||||||||00 00 00||||||||||||||");
  printf("\n\t\t\t\t\t\t\t\t\t\t    |||||||||||||||00 00 00||||||||||||||");
  printf("\n\t\t\t\t\t\t\t\t\t\t    |||||||||||||||00 00 00||||||||||||||");
  printf("\n\t\t\t\t\t\t\t\t\t\t    |||||||||||||||00 0 000||||||||||||||");
  printf("\n\t\t\t\t\t\t\t\t\t\t    |||||||||||||||00  0000||||||||||||||");
  printf("\n\t\t\t\t\t\t\t\t\t\t    |||||||||||||||00 0 000||||||||||||||");
  printf("\n\t\t\t\t\t\t\t\t\t\t    |||||||||||||||00 00 00||||||||||||||");
  printf("\n\t\t\t\t\t\t\t\t\t\t    |||||||||||||||00 00 00||||||||||||||");
  printf("\n\t\t\t\t\t\t\t\t\t\t    |||||||||||||||00 00 00||||||||||||||");
  printf("\n\t\t\t\t\t\t\t\t\t\t    |||||||||||||||00 00 00||||||||||||||");
  printf("\n\t\t\t\t\t\t\t\t\t\t    |||||||||||||||00 00 00||||||||||||||");
  printf("\n\t\t\t\t\t\t\t\t\t\t    |||||||||||||||00000000||||||||||||||");
  printf("\n\t\t\t\t\t\t\t\t\t\t    |||||||||||||||00000000||||||||||||||");
  printf("\n\t\t\t\t\t\t\t\t\t\t    |||||||||||||||00 00 00||||||||||||||");
  printf("\n\t\t\t\t\t\t\t\t\t\t    |||||||||||||||00 00 00||||||||||||||");
  printf("\n\t\t\t\t\t\t\t\t\t\t    |||||||||||||||00 00 00||||||||||||||");
  printf("\n\t\t\t\t\t\t\t\t\t\t    |||||||||||||||00 00 00||||||||||||||");
  printf("\n\t\t\t\t\t\t\t\t\t\t    ||||||||||||||000 00 000|||||||||||||");
  printf("\n\t\t\t\t\t\t\t\t\t\t    |||||||||||||0000 00 0000||||||||||||");
  printf("\n\t\t\t\t\t\t\t\t\t\t    |||||||||00000000 00 00000000||||||||");
  printf("\n\t\t\t\t\t\t\t\t\t\t    ||||||||000000000    000000000|||||||");
  printf("\n\t\t\t\t\t\t\t\t\t\t    |||||||000000000000000000000000||||||");
  printf("\n\t\t\t\t\t\t\t\t\t\t    |||||||||||||||||||||||||||||||||||||");
  printf("\n\t\t\t\t\t\t\t\t\t\t    +++++++++++++++++++++++++++++++++++++");
  printf("\n\n___________________________________________________________________________________________________________________________________________________________________________________________________________________");

  return 0;
  }

int asad(){
    printf("\n\n\t\t\t\t\t\t\t\t\t\t==========================================");
    printf("\n\t\t\t\t\t\t\t\t\t\t=\t\t [As'ad EO]\t         =");
    printf("\n\t\t\t\t\t\t\t\t\t\t==========================================");
    printf("\n\n\tKami membuka berbagai layanan jasa Event Organizer baik itu event kecil maupun besar, kami siap melayani Anda. Percayakan kepada kami event anda mulai dari perancangan hingga event selesai.");
    printf("\n\nWilayah : Jakarta");
    printf("\n\nNo. Telp : 081307283617");
    printf("\n\nEmail : asadmusyasir@gmail.com");
    printf("\n===================================================================================================================================================================================================================");
    int pilihan2=0;
    ratingasad(pilihan2);
    printf("\nRating : %.2f\n",rat);
    printf("===================================================================================================================================================================================================================");
    printf("\n");
    printf("\n\n\t\t\t\t\t\t\t\t\t\t==========================================");
    printf("\n\t\t\t\t\t\t\t\t\t\t=\t\t[1] Isi Rating\t\t =");
    printf("\n\t\t\t\t\t\t\t\t\t\t==========================================");
    printf("\n\n");
    printf("\n\n\t\t\t\t\t\t\t\t\t\t==========================================");
    printf("\n\t\t\t\t\t\t\t\t\t\t=\t\t[2] Booking\t\t =");
    printf("\n\t\t\t\t\t\t\t\t\t\t==========================================");
    printf("\n\n");
    printf("\n\n\t\t\t\t\t\t\t\t\t\t==========================================");
    printf("\n\t\t\t\t\t\t\t\t\t\t=\t\t[3] Menu Awal\t\t =");
    printf("\n\t\t\t\t\t\t\t\t\t\t==========================================");
    printf("\n\n");
    printf("\n\n\t\t\t\t\t\t\t\t\t\t==========================================");
    printf("\n\t\t\t\t\t\t\t\t\t\t=\t\t[4] Keluar\t\t =");
    printf("\n\t\t\t\t\t\t\t\t\t\t==========================================");
    printf("\n\n");
    printf("\n\n===================================================================================================================================================================================================================");
    scanf("%d", &pilihan2);
    switch(pilihan2) {
      case 1: {
        system ("cls");
        ratingasad(pilihan2);
        system ("cls");
        asad();
        break;  }
        case 2: {
            system("cls");
            booking();
            break; }
        case 3: {
        	 system("cls");
      	main();
          break;  }
        case 4: {
        	system("cls");
        	end();
          break;  }

}
}



int farid(){
    printf("\n\n\t\t\t\t\t\t\t\t\t\t==========================================");
    printf("\n\t\t\t\t\t\t\t\t\t\t=\t\t [Farid EO]\t         =");
    printf("\n\t\t\t\t\t\t\t\t\t\t==========================================");
    printf("\n\n\t     Kami adalah Event Organizer yang mengusung gerbrakan baru di dunia perancangan event. Kami dipenuhi orang orang muda yang mempunyai inovasi, kreatifitas, dan etos kerja yang baik.");
    printf("\n\nWilayah : Jakarta");
    printf("\n\nNo. Telp : 081386895977");
    printf("\n\nEmail : faridrahman@gmail.com");
    printf("\n===================================================================================================================================================================================================================");
    int pilihan3=0;
    ratingfarid(pilihan3);
    printf("\nRating : %.2f\n",rat);
    printf("===================================================================================================================================================================================================================");
    printf("\n");
    printf("\n\n\t\t\t\t\t\t\t\t\t\t==========================================");
    printf("\n\t\t\t\t\t\t\t\t\t\t=\t\t[1] Isi Rating\t\t =");
    printf("\n\t\t\t\t\t\t\t\t\t\t==========================================");
    printf("\n\n");
    printf("\n\n\t\t\t\t\t\t\t\t\t\t==========================================");
    printf("\n\t\t\t\t\t\t\t\t\t\t=\t\t[2] Booking\t\t =");
    printf("\n\t\t\t\t\t\t\t\t\t\t==========================================");
    printf("\n\n");
    printf("\n\n\t\t\t\t\t\t\t\t\t\t==========================================");
    printf("\n\t\t\t\t\t\t\t\t\t\t=\t\t[3] Menu Awal\t\t =");
    printf("\n\t\t\t\t\t\t\t\t\t\t==========================================");
    printf("\n\n");
    printf("\n\n\t\t\t\t\t\t\t\t\t\t==========================================");
    printf("\n\t\t\t\t\t\t\t\t\t\t=\t\t[4] Keluar\t\t =");
    printf("\n\t\t\t\t\t\t\t\t\t\t==========================================");
    printf("\n\n");
    printf("\n\n===================================================================================================================================================================================================================");
    scanf("%d", &pilihan3);
    switch(pilihan3) {
      case 1: {
        system ("cls");
      	ratingfarid(pilihan3);
        system ("cls");
      	farid();
        break;  }
        case 2: {
            system("cls");
            booking();
            break; }

        case 3: {
        	 system("cls");
      	main();
          break;  }

        case 4: {
        	system("cls");
        	end();
          break;  }
}
}


int gibran(){
  printf("\n\n\t\t\t\t\t\t\t\t\t\t==========================================");
  printf("\n\t\t\t\t\t\t\t\t\t\t=\t\t [Gibran EO]\t         =");
  printf("\n\t\t\t\t\t\t\t\t\t\t==========================================");
  printf("\n\n\t\t\t\t\t\tKamu bingung mau bikin acara besar? Dengan Harga yang cukup terjangkau kami siap melayani kapanpun dan dimanapun.");
  printf("\n\nWilayah : Jakarta");
  printf("\n\nNo. Telp : 081209099090");
  printf("\n\nEmail : gibranaufalzakwan@gmail.com");
  printf("\n===================================================================================================================================================================================================================");
    int pilihan4=0;
    ratinggibran(pilihan4);
    printf("\nRating  :%.2f\n",rat);
    printf("===================================================================================================================================================================================================================");
    printf("\n");
    printf("\n\n\t\t\t\t\t\t\t\t\t\t==========================================");
    printf("\n\t\t\t\t\t\t\t\t\t\t=\t\t[1] Isi Rating\t\t =");
    printf("\n\t\t\t\t\t\t\t\t\t\t==========================================");
    printf("\n\n");
    printf("\n\n\t\t\t\t\t\t\t\t\t\t==========================================");
    printf("\n\t\t\t\t\t\t\t\t\t\t=\t\t[2] Booking\t\t =");
    printf("\n\t\t\t\t\t\t\t\t\t\t==========================================");
    printf("\n\n");
    printf("\n\n\t\t\t\t\t\t\t\t\t\t==========================================");
    printf("\n\t\t\t\t\t\t\t\t\t\t=\t\t[3] Menu Awal\t\t =");
    printf("\n\t\t\t\t\t\t\t\t\t\t==========================================");
    printf("\n\n");
    printf("\n\n\t\t\t\t\t\t\t\t\t\t==========================================");
    printf("\n\t\t\t\t\t\t\t\t\t\t=\t\t[4] Keluar\t\t =");
    printf("\n\t\t\t\t\t\t\t\t\t\t==========================================");
    printf("\n\n");
    printf("\n\n===================================================================================================================================================================================================================");
    scanf("%d", &pilihan4);
    switch(pilihan4) {
      case 1: {
        system ("cls");
        ratinggibran(pilihan4);
        system ("cls");
        gibran();
        break;  }
        case 2: {
            system("cls");
            booking();
            break; }

        case 3: {
        	 system("cls");
      	main();
          break;  }

        case 4: {
        	system("cls");
        	end();
          break;  }
}
}



int arief(){
  printf("\n\n\t\t\t\t\t\t\t\t\t\t==========================================");
  printf("\n\t\t\t\t\t\t\t\t\t\t=\t\t [Arief EO]\t         =");
  printf("\n\t\t\t\t\t\t\t\t\t\t==========================================");
  printf("\n\n\tKami membuka berbagai layanan jasa Event Organizer baik itu event kecil maupun besar, kami siap melayani Anda. Percayakan kepada kami event anda mulai dari perancangan hingga event selesai.");
  printf("\n\nWilayah : Jakarta");
  printf("\n\nNo. Telp : 081287679809");
  printf("\n\nEmail : ariefsaferman@gmail.com");
  printf("\n===================================================================================================================================================================================================================");
    int pilihan=0;
    ratingarief(pilihan);
    printf("\nRating :%.2f\n",rat);
    printf("===================================================================================================================================================================================================================");
    printf("\n");
    printf("\n\n\t\t\t\t\t\t\t\t\t\t==========================================");
    printf("\n\t\t\t\t\t\t\t\t\t\t=\t\t[1] Isi Rating\t\t =");
    printf("\n\t\t\t\t\t\t\t\t\t\t==========================================");
    printf("\n\n");
    printf("\n\n\t\t\t\t\t\t\t\t\t\t==========================================");
    printf("\n\t\t\t\t\t\t\t\t\t\t=\t\t[2] Booking\t\t =");
    printf("\n\t\t\t\t\t\t\t\t\t\t==========================================");
    printf("\n\n");
    printf("\n\n\t\t\t\t\t\t\t\t\t\t==========================================");
    printf("\n\t\t\t\t\t\t\t\t\t\t=\t\t[3] Menu Awal\t\t =");
    printf("\n\t\t\t\t\t\t\t\t\t\t==========================================");
    printf("\n\n");
    printf("\n\n\t\t\t\t\t\t\t\t\t\t==========================================");
    printf("\n\t\t\t\t\t\t\t\t\t\t=\t\t[4] Keluar\t\t =");
    printf("\n\t\t\t\t\t\t\t\t\t\t==========================================");
    printf("\n\n");
    printf("\n\n===================================================================================================================================================================================================================");
    scanf("%d", &pilihan);
    switch(pilihan) {
      case 1: {
      	system ("cls");
      ratingarief(pilihan);
        system ("cls");
      	arief();
        break;  }
        case 2: {
            system("cls");
            booking();
            break; }
      case 3: {
      	 system("cls");
    	main();
        break;  }

      case 4: {
      	system("cls");
      	end();
        break;  }

}
}

int alfian(){
  printf("\n\n\t\t\t\t\t\t\t\t\t\t==========================================");
  printf("\n\t\t\t\t\t\t\t\t\t\t=\t\t [Alfian EO]\t         =");
  printf("\n\t\t\t\t\t\t\t\t\t\t==========================================");
  printf("\n\n\t\t\tAtas dasar kerja, tanggung jawab, semangat dan ide-ide Terbaik kami yang inovatif dan kreatif, berbagai event yang kami kerjakan dapat dilaksanakan dengan baik. \n\t\t\t\t\tDan hal itu pula yang menjadi pemicu kami untuk bekerja tetap memberikan yang Terbaik, lebih baik dan lebih baik lagi.");
  printf("\n\nWilayah : Jakarta");
  printf("\n\nNo. Telp : 081236780347");
  printf("\n\nEmail : alfianbadrulisnan@gmail.com");
  printf("\n===================================================================================================================================================================================================================");
    int pilihan1=0;
    ratingalfian(pilihan1);
    printf("\nRating :%.2f\n",rat1);
    printf("===================================================================================================================================================================================================================");
    printf("\n");
    printf("\n\n\t\t\t\t\t\t\t\t\t\t==========================================");
    printf("\n\t\t\t\t\t\t\t\t\t\t=\t\t[1] Isi Rating\t\t =");
    printf("\n\t\t\t\t\t\t\t\t\t\t==========================================");
    printf("\n\n");
    printf("\n\n\t\t\t\t\t\t\t\t\t\t==========================================");
    printf("\n\t\t\t\t\t\t\t\t\t\t=\t\t[2] Booking\t\t =");
    printf("\n\t\t\t\t\t\t\t\t\t\t==========================================");
    printf("\n\n");
    printf("\n\n\t\t\t\t\t\t\t\t\t\t==========================================");
    printf("\n\t\t\t\t\t\t\t\t\t\t=\t\t[3] Menu Awal\t\t =");
    printf("\n\t\t\t\t\t\t\t\t\t\t==========================================");
    printf("\n\n");
    printf("\n\n\t\t\t\t\t\t\t\t\t\t==========================================");
    printf("\n\t\t\t\t\t\t\t\t\t\t=\t\t[4] Keluar\t\t =");
    printf("\n\t\t\t\t\t\t\t\t\t\t==========================================");
    printf("\n\n");
    printf("\n\n===================================================================================================================================================================================================================");
    scanf("%d", &pilihan1);
    switch(pilihan1) {
      case 1: {
        system ("cls");
      	ratingalfian(pilihan1);
        system ("cls");
      	alfian();
        break;  }
        case 2: {
            system("cls");
            booking();
            break; }
        case 3: {
           system("cls");
        main();
          break;  }

        case 4: {
          system("cls");
          end();
          break;  }
}
}


int nathan(){
  printf("\n\n\t\t\t\t\t\t\t\t\t\t==========================================");
  printf("\n\t\t\t\t\t\t\t\t\t\t=\t\t [Nathan EO]\t         =");
  printf("\n\t\t\t\t\t\t\t\t\t\t==========================================");
  printf("\n\n\t\t\t\tVisi Kami adalah terwujudnya EO yang dapat melayani masyarakat di bidang perancangan event. Kami bergerak dengan asas kejujuran dan kedisiplinan.");
  printf("\n\nWilayah : Bogor");
  printf("\n\nNo. Telp : 081283097788");
  printf("\n\nEmail : nathanielfaustine@gmail.com");
  printf("\n===================================================================================================================================================================================================================");
  int pilihan5=0;
  ratingnathan(pilihan5);
  printf("\nRating : %.2f\n",rat);
  printf("===================================================================================================================================================================================================================");
  printf("\n");
  printf("\n\n\t\t\t\t\t\t\t\t\t\t==========================================");
  printf("\n\t\t\t\t\t\t\t\t\t\t=\t\t[1] Isi Rating\t\t =");
  printf("\n\t\t\t\t\t\t\t\t\t\t==========================================");
  printf("\n\n");
  printf("\n\n\t\t\t\t\t\t\t\t\t\t==========================================");
  printf("\n\t\t\t\t\t\t\t\t\t\t=\t\t[2] Booking\t\t =");
  printf("\n\t\t\t\t\t\t\t\t\t\t==========================================");
  printf("\n\n");
  printf("\n\n\t\t\t\t\t\t\t\t\t\t==========================================");
  printf("\n\t\t\t\t\t\t\t\t\t\t=\t\t[3] Menu Awal\t\t =");
  printf("\n\t\t\t\t\t\t\t\t\t\t==========================================");
  printf("\n\n");
  printf("\n\n\t\t\t\t\t\t\t\t\t\t==========================================");
  printf("\n\t\t\t\t\t\t\t\t\t\t=\t\t[4] Keluar\t\t =");
  printf("\n\t\t\t\t\t\t\t\t\t\t==========================================");
  printf("\n\n");
  printf("\n\n===================================================================================================================================================================================================================");
  scanf("%d", &pilihan5);
  switch(pilihan5) {
    case 1: {
      system ("cls");
      ratingnathan(pilihan5);
      system ("cls");
      nathan();
      break;  }
      case 2: {
          system("cls");
          booking();
          break; }
      case 3: {
         system("cls");
      main();
        break;  }
      case 4: {
        system("cls");
        end();
        break;  }
}
}

int arva(){
  printf("\n\n\t\t\t\t\t\t\t\t\t\t==========================================");
  printf("\n\t\t\t\t\t\t\t\t\t\t=\t\t [Arva EO]\t         =");
  printf("\n\t\t\t\t\t\t\t\t\t\t==========================================");
  printf("\n\n\tKami membuka berbagai layanan jasa Event Organizer baik itu event kecil maupun besar, kami siap melayani Anda. Percayakan kepada kami event anda mulai dari perancangan hingga event selesai.");
  printf("\n\nWilayah : Bogor");
  printf("\n\nNo. Telp : 081366778899");
  printf("\n\nEmail : arvalinoarva@gmail.com");
  printf("\n===================================================================================================================================================================================================================");
  int pilihan6=0;
  ratingarva(pilihan6);
  printf("\nRating : %.2f\n",rat);
  printf("===================================================================================================================================================================================================================");
  printf("\n");
  printf("\n\n\t\t\t\t\t\t\t\t\t\t==========================================");
  printf("\n\t\t\t\t\t\t\t\t\t\t=\t\t[1] Isi Rating\t\t =");
  printf("\n\t\t\t\t\t\t\t\t\t\t==========================================");
  printf("\n\n");
  printf("\n\n\t\t\t\t\t\t\t\t\t\t==========================================");
  printf("\n\t\t\t\t\t\t\t\t\t\t=\t\t[2] Booking\t\t =");
  printf("\n\t\t\t\t\t\t\t\t\t\t==========================================");
  printf("\n\n");
  printf("\n\n\t\t\t\t\t\t\t\t\t\t==========================================");
  printf("\n\t\t\t\t\t\t\t\t\t\t=\t\t[3] Menu Awal\t\t =");
  printf("\n\t\t\t\t\t\t\t\t\t\t==========================================");
  printf("\n\n");
  printf("\n\n\t\t\t\t\t\t\t\t\t\t==========================================");
  printf("\n\t\t\t\t\t\t\t\t\t\t=\t\t[4] Keluar\t\t =");
  printf("\n\t\t\t\t\t\t\t\t\t\t==========================================");
  printf("\n\n");
  printf("\n\n===================================================================================================================================================================================================================");
  scanf("%d", &pilihan6);
  switch(pilihan6) {
    case 1: {
      system ("cls");
      ratingarva(pilihan6);
      system ("cls");
      arva();
      break;  }
      case 2: {
          system("cls");
          booking();
          break; }
      case 3: {
         system("cls");
      main();
        break;  }

      case 4: {
        system("cls");
        end();
        break;  }
}
}

int syahmi(){
  printf("\n\n\t\t\t\t\t\t\t\t\t\t==========================================");
  printf("\n\t\t\t\t\t\t\t\t\t\t=\t\t [Syahmi EO]\t         =");
  printf("\n\t\t\t\t\t\t\t\t\t\t==========================================");
  printf("\n\n\t\t\tAtas dasar kerja, tanggung jawab, semangat dan ide-ide Terbaik kami yang inovatif dan kreatif, berbagai event yang kami kerjakan dapat dilaksanakan dengan baik. \n\t\t\t\t\tDan hal itu pula yang menjadi pemicu kami untuk bekerja tetap memberikan yang Terbaik, lebih baik dan lebih baik lagi.");
  printf("\n\nWilayah : Bogor");
  printf("\n\nNo. Telp : 081344556677");
  printf("\n\nEmail : syahmimujtahid");
  printf("\n===================================================================================================================================================================================================================");
  int pilihan7=0;
  ratingsyahmi(pilihan7);
  printf("\nRating : %.2f\n",rat);
  printf("===================================================================================================================================================================================================================");
  printf("\n");
  printf("\n");
  printf("\n\n\t\t\t\t\t\t\t\t\t\t==========================================");
  printf("\n\t\t\t\t\t\t\t\t\t\t=\t\t[1] Isi Rating\t\t =");
  printf("\n\t\t\t\t\t\t\t\t\t\t==========================================");
  printf("\n\n");
  printf("\n\n\t\t\t\t\t\t\t\t\t\t==========================================");
  printf("\n\t\t\t\t\t\t\t\t\t\t=\t\t[2] Booking\t\t =");
  printf("\n\t\t\t\t\t\t\t\t\t\t==========================================");
  printf("\n\n");
  printf("\n\n\t\t\t\t\t\t\t\t\t\t==========================================");
  printf("\n\t\t\t\t\t\t\t\t\t\t=\t\t[3] Menu Awal\t\t =");
  printf("\n\t\t\t\t\t\t\t\t\t\t==========================================");
  printf("\n\n");
  printf("\n\n\t\t\t\t\t\t\t\t\t\t==========================================");
  printf("\n\t\t\t\t\t\t\t\t\t\t=\t\t[4] Keluar\t\t =");
  printf("\n\t\t\t\t\t\t\t\t\t\t==========================================");
  printf("\n\n");
  printf("\n\n===================================================================================================================================================================================================================");
  scanf("%d", &pilihan7);
  switch(pilihan7) {
    case 1: {
      system ("cls");
      ratingsyahmi(pilihan7);
      system ("cls");
      syahmi();
      break;  }
      case 2: {
          system("cls");
          booking();
          break; }
      case 3: {
         system("cls");
      main();
        break;  }

      case 4: {
        system("cls");
        end();
        break;  }
}
}

int ramadhan(){
  printf("\n\n\t\t\t\t\t\t\t\t\t\t==========================================");
  printf("\n\t\t\t\t\t\t\t\t\t\t=\t\t [Ramadhan EO]\t         =");
  printf("\n\t\t\t\t\t\t\t\t\t\t==========================================");
  printf("\n\n\t\t\t\tVisi Kami adalah terwujudnya EO yang dapat melayani masyarakat di bidang perancangan event. Kami bergerak dengan asas kejujuran dan kedisiplinan.");
  printf("\n\nWilayah : Bogor");
  printf("\n\nNo. Telp 081255443322: ");
  printf("\n\nEmail : ramadhankalihs@gmail.com");
  printf("\n===================================================================================================================================================================================================================");
  int pilihan8=0;
  ratingramadhan(pilihan8);
  printf("\nRating : %.2f\n",rat);
  printf("===================================================================================================================================================================================================================");
  printf("\n");
  printf("\n\n\t\t\t\t\t\t\t\t\t\t==========================================");
  printf("\n\t\t\t\t\t\t\t\t\t\t=\t\t[1] Isi Rating\t\t =");
  printf("\n\t\t\t\t\t\t\t\t\t\t==========================================");
  printf("\n\n");
  printf("\n\n\t\t\t\t\t\t\t\t\t\t==========================================");
  printf("\n\t\t\t\t\t\t\t\t\t\t=\t\t[2] Booking\t\t =");
  printf("\n\t\t\t\t\t\t\t\t\t\t==========================================");
  printf("\n\n");
  printf("\n\n\t\t\t\t\t\t\t\t\t\t==========================================");
  printf("\n\t\t\t\t\t\t\t\t\t\t=\t\t[3] Menu Awal\t\t =");
  printf("\n\t\t\t\t\t\t\t\t\t\t==========================================");
  printf("\n\n");
  printf("\n\n\t\t\t\t\t\t\t\t\t\t==========================================");
  printf("\n\t\t\t\t\t\t\t\t\t\t=\t\t[4] Keluar\t\t =");
  printf("\n\t\t\t\t\t\t\t\t\t\t==========================================");
  printf("\n\n");
  printf("\n\n===================================================================================================================================================================================================================");
  scanf("%d", &pilihan8);
  switch(pilihan8) {
    case 1: {
      system ("cls");
      ratingramadhan(pilihan8);
      system ("cls");
      ramadhan();
      break;  }
      case 2: {
          system("cls");
          booking();
          break; }
      case 3: {
         system("cls");
      main();
        break;  }

      case 4: {
        system("cls");
        end();
        break;  }
}
}

int hanvey(){
  printf("\n\n\t\t\t\t\t\t\t\t\t\t==========================================");
  printf("\n\t\t\t\t\t\t\t\t\t\t=\t\t [Hanvey EO]\t         =");
  printf("\n\t\t\t\t\t\t\t\t\t\t==========================================");
  printf("\n\n\t\t\t\t\t\tKamu bingung mau bikin acara besar? Dengan Harga yang cukup terjangkau kami siap melayani kapanpun dan dimanapun.");
  printf("\n\nWilayah : Bogor");
  printf("\n\nNo. Telp : 081383485700");
  printf("\n\nEmail : hanveyxavero@gmail.com");
  printf("\n===================================================================================================================================================================================================================");
  int pilihan9=0;
  ratinghanvey(pilihan9);
  printf("\nRating : %.2f\n",rat);
  printf("===================================================================================================================================================================================================================");
  printf("\n");
  printf("\n\n\t\t\t\t\t\t\t\t\t\t==========================================");
  printf("\n\t\t\t\t\t\t\t\t\t\t=\t\t[1] Isi Rating\t\t =");
  printf("\n\t\t\t\t\t\t\t\t\t\t==========================================");
  printf("\n\n");
  printf("\n\n\t\t\t\t\t\t\t\t\t\t==========================================");
  printf("\n\t\t\t\t\t\t\t\t\t\t=\t\t[2] Booking\t\t =");
  printf("\n\t\t\t\t\t\t\t\t\t\t==========================================");
  printf("\n\n");
  printf("\n\n\t\t\t\t\t\t\t\t\t\t==========================================");
  printf("\n\t\t\t\t\t\t\t\t\t\t=\t\t[3] Menu Awal\t\t =");
  printf("\n\t\t\t\t\t\t\t\t\t\t==========================================");
  printf("\n\n");
  printf("\n\n\t\t\t\t\t\t\t\t\t\t==========================================");
  printf("\n\t\t\t\t\t\t\t\t\t\t=\t\t[4] Keluar\t\t =");
  printf("\n\t\t\t\t\t\t\t\t\t\t==========================================");
  printf("\n\n");
  printf("\n\n===================================================================================================================================================================================================================");
  scanf("%d", &pilihan9);
  switch(pilihan9) {
    case 1: {
      system ("cls");
      ratinghanvey(pilihan9);
      system ("cls");
      hanvey();
      break;  }
      case 2: {
          system("cls");
          booking();
          break; }
      case 3: {
         system("cls");
      main();
        break;  }

      case 4: {
        system("cls");
        end();
        break;  }
}
}

int adit(){
  printf("\n\n\t\t\t\t\t\t\t\t\t\t==========================================");
  printf("\n\t\t\t\t\t\t\t\t\t\t=\t\t [Adit EO]\t         =");
  printf("\n\t\t\t\t\t\t\t\t\t\t==========================================");
  printf("\n\n\t     Kami adalah Event Organizer yang mengusung gerbrakan baru di dunia perancangan event. Kami dipenuhi orang orang muda yang mempunyai inovasi, kreatifitas, dan etos kerja yang baik.");
  printf("\n\nWilayah : Depok");
  printf("\n\nNo. Telp : 081200889780");
  printf("\n\nEmail : adityarizkidp@gmail.com");
  printf("\n===================================================================================================================================================================================================================");
  int pilihan10=0;
  ratingadit(pilihan10);
  printf("\nRating : %.2f\n",rat);
  printf("===================================================================================================================================================================================================================");
  printf("\n");
  printf("\n\n\t\t\t\t\t\t\t\t\t\t==========================================");
  printf("\n\t\t\t\t\t\t\t\t\t\t=\t\t[1] Isi Rating\t\t =");
  printf("\n\t\t\t\t\t\t\t\t\t\t==========================================");
  printf("\n\n");
  printf("\n\n\t\t\t\t\t\t\t\t\t\t==========================================");
  printf("\n\t\t\t\t\t\t\t\t\t\t=\t\t[2] Booking\t\t =");
  printf("\n\t\t\t\t\t\t\t\t\t\t==========================================");
  printf("\n\n");
  printf("\n\n\t\t\t\t\t\t\t\t\t\t==========================================");
  printf("\n\t\t\t\t\t\t\t\t\t\t=\t\t[3] Menu Awal\t\t =");
  printf("\n\t\t\t\t\t\t\t\t\t\t==========================================");
  printf("\n\n");
  printf("\n\n\t\t\t\t\t\t\t\t\t\t==========================================");
  printf("\n\t\t\t\t\t\t\t\t\t\t=\t\t[4] Keluar\t\t =");
  printf("\n\t\t\t\t\t\t\t\t\t\t==========================================");
  printf("\n\n");
  printf("\n\n===================================================================================================================================================================================================================");
  scanf("%d", &pilihan10);
  switch(pilihan10) {
    case 1: {
      system ("cls");
      ratingadit(pilihan10);
      system ("cls");
      adit();
      break;  }
      case 2: {
          system("cls");
          booking();
          break; }
      case 3: {
         system("cls");
      main();
        break;  }

      case 4: {
        system("cls");
        end();
        break;  }
}
}

int aldo(){
  printf("\n\n\t\t\t\t\t\t\t\t\t\t==========================================");
  printf("\n\t\t\t\t\t\t\t\t\t\t=\t\t [Aldo EO]\t         =");
  printf("\n\t\t\t\t\t\t\t\t\t\t==========================================");
  printf("\n\n\tKami membuka berbagai layanan jasa Event Organizer baik itu event kecil maupun besar, kami siap melayani Anda. Percayakan kepada kami event anda mulai dari perancangan hingga event selesai.");
  printf("\n\nWilayah : Depok");
  printf("\n\nNo. Telp : 081391283511");
  printf("\n\nEmail : alfialdolio@gmail.com");
  printf("\n===================================================================================================================================================================================================================");
  int pilihan11=0;
  ratingaldo(pilihan11);
  printf("\nRating : %.2f\n",rat);
  printf("===================================================================================================================================================================================================================");
  printf("\n");
  printf("\n\n\t\t\t\t\t\t\t\t\t\t==========================================");
  printf("\n\t\t\t\t\t\t\t\t\t\t=\t\t[1] Isi Rating\t\t =");
  printf("\n\t\t\t\t\t\t\t\t\t\t==========================================");
  printf("\n\n");
  printf("\n\n\t\t\t\t\t\t\t\t\t\t==========================================");
  printf("\n\t\t\t\t\t\t\t\t\t\t=\t\t[2] Booking\t\t =");
  printf("\n\t\t\t\t\t\t\t\t\t\t==========================================");
  printf("\n\n");
  printf("\n\n\t\t\t\t\t\t\t\t\t\t==========================================");
  printf("\n\t\t\t\t\t\t\t\t\t\t=\t\t[3] Menu Awal\t\t =");
  printf("\n\t\t\t\t\t\t\t\t\t\t==========================================");
  printf("\n\n");
  printf("\n\n\t\t\t\t\t\t\t\t\t\t==========================================");
  printf("\n\t\t\t\t\t\t\t\t\t\t=\t\t[4] Keluar\t\t =");
  printf("\n\t\t\t\t\t\t\t\t\t\t==========================================");
  printf("\n\n");
  printf("\n\n===================================================================================================================================================================================================================");
  scanf("%d", &pilihan11);
  switch(pilihan11) {
    case 1: {
      system ("cls");
      ratingaldo(pilihan11);
      system ("cls");
      aldo();
      break;  }
      case 2: {
          system("cls");
          booking();
          break; }
      case 3: {
         system("cls");
      main();
        break;  }

      case 4: {
        system("cls");
        end();
        break;  }
}
}

int elyaser(){
  printf("\n\n\t\t\t\t\t\t\t\t\t\t==========================================");
  printf("\n\t\t\t\t\t\t\t\t\t\t=\t\t [Elyaser EO]\t         =");
  printf("\n\t\t\t\t\t\t\t\t\t\t==========================================");
  printf("\n\n\t\t\tAtas dasar kerja, tanggung jawab, semangat dan ide-ide Terbaik kami yang inovatif dan kreatif, berbagai event yang kami kerjakan dapat dilaksanakan dengan baik. \n\t\t\t\t\tDan hal itu pula yang menjadi pemicu kami untuk bekerja tetap memberikan yang Terbaik, lebih baik dan lebih baik lagi.");
  printf("\n\nWilayah : Depok & Tanggerang");
  printf("\n\nNo. Telp : 081266661250");
  printf("\n\nEmail : elyaserbenguno@gmail.com");
  printf("\n===================================================================================================================================================================================================================");
  int pilihan12=0;
  ratingelyaser(pilihan12);
  printf("\nRating : %.2f\n",rat);
  printf("===================================================================================================================================================================================================================");
  printf("\n");
  printf("\n\n\t\t\t\t\t\t\t\t\t\t==========================================");
  printf("\n\t\t\t\t\t\t\t\t\t\t=\t\t[1] Isi Rating\t\t =");
  printf("\n\t\t\t\t\t\t\t\t\t\t==========================================");
  printf("\n\n");
  printf("\n\n\t\t\t\t\t\t\t\t\t\t==========================================");
  printf("\n\t\t\t\t\t\t\t\t\t\t=\t\t[2] Booking\t\t =");
  printf("\n\t\t\t\t\t\t\t\t\t\t==========================================");
  printf("\n\n");
  printf("\n\n\t\t\t\t\t\t\t\t\t\t==========================================");
  printf("\n\t\t\t\t\t\t\t\t\t\t=\t\t[3] Menu Awal\t\t =");
  printf("\n\t\t\t\t\t\t\t\t\t\t==========================================");
  printf("\n\n");
  printf("\n\n\t\t\t\t\t\t\t\t\t\t==========================================");
  printf("\n\t\t\t\t\t\t\t\t\t\t=\t\t[4] Keluar\t\t =");
  printf("\n\t\t\t\t\t\t\t\t\t\t==========================================");
  printf("\n\n");
  printf("\n\n===================================================================================================================================================================================================================");
  scanf("%d", &pilihan12);
  switch(pilihan12) {
    case 1: {
      system ("cls");
      ratingelyaser(pilihan12);
      system ("cls");
      elyaser();
      break;  }
      case 2: {
          system("cls");
          booking();
          break; }
      case 3: {
         system("cls");
      main();
        break;  }

      case 4: {
        system("cls");
        end();
        break;  }
}
}

int fatah(){
  printf("\n\n\t\t\t\t\t\t\t\t\t\t==========================================");
  printf("\n\t\t\t\t\t\t\t\t\t\t=\t\t [Fatah EO]\t         =");
  printf("\n\t\t\t\t\t\t\t\t\t\t==========================================");
  printf("\n\n\t\t\t\tVisi Kami adalah terwujudnya EO yang dapat melayani masyarakat di bidang perancangan event. Kami bergerak dengan asas kejujuran dan kedisiplinan.");
  printf("\n\nWilayah : Depok");
  printf("\n\nNo. Telp : 081377819812");
  printf("\n\nEmail : abdulfatahismail@gmail.com");
  printf("\n===================================================================================================================================================================================================================");
  int pilihan13=0;
  ratingfatah(pilihan13);
  printf("\nRating : %.2f\n",rat);
  printf("===================================================================================================================================================================================================================");
  printf("\n");
  printf("\n\n\t\t\t\t\t\t\t\t\t\t==========================================");
  printf("\n\t\t\t\t\t\t\t\t\t\t=\t\t[1] Isi Rating\t\t =");
  printf("\n\t\t\t\t\t\t\t\t\t\t==========================================");
  printf("\n\n");
  printf("\n\n\t\t\t\t\t\t\t\t\t\t==========================================");
  printf("\n\t\t\t\t\t\t\t\t\t\t=\t\t[2] Booking\t\t =");
  printf("\n\t\t\t\t\t\t\t\t\t\t==========================================");
  printf("\n\n");
  printf("\n\n\t\t\t\t\t\t\t\t\t\t==========================================");
  printf("\n\t\t\t\t\t\t\t\t\t\t=\t\t[3] Menu Awal\t\t =");
  printf("\n\t\t\t\t\t\t\t\t\t\t==========================================");
  printf("\n\n");
  printf("\n\n\t\t\t\t\t\t\t\t\t\t==========================================");
  printf("\n\t\t\t\t\t\t\t\t\t\t=\t\t[4] Keluar\t\t =");
  printf("\n\t\t\t\t\t\t\t\t\t\t==========================================");
  printf("\n\n");
  printf("\n\n===================================================================================================================================================================================================================");
  scanf("%d", &pilihan13);
  switch(pilihan13) {
    case 1: {
      system ("cls");
      ratingfatah(pilihan13);
      system ("cls");
      fatah();
      break;  }
      case 2: {
          system("cls");
          booking();
          break; }
      case 3: {
         system("cls");
      main();
        break;  }

      case 4: {
        system("cls");
        end();
        break;  }
}
}

int taka(){
  printf("\n\n\t\t\t\t\t\t\t\t\t\t==========================================");
  printf("\n\t\t\t\t\t\t\t\t\t\t=\t\t [Taka EO]\t         =");
  printf("\n\t\t\t\t\t\t\t\t\t\t==========================================");
  printf("\n\n\t\t\t\t\t\tKamu bingung mau bikin acara besar? Dengan Harga yang cukup terjangkau kami siap melayani kapanpun dan dimanapun.");
  printf("\n\nWilayah : Depok");
  printf("\n\nNo. Telp : 081323168720");
  printf("\n\nEmail : takatakemura@gmail.com");
  printf("\n===================================================================================================================================================================================================================");
  int pilihan14=0;
  ratingtaka(pilihan14);
  printf("\nRating : %.2f\n",rat);
  printf("===================================================================================================================================================================================================================");
  printf("\n");
  printf("\n\n\t\t\t\t\t\t\t\t\t\t==========================================");
  printf("\n\t\t\t\t\t\t\t\t\t\t=\t\t[1] Isi Rating\t\t =");
  printf("\n\t\t\t\t\t\t\t\t\t\t==========================================");
  printf("\n\n");
  printf("\n\n\t\t\t\t\t\t\t\t\t\t==========================================");
  printf("\n\t\t\t\t\t\t\t\t\t\t=\t\t[2] Booking\t\t =");
  printf("\n\t\t\t\t\t\t\t\t\t\t==========================================");
  printf("\n\n");
  printf("\n\n\t\t\t\t\t\t\t\t\t\t==========================================");
  printf("\n\t\t\t\t\t\t\t\t\t\t=\t\t[3] Menu Awal\t\t =");
  printf("\n\t\t\t\t\t\t\t\t\t\t==========================================");
  printf("\n\n");
  printf("\n\n\t\t\t\t\t\t\t\t\t\t==========================================");
  printf("\n\t\t\t\t\t\t\t\t\t\t=\t\t[4] Keluar\t\t =");
  printf("\n\t\t\t\t\t\t\t\t\t\t==========================================");
  printf("\n\n");
  printf("\n\n===================================================================================================================================================================================================================");
  scanf("%d", &pilihan14);
  switch(pilihan14) {
    case 1: {
      system ("cls");
      ratingtaka(pilihan14);
      system ("cls");
      taka();
      break;  }
      case 2: {
          system("cls");
          booking();
          break; }
      case 3: {
         system("cls");
      main();
        break;  }

      case 4: {
        system("cls");
        end();
        break;  }
}
}

int sadam(){
  printf("\n\n\t\t\t\t\t\t\t\t\t\t==========================================");
  printf("\n\t\t\t\t\t\t\t\t\t\t=\t\t [Sadam EO]\t         =");
  printf("\n\t\t\t\t\t\t\t\t\t\t==========================================");
  printf("\n\n\t     Kami adalah Event Organizer yang mengusung gerbrakan baru di dunia perancangan event. Kami dipenuhi orang orang muda yang mempunyai inovasi, kreatifitas, dan etos kerja yang baik.");
  printf("\n\nWilayah : Tanggerang");
  printf("\n\nNo. Telp : 081281375251");
  printf("\n\nEmail : sadamfachriansyah@gmail.com");
  printf("\n===================================================================================================================================================================================================================");
  int pilihan15=0;
  ratingsadam(pilihan15);
  printf("\nRating : %.2f\n",rat);
  printf("===================================================================================================================================================================================================================");
  printf("\n");
  printf("\n\n\t\t\t\t\t\t\t\t\t\t==========================================");
  printf("\n\t\t\t\t\t\t\t\t\t\t=\t\t[1] Isi Rating\t\t =");
  printf("\n\t\t\t\t\t\t\t\t\t\t==========================================");
  printf("\n\n");
  printf("\n\n\t\t\t\t\t\t\t\t\t\t==========================================");
  printf("\n\t\t\t\t\t\t\t\t\t\t=\t\t[2] Booking\t\t =");
  printf("\n\t\t\t\t\t\t\t\t\t\t==========================================");
  printf("\n\n");
  printf("\n\n\t\t\t\t\t\t\t\t\t\t==========================================");
  printf("\n\t\t\t\t\t\t\t\t\t\t=\t\t[3] Menu Awal\t\t =");
  printf("\n\t\t\t\t\t\t\t\t\t\t==========================================");
  printf("\n\n");
  printf("\n\n\t\t\t\t\t\t\t\t\t\t==========================================");
  printf("\n\t\t\t\t\t\t\t\t\t\t=\t\t[4] Keluar\t\t =");
  printf("\n\t\t\t\t\t\t\t\t\t\t==========================================");
  printf("\n\n");
  printf("\n\n===================================================================================================================================================================================================================");
  scanf("%d", &pilihan15);
  switch(pilihan15) {
    case 1: {
      system ("cls");
      ratingsadam(pilihan15);
      system ("cls");
      sadam();
      break;  }
      case 2: {
          system("cls");
          booking();
          break; }
      case 3: {
         system("cls");
      main();
        break;  }

      case 4: {
        system("cls");
        end();
        break;  }
}
}

int ubay(){
  printf("\n\n\t\t\t\t\t\t\t\t\t\t==========================================");
  printf("\n\t\t\t\t\t\t\t\t\t\t=\t\t [Ubay EO]\t         =");
  printf("\n\t\t\t\t\t\t\t\t\t\t==========================================");
  printf("\n\n\t\t\tAtas dasar kerja, tanggung jawab, semangat dan ide-ide Terbaik kami yang inovatif dan kreatif, berbagai event yang kami kerjakan dapat dilaksanakan dengan baik. \n\t\t\t\t\tDan hal itu pula yang menjadi pemicu kami untuk bekerja tetap memberikan yang Terbaik, lebih baik dan lebih baik lagi.");
  printf("\n\nWilayah : Tanggerang");
  printf("\n\nNo. Telp : 085889674255");
  printf("\n\nEmail : bayupangestu@gamil.com");
  printf("\n===================================================================================================================================================================================================================");
  int pilihan16=0;
  ratingubay(pilihan16);
  printf("\nRating : %.2f\n",rat);
  printf("===================================================================================================================================================================================================================");
  printf("\n");
  printf("\n\n\t\t\t\t\t\t\t\t\t\t==========================================");
  printf("\n\t\t\t\t\t\t\t\t\t\t=\t\t[1] Isi Rating\t\t =");
  printf("\n\t\t\t\t\t\t\t\t\t\t==========================================");
  printf("\n\n");
  printf("\n\n\t\t\t\t\t\t\t\t\t\t==========================================");
  printf("\n\t\t\t\t\t\t\t\t\t\t=\t\t[2] Booking\t\t =");
  printf("\n\t\t\t\t\t\t\t\t\t\t==========================================");
  printf("\n\n");
  printf("\n\n\t\t\t\t\t\t\t\t\t\t==========================================");
  printf("\n\t\t\t\t\t\t\t\t\t\t=\t\t[3] Menu Awal\t\t =");
  printf("\n\t\t\t\t\t\t\t\t\t\t==========================================");
  printf("\n\n");
  printf("\n\n\t\t\t\t\t\t\t\t\t\t==========================================");
  printf("\n\t\t\t\t\t\t\t\t\t\t=\t\t[4] Keluar\t\t =");
  printf("\n\t\t\t\t\t\t\t\t\t\t==========================================");
  printf("\n\n");
  printf("\n\n===================================================================================================================================================================================================================");
  scanf("%d", &pilihan16);
  switch(pilihan16) {
    case 1: {
      system ("cls");
      ratingubay(pilihan16);
      system ("cls");
      ubay();
      break;  }
      case 2: {
          system("cls");
          booking();
          break; }
      case 3: {
         system("cls");
      main();
        break;  }

      case 4: {
        system("cls");
        end();
        break;  }
}
}

int hanif(){
  printf("\n\n\t\t\t\t\t\t\t\t\t\t==========================================");
  printf("\n\t\t\t\t\t\t\t\t\t\t=\t\t [Hanif EO]\t         =");
  printf("\n\t\t\t\t\t\t\t\t\t\t==========================================");
  printf("\n\n\t\t\t\tVisi Kami adalah terwujudnya EO yang dapat melayani masyarakat di bidang perancangan event. Kami bergerak dengan asas kejujuran dan kedisiplinan.");
  printf("\n\nWilayah : Tanggerang");
  printf("\n\nNo. Telp : 085899715477");
  printf("\n\nEmail : hanifzufarafif@gmail.com");
  printf("\n===================================================================================================================================================================================================================");
  int pilihan17=0;
  ratinghanif(pilihan17);
  printf("\nRating : %.2f\n",rat);
  printf("===================================================================================================================================================================================================================");
  printf("\n");
  printf("\n");
  printf("\n\n\t\t\t\t\t\t\t\t\t\t==========================================");
  printf("\n\t\t\t\t\t\t\t\t\t\t=\t\t[1] Isi Rating\t\t =");
  printf("\n\t\t\t\t\t\t\t\t\t\t==========================================");
  printf("\n\n");
  printf("\n\n\t\t\t\t\t\t\t\t\t\t==========================================");
  printf("\n\t\t\t\t\t\t\t\t\t\t=\t\t[2] Booking\t\t =");
  printf("\n\t\t\t\t\t\t\t\t\t\t==========================================");
  printf("\n\n");
  printf("\n\n\t\t\t\t\t\t\t\t\t\t==========================================");
  printf("\n\t\t\t\t\t\t\t\t\t\t=\t\t[3] Menu Awal\t\t =");
  printf("\n\t\t\t\t\t\t\t\t\t\t==========================================");
  printf("\n\n");
  printf("\n\n\t\t\t\t\t\t\t\t\t\t==========================================");
  printf("\n\t\t\t\t\t\t\t\t\t\t=\t\t[4] Keluar\t\t =");
  printf("\n\t\t\t\t\t\t\t\t\t\t==========================================");
  printf("\n\n");
  printf("\n\n===================================================================================================================================================================================================================");
  scanf("%d", &pilihan17);
  switch(pilihan17) {
    case 1: {
      system ("cls");
      ratinghanif(pilihan17);
      system ("cls");
      hanif();
      break;  }
      case 2: {
          system("cls");
          booking();
          break; }
      case 3: {
         system("cls");
      main();
        break;  }

      case 4: {
        system("cls");
        end();
        break;  }
}
}

int ghalib(){
  printf("\n\n\t\t\t\t\t\t\t\t\t\t==========================================");
  printf("\n\t\t\t\t\t\t\t\t\t\t=\t\t [Ghalib EO]\t         =");
  printf("\n\t\t\t\t\t\t\t\t\t\t==========================================");
  printf("\n\n\t\t\t\t\t\tKamu bingung mau bikin acara besar? Dengan Harga yang cukup terjangkau kami siap melayani kapanpun dan dimanapun.");
  printf("\n\nWilayah : Tanggerang");
  printf("\n\nNo. Telp : 085712963386");
  printf("\n\nEmail : adityaghalibh@gmail.com");
  printf("\n===================================================================================================================================================================================================================");
  int pilihan18=0;
  ratingghalib(pilihan18);
  printf("\nRating : %.2f\n",rat);
  printf("===================================================================================================================================================================================================================");
  printf("\n");
  printf("\n\n\t\t\t\t\t\t\t\t\t\t==========================================");
  printf("\n\t\t\t\t\t\t\t\t\t\t=\t\t[1] Isi Rating\t\t =");
  printf("\n\t\t\t\t\t\t\t\t\t\t==========================================");
  printf("\n\n");
  printf("\n\n\t\t\t\t\t\t\t\t\t\t==========================================");
  printf("\n\t\t\t\t\t\t\t\t\t\t=\t\t[2] Booking\t\t =");
  printf("\n\t\t\t\t\t\t\t\t\t\t==========================================");
  printf("\n\n");
  printf("\n\n\t\t\t\t\t\t\t\t\t\t==========================================");
  printf("\n\t\t\t\t\t\t\t\t\t\t=\t\t[3] Menu Awal\t\t =");
  printf("\n\t\t\t\t\t\t\t\t\t\t==========================================");
  printf("\n\n");
  printf("\n\n\t\t\t\t\t\t\t\t\t\t==========================================");
  printf("\n\t\t\t\t\t\t\t\t\t\t=\t\t[4] Keluar\t\t =");
  printf("\n\t\t\t\t\t\t\t\t\t\t==========================================");
  printf("\n\n");
  printf("\n\n===================================================================================================================================================================================================================");
  scanf("%d", &pilihan18);
  switch(pilihan18) {
    case 1: {
      system ("cls");
      ratingghalib(pilihan18);
      system ("cls");
      ghalib();
      break;  }
      case 2: {
          system("cls");
          booking();
          break; }
      case 3: {
         system("cls");
      main();
        break;  }

      case 4: {
        system("cls");
        end();
        break;  }
  }
}

int salman(){
  printf("\n\n\t\t\t\t\t\t\t\t\t\t==========================================");
  printf("\n\t\t\t\t\t\t\t\t\t\t=\t\t [Salman EO]\t         =");
  printf("\n\t\t\t\t\t\t\t\t\t\t==========================================");
  printf("\n\n\t     Kami adalah Event Organizer yang mengusung gerbrakan baru di dunia perancangan event. Kami dipenuhi orang orang muda yang mempunyai inovasi, kreatifitas, dan etos kerja yang baik.");
  printf("\n\nWilayah : Tanggerang");
  printf("\n\nNo. Telp : 089688326390");
  printf("\n\nEmail : salmanalfarisi@gmail.com");
  printf("\n===================================================================================================================================================================================================================");
  int pilihan19=0;
  ratingsalman(pilihan19);
  printf("\nRating : %.2f\n",rat);
  printf("===================================================================================================================================================================================================================");
  printf("\n");
  printf("\n\n\t\t\t\t\t\t\t\t\t\t==========================================");
  printf("\n\t\t\t\t\t\t\t\t\t\t=\t\t[1] Isi Rating\t\t =");
  printf("\n\t\t\t\t\t\t\t\t\t\t==========================================");
  printf("\n\n");
  printf("\n\n\t\t\t\t\t\t\t\t\t\t==========================================");
  printf("\n\t\t\t\t\t\t\t\t\t\t=\t\t[2] Booking\t\t =");
  printf("\n\t\t\t\t\t\t\t\t\t\t==========================================");
  printf("\n\n");
  printf("\n\n\t\t\t\t\t\t\t\t\t\t==========================================");
  printf("\n\t\t\t\t\t\t\t\t\t\t=\t\t[3] Menu Awal\t\t =");
  printf("\n\t\t\t\t\t\t\t\t\t\t==========================================");
  printf("\n\n");
  printf("\n\n\t\t\t\t\t\t\t\t\t\t==========================================");
  printf("\n\t\t\t\t\t\t\t\t\t\t=\t\t[4] Keluar\t\t =");
  printf("\n\t\t\t\t\t\t\t\t\t\t==========================================");
  printf("\n\n");
  printf("\n\n===================================================================================================================================================================================================================");
  scanf("%d", &pilihan19);
  switch(pilihan19) {
    case 1: {
      system ("cls");
      ratingsalman(pilihan19);
      system ("cls");
      salman();
      break;  }
      case 2: {
          system("cls");
          booking();
          break; }
      case 3: {
         system("cls");
      main();
        break;  }

      case 4: {
        system("cls");
        end();
        break;  }
  }
}

int peka(){
  printf("\n\n\t\t\t\t\t\t\t\t\t\t==========================================");
  printf("\n\t\t\t\t\t\t\t\t\t\t=\t\t [Peka EO]\t         =");
  printf("\n\t\t\t\t\t\t\t\t\t\t==========================================");
  printf("\n\n\tKami membuka berbagai layanan jasa Event Organizer baik itu event kecil maupun besar, kami siap melayani Anda. Percayakan kepada kami event anda mulai dari perancangan hingga event selesai.");
  printf("\n\nWilayah : Bekasi");
  printf("\n\nNo. Telp : 085844907492");
  printf("\n\nEmail : pkrenaldy@gmail.com");
  printf("\n===================================================================================================================================================================================================================");
  int pilihan20=0;
  ratingpeka(pilihan20);
  printf("\nRating : %.2f\n",rat);
  printf("===================================================================================================================================================================================================================");
  printf("\n");
  printf("\n\n\t\t\t\t\t\t\t\t\t\t==========================================");
  printf("\n\t\t\t\t\t\t\t\t\t\t=\t\t[1] Isi Rating\t\t =");
  printf("\n\t\t\t\t\t\t\t\t\t\t==========================================");
  printf("\n\n");
  printf("\n\n\t\t\t\t\t\t\t\t\t\t==========================================");
  printf("\n\t\t\t\t\t\t\t\t\t\t=\t\t[2] Booking\t\t =");
  printf("\n\t\t\t\t\t\t\t\t\t\t==========================================");
  printf("\n\n");
  printf("\n\n\t\t\t\t\t\t\t\t\t\t==========================================");
  printf("\n\t\t\t\t\t\t\t\t\t\t=\t\t[3] Menu Awal\t\t =");
  printf("\n\t\t\t\t\t\t\t\t\t\t==========================================");
  printf("\n\n");
  printf("\n\n\t\t\t\t\t\t\t\t\t\t==========================================");
  printf("\n\t\t\t\t\t\t\t\t\t\t=\t\t[4] Keluar\t\t =");
  printf("\n\t\t\t\t\t\t\t\t\t\t==========================================");
  printf("\n\n");
  printf("\n\n===================================================================================================================================================================================================================");
  scanf("%d", &pilihan20);
  switch(pilihan20) {
    case 1: {
      system ("cls");
      ratingpeka(pilihan20);
      system ("cls");
      peka();
      break;  }
      case 2: {
          system("cls");
          booking();
          break; }
      case 3: {
         system("cls");
      main();
        break;  }

      case 4: {
        system("cls");
        end();
        break;  }
  }
}

int harits(){
  printf("\n\n\t\t\t\t\t\t\t\t\t\t==========================================");
  printf("\n\t\t\t\t\t\t\t\t\t\t=\t\t [Harits EO]\t         =");
  printf("\n\t\t\t\t\t\t\t\t\t\t==========================================");
  printf("\n\n\t\t\tAtas dasar kerja, tanggung jawab, semangat dan ide-ide Terbaik kami yang inovatif dan kreatif, berbagai event yang kami kerjakan dapat dilaksanakan dengan baik. \n\t\t\t\t\tDan hal itu pula yang menjadi pemicu kami untuk bekerja tetap memberikan yang Terbaik, lebih baik dan lebih baik lagi.");
  printf("\n\nWilayah : Bekasi");
  printf("\n\nNo. Telp : 085890554108");
  printf("\n\nEmail : fadhlanharits@gmail.com");
  printf("\n===================================================================================================================================================================================================================");
  int pilihan21=0;
  ratingharits(pilihan21);
  printf("\nRating : %.2f\n",rat);
  printf("===================================================================================================================================================================================================================");
  printf("\n");
  printf("\n\n\t\t\t\t\t\t\t\t\t\t==========================================");
  printf("\n\t\t\t\t\t\t\t\t\t\t=\t\t[1] Isi Rating\t\t =");
  printf("\n\t\t\t\t\t\t\t\t\t\t==========================================");
  printf("\n\n");
  printf("\n\n\t\t\t\t\t\t\t\t\t\t==========================================");
  printf("\n\t\t\t\t\t\t\t\t\t\t=\t\t[2] Booking\t\t =");
  printf("\n\t\t\t\t\t\t\t\t\t\t==========================================");
  printf("\n\n");
  printf("\n\n\t\t\t\t\t\t\t\t\t\t==========================================");
  printf("\n\t\t\t\t\t\t\t\t\t\t=\t\t[3] Menu Awal\t\t =");
  printf("\n\t\t\t\t\t\t\t\t\t\t==========================================");
  printf("\n\n");
  printf("\n\n\t\t\t\t\t\t\t\t\t\t==========================================");
  printf("\n\t\t\t\t\t\t\t\t\t\t=\t\t[4] Keluar\t\t =");
  printf("\n\t\t\t\t\t\t\t\t\t\t==========================================");
  printf("\n\n");
  printf("\n\n===================================================================================================================================================================================================================");
  scanf("%d", &pilihan21);
  switch(pilihan21) {
    case 1: {
      system ("cls");
      ratingharits(pilihan21);
      system ("cls");
      harits();
      break;  }
      case 2: {
          system("cls");
          booking();
          break; }
    case 3: {
      system("cls");
      main();
        break;  }
    case 4: {
        system("cls");
        end();
        break;  }
  }
}

int ilsa(){
  printf("\n\n\t\t\t\t\t\t\t\t\t\t==========================================");
  printf("\n\t\t\t\t\t\t\t\t\t\t=\t\t [Ilsa EO]\t         =");
  printf("\n\t\t\t\t\t\t\t\t\t\t==========================================");
  printf("\n\n\t\t\t\tVisi Kami adalah terwujudnya EO yang dapat melayani masyarakat di bidang perancangan event. Kami bergerak dengan asas kejujuran dan kedisiplinan.");
  printf("\n\nWilayah : Bekasi");
  printf("\n\nNo. Telp : 085811327906");
  printf("\n\nEmail : ailsyafadynia@gmail.com");
  printf("\n===================================================================================================================================================================================================================");
  int pilihan22=0;
  ratingilsa(pilihan22);
  printf("\nRating : %.2f\n",rat);
  printf("===================================================================================================================================================================================================================");
  printf("\n");
  printf("\n");
  printf("\n\n\t\t\t\t\t\t\t\t\t\t==========================================");
  printf("\n\t\t\t\t\t\t\t\t\t\t=\t\t[1] Isi Rating\t\t =");
  printf("\n\t\t\t\t\t\t\t\t\t\t==========================================");
  printf("\n\n");
  printf("\n\n\t\t\t\t\t\t\t\t\t\t==========================================");
  printf("\n\t\t\t\t\t\t\t\t\t\t=\t\t[2] Booking\t\t =");
  printf("\n\t\t\t\t\t\t\t\t\t\t==========================================");
  printf("\n\n");
  printf("\n\n\t\t\t\t\t\t\t\t\t\t==========================================");
  printf("\n\t\t\t\t\t\t\t\t\t\t=\t\t[3] Menu Awal\t\t =");
  printf("\n\t\t\t\t\t\t\t\t\t\t==========================================");
  printf("\n\n");
  printf("\n\n\t\t\t\t\t\t\t\t\t\t==========================================");
  printf("\n\t\t\t\t\t\t\t\t\t\t=\t\t[4] Keluar\t\t =");
  printf("\n\t\t\t\t\t\t\t\t\t\t==========================================");
  printf("\n\n");
  printf("\n\n===================================================================================================================================================================================================================");
  scanf("%d", &pilihan22);
  switch(pilihan22) {
    case 1: {
      system ("cls");
      ratingilsa(pilihan22);
      system ("cls");
      ilsa();
      break;  }
      case 2: {
          system("cls");
          booking();
          break; }
    case 3: {
     system("cls");
    main();
        break;  }
    case 4: {
      system("cls");
      end();
      break;  }
  }
}


int elloy(){
  printf("\n\n\t\t\t\t\t\t\t\t\t\t==========================================");
  printf("\n\t\t\t\t\t\t\t\t\t\t=\t\t [Elloy EO]\t         =");
  printf("\n\t\t\t\t\t\t\t\t\t\t==========================================");
  printf("\n\n\t\t\t\t\t\tKamu bingung mau bikin acara besar? Dengan Harga yang cukup terjangkau kami siap melayani kapanpun dan dimanapun.");
  printf("\n\nWilayah : Bekasi");
  printf("\n\nNo. Telp : 0858551062858");
  printf("\n\nEmail : jonathanelloy@gmail.com");
  printf("\n===================================================================================================================================================================================================================");
  int pilihan23=0;
  ratingelloy(pilihan23);
  printf("\nRating :%.2f\n",rat);
  printf("===================================================================================================================================================================================================================");
  printf("\n");
  printf("\n\n\t\t\t\t\t\t\t\t\t\t==========================================");
  printf("\n\t\t\t\t\t\t\t\t\t\t=\t\t[1] Isi Rating\t\t =");
  printf("\n\t\t\t\t\t\t\t\t\t\t==========================================");
  printf("\n\n");
  printf("\n\n\t\t\t\t\t\t\t\t\t\t==========================================");
  printf("\n\t\t\t\t\t\t\t\t\t\t=\t\t[2] Booking\t\t =");
  printf("\n\t\t\t\t\t\t\t\t\t\t==========================================");
  printf("\n\n");
  printf("\n\n\t\t\t\t\t\t\t\t\t\t==========================================");
  printf("\n\t\t\t\t\t\t\t\t\t\t=\t\t[3] Menu Awal\t\t =");
  printf("\n\t\t\t\t\t\t\t\t\t\t==========================================");
  printf("\n\n");
  printf("\n\n\t\t\t\t\t\t\t\t\t\t==========================================");
  printf("\n\t\t\t\t\t\t\t\t\t\t=\t\t[4] Keluar\t\t =");
  printf("\n\t\t\t\t\t\t\t\t\t\t==========================================");
  printf("\n\n");
  printf("\n\n===================================================================================================================================================================================================================");
  scanf("%d", &pilihan23);
  switch(pilihan23) {
    case 1: {
      system ("cls");
      ratingelloy(pilihan23);
      system ("cls");
      elloy();
      break;  }
      case 2: {
          system("cls");
          booking();
          break; }

      case 3: {
         system("cls");
      main();
        break;  }

      case 4: {
        system("cls");
        end();
        break;  }
  }
}

int aldi(){
  printf("\n\n\t\t\t\t\t\t\t\t\t\t==========================================");
  printf("\n\t\t\t\t\t\t\t\t\t\t=\t\t [Aldi EO]\t         =");
  printf("\n\t\t\t\t\t\t\t\t\t\t==========================================");
  printf("\n\n\t     Kami adalah Event Organizer yang mengusung gerbrakan baru di dunia perancangan event. Kami dipenuhi orang orang muda yang mempunyai inovasi, kreatifitas, dan etos kerja yang baik.");
  printf("\n\nWilayah : Bekasi");
  printf("\n\nNo. Telp : 081317625922");
  printf("\n\nEmail : aldiandyairsyad@gmail.com");
  printf("\n===================================================================================================================================================================================================================");
  int pilihan24=0;
  ratingaldi(pilihan24);
  printf("\nRating : %.2f\n",rat);
  printf("===================================================================================================================================================================================================================");
  printf("\n");
  printf("\n\n\t\t\t\t\t\t\t\t\t\t==========================================");
  printf("\n\t\t\t\t\t\t\t\t\t\t=\t\t[1] Isi Rating\t\t =");
  printf("\n\t\t\t\t\t\t\t\t\t\t==========================================");
  printf("\n\n");
  printf("\n\n\t\t\t\t\t\t\t\t\t\t==========================================");
  printf("\n\t\t\t\t\t\t\t\t\t\t=\t\t[2] Booking\t\t =");
  printf("\n\t\t\t\t\t\t\t\t\t\t==========================================");
  printf("\n\n");
  printf("\n\n\t\t\t\t\t\t\t\t\t\t==========================================");
  printf("\n\t\t\t\t\t\t\t\t\t\t=\t\t[3] Menu Awal\t\t =");
  printf("\n\t\t\t\t\t\t\t\t\t\t==========================================");
  printf("\n\n");
  printf("\n\n\t\t\t\t\t\t\t\t\t\t==========================================");
  printf("\n\t\t\t\t\t\t\t\t\t\t=\t\t[4] Keluar\t\t =");
  printf("\n\t\t\t\t\t\t\t\t\t\t==========================================");
  printf("\n\n");
  printf("\n\n===================================================================================================================================================================================================================");
  scanf("%d", &pilihan24);
  switch(pilihan24) {
    case 1: {
      system ("cls");
      ratingaldi(pilihan24);
      system ("cls");
      aldi();
      break;  }
      case 2: {
          system("cls");
          booking();
          break; }
      case 3: {
         system("cls");
      main();
        break;  }

      case 4: {
        system("cls");
        end();
        break;  }
  }
}

int ratingasad (int cek){
   rat=0;
  if (cek!=0){
    for(h2;h2<i2;h2++){
      printf("\n\n\t\t(Isi Rating > Range '1'-'5')");
      printf("\n\t\t____________________________\n");
      printf("\n\n===================================================================================================================================================================================================================");
      printf("\n\n\t\t\t\t\t\t\t\t\t\t\t\t Isi Rating : ");
    	scanf ("%d",&rating2[h2]);
    }
    for(g2=0;g2<h2;g2++){
      rat+=rating2[g2];
      }
    rat/=(g2);
    //printf ("%d",g);
    i2++;
    }
    else {
      for(g2=0;g2<h2;g2++){
        rat+=rating2[g2];
        }
      rat/=(g2);
    }
}

int ratingfarid (int cek){
  rat=0;
  if (cek!=0){
  for(h3;h3<i3;h3++){
    printf("\n\n\t\t(Isi Rating > Range '1'-'5')");
    printf("\n\t\t____________________________\n");
    printf("\n\n===================================================================================================================================================================================================================");
    printf("\n\n\t\t\t\t\t\t\t\t\t\t\t\t Isi Rating : ");
  	scanf ("%d",&rating3[h3]);
  }
  for(g3=0;g3<h;g3++){
    rat+=rating3[g3];
    }
  rat/=(g3);
  //printf ("%d",g);
  i3++;
  }
  else {
    for(g3=0;g3<h3;g3++){
      rat+=rating3[g3];
      }
    rat/=(g3);
  }
}



int ratinggibran (int cek){
  rat=0;
  if (cek!=0){
  for(h4;h4<i4;h4++){
    printf("\n\n\t\t(Isi Rating > Range '1'-'5')");
    printf("\n\t\t____________________________\n");
    printf("\n\n===================================================================================================================================================================================================================");
    printf("\n\n\t\t\t\t\t\t\t\t\t\t\t\t Isi Rating : ");
  	scanf ("%d",&rating4[h4]);
  }
  for(g4=0;g4<h4;g4++){
    rat+=rating4[g4];
    }
  rat/=(g4);
  //printf ("%d",g);
  i4++;
  }
  else {
    for(g4=0;g4<h4;g4++){
      rat+=rating4[g4];
      }
    rat/=(g4);
  }
}


int ratingarief(int cek){
  rat=0;
  if (cek!=0){
  for(h;h<i;h++){
    printf("\n\n\t\t(Isi Rating > Range '1'-'5')");
    printf("\n\t\t____________________________\n");
    printf("\n\n===================================================================================================================================================================================================================");
    printf("\n\n\t\t\t\t\t\t\t\t\t\t\t\t Isi Rating : ");
  	scanf ("%d",&rating[h]);
  }
  for(g=0;g<h;g++){
    rat+=rating[g];
    }
  rat/=(g);
  //printf ("%d",g);
  i++;
  }
  else {
    for(g=0;g<h;g++){
      rat+=rating[g];
      }
    rat/=(g);
  }
}
  int ratingalfian(int cek){
    rat1=0;
    if (cek!=0){
    for(h1;h1<i1;h1++){
      printf("\n\n\t\t(Isi Rating > Range '1'-'5')");
      printf("\n\t\t____________________________\n");
      printf("\n\n===================================================================================================================================================================================================================");
      printf("\n\n\t\t\t\t\t\t\t\t\t\t\t\t Isi Rating : ");
    	scanf ("%d",&rating1[h1]);
    }
    for(g1=0;g1<h1;g1++){
      rat1+=rating1[g1];
      }
    rat1/=(g1);
    //printf ("%d",g);
    i1++;
  }
  else {
    for(g1=0;g1<h1;g1++){
      rat1+=rating1[g1];
      }
    rat1/=(g1);
    //printf ("%d",g);
  }
    }

    int ratingnathan(int cek){
      rat=0;
      if (cek!=0){
      for(h5;h5<i5;h5++){
        printf("\n\n\t\t(Isi Rating > Range '1'-'5')");
        printf("\n\t\t____________________________\n");
        printf("\n\n===================================================================================================================================================================================================================");
        printf("\n\n\t\t\t\t\t\t\t\t\t\t\t\t Isi Rating : ");
      	scanf ("%d",&rating5[h5]);
      }
      for(g5=0;g5<h5;g5++){
        rat+=rating5[g5];
        }
      rat/=(g5);
      //printf ("%d",g);
      i5++;
      }
      else {
        for(g5=0;g5<h5;g5++){
          rat+=rating5[g5];
          }
        rat/=(g5);
      }
    }

    int ratingarva(int cek){
      rat=0;
      if (cek!=0){
      for(h6;h6<i6;h6++){
        printf("\n\n\t\t(Isi Rating > Range '1'-'5')");
        printf("\n\t\t____________________________\n");
        printf("\n\n===================================================================================================================================================================================================================");
        printf("\n\n\t\t\t\t\t\t\t\t\t\t\t\t Isi Rating : ");
      	scanf ("%d",&rating6[h6]);
      }
      for(g6=0;g6<h6;g6++){
        rat+=rating6[g6];
        }
      rat/=(g6);
      //printf ("%d",g);
      i6++;
      }
      else {
        for(g6=0;g6<h6;g6++){
          rat+=rating6[g6];
          }
        rat/=(g6);
      }
    }

    int ratingsyahmi(int cek){
      rat=0;
      if (cek!=0){
      for(h7;h7<i7;h7++){
        printf("\n\n\t\t(Isi Rating > Range '1'-'5')");
        printf("\n\t\t____________________________\n");
        printf("\n\n===================================================================================================================================================================================================================");
        printf("\n\n\t\t\t\t\t\t\t\t\t\t\t\t Isi Rating : ");
        scanf ("%d",&rating7[h7]);
      }
      for(g7=0;g7<h7;g7++){
        rat+=rating7[g7];
        }
      rat/=(g7);
      //printf ("%d",g);
      i7++;
      }
      else {
        for(g7=0;g7<h7;g7++){
          rat+=rating7[g7];
          }
        rat/=(g7);
      }
    }

    int ratingramadhan(int cek){
      rat=0;
      if (cek!=0){
      for(h8;h8<i8;h8++){
        printf("\n\n\t\t(Isi Rating > Range '1'-'5')");
        printf("\n\t\t____________________________\n");
        printf("\n\n===================================================================================================================================================================================================================");
        printf("\n\n\t\t\t\t\t\t\t\t\t\t\t\t Isi Rating : ");
        scanf ("%d",&rating8[h8]);
      }
      for(g8=0;g8<h8;g8++){
        rat+=rating8[g8];
        }
      rat/=(g8);
      //printf ("%d",g);
      i8++;
      }
      else {
        for(g8=0;g8<h8;g8++){
          rat+=rating8[g8];
          }
        rat/=(g8);
      }
    }


    int ratinghanvey(int cek){
      rat=0;
      if (cek!=0){
      for(h9;h9<i9;h9++){
        printf("\n\n\t\t(Isi Rating > Range '1'-'5')");
        printf("\n\t\t____________________________\n");
        printf("\n\n===================================================================================================================================================================================================================");
        printf("\n\n\t\t\t\t\t\t\t\t\t\t\t\t Isi Rating : ");
        scanf ("%d",&rating9[h9]);
      }
      for(g9=0;g9<h9;g9++){
        rat+=rating9[g9];
        }
      rat/=(g9);
      //printf ("%d",g);
      i9++;
      }
      else {
        for(g9=0;g9<h9;g9++){
          rat+=rating9[g9];
          }
        rat/=(g9);
      }
    }

    int ratingadit(int cek){
      rat=0;
      if (cek!=0){
      for(h10;h10<i10;h10++){
        printf("\n\n\t\t(Isi Rating > Range '1'-'5')");
        printf("\n\t\t____________________________\n");
        printf("\n\n===================================================================================================================================================================================================================");
        printf("\n\n\t\t\t\t\t\t\t\t\t\t\t\t Isi Rating : ");
        scanf ("%d",&rating10[h10]);
      }
      for(g10=0;g10<h10;g10++){
        rat+=rating10[g10];
        }
      rat/=(g10);
      //printf ("%d",g);
      i10++;
      }
      else {
        for(g10=0;g10<h10;g10++){
          rat+=rating10[g10];
          }
        rat/=(g10);
      }
    }

    int ratingaldo(int cek){
      rat=0;
      if (cek!=0){
      for(h11;h11<i11;h11++){
        printf("\n\n\t\t(Isi Rating > Range '1'-'5')");
        printf("\n\t\t____________________________\n");
        printf("\n\n===================================================================================================================================================================================================================");
        printf("\n\n\t\t\t\t\t\t\t\t\t\t\t\t Isi Rating : ");
        scanf ("%d",&rating11[h11]);
      }
      for(g11=0;g11<h11;g11++){
        rat+=rating11[g11];
        }
      rat/=(g11);
      //printf ("%d",g);
      i11++;
      }
      else {
        for(g11=0;g11<h11;g11++){
          rat+=rating11[g11];
          }
        rat/=(g11);
      }
    }

    int ratingelyaser(int cek){
      rat=0;
      if (cek!=0){
      for(h12;h12<i12;h12++){
        printf("\n\n\t\t(Isi Rating > Range '1'-'5')");
        printf("\n\t\t____________________________\n");
        printf("\n\n===================================================================================================================================================================================================================");
        printf("\n\n\t\t\t\t\t\t\t\t\t\t\t\t Isi Rating : ");
        scanf ("%d",&rating12[h12]);
      }
      for(g12=0;g12<h12;g12++){
        rat+=rating12[g12];
        }
      rat/=(g12);
      //printf ("%d",g);
      i12++;
      }
      else {
        for(g12=0;g12<h12;g12++){
          rat+=rating12[g12];
          }
        rat/=(g12);
      }
    }

    int ratingfatah(int cek){
      rat=0;
      if (cek!=0){
      for(h13;h13<i13;h13++){
        printf("\n\n\t\t(Isi Rating > Range '1'-'5')");
        printf("\n\t\t____________________________\n");
        printf("\n\n===================================================================================================================================================================================================================");
        printf("\n\n\t\t\t\t\t\t\t\t\t\t\t\t Isi Rating : ");
        scanf ("%d",&rating13[h13]);
      }
      for(g13=0;g13<h13;g13++){
        rat+=rating13[g13];
        }
      rat/=(g13);
      //printf ("%d",g);
      i13++;
      }
      else {
        for(g13=0;g13<h13;g13++){
          rat+=rating13[g13];
          }
        rat/=(g13);
      }
    }

    int ratingtaka(int cek){
      rat=0;
      if (cek!=0){
      for(h14;h14<i14;h14++){
        printf("\n\n\t\t(Isi Rating > Range '1'-'5')");
        printf("\n\t\t____________________________\n");
        printf("\n\n===================================================================================================================================================================================================================");
        printf("\n\n\t\t\t\t\t\t\t\t\t\t\t\t Isi Rating : ");
        scanf ("%d",&rating14[h14]);
      }
      for(g14=0;g14<h14;g14++){
        rat+=rating14[g14];
        }
      rat/=(g14);
      //printf ("%d",g);
      i14++;
      }
      else {
        for(g14=0;g14<h14;g14++){
          rat+=rating14[g14];
          }
        rat/=(g14);
      }
    }

    int ratingsadam(int cek){
      rat=0;
      if (cek!=0){
      for(h15;h15<i15;h15++){
        printf("\n\n\t\t(Isi Rating > Range '1'-'5')");
        printf("\n\t\t____________________________\n");
        printf("\n\n===================================================================================================================================================================================================================");
        printf("\n\n\t\t\t\t\t\t\t\t\t\t\t\t Isi Rating : ");
        scanf ("%d",&rating15[h15]);
      }
      for(g15=0;g15<h15;g15++){
        rat+=rating15[g15];
        }
      rat/=(g15);
      //printf ("%d",g);
      i15++;
      }
      else {
        for(g15=0;g15<h15;g15++){
          rat+=rating15[g15];
          }
        rat/=(g15);
      }
    }

    int ratingubay(int cek){
      rat=0;
      if (cek!=0){
      for(h16;h16<i16;h16++){
        printf("\n\n\t\t(Isi Rating > Range '1'-'5')");
        printf("\n\t\t____________________________\n");
        printf("\n\n===================================================================================================================================================================================================================");
        printf("\n\n\t\t\t\t\t\t\t\t\t\t\t\t Isi Rating : ");
        scanf ("%d",&rating16[h16]);
      }
      for(g16=0;g16<h16;g16++){
        rat+=rating16[g16];
        }
      rat/=(g16);
      //printf ("%d",g);
      i16++;
      }
      else {
        for(g16=0;g16<h16;g16++){
          rat+=rating16[g16];
          }
        rat/=(g16);
      }
    }

    int ratinghanif(int cek){
      rat=0;
      if (cek!=0){
      for(h17;h17<i17;h17++){
        printf("\n\n\t\t(Isi Rating > Range '1'-'5')");
        printf("\n\t\t____________________________\n");
        printf("\n\n===================================================================================================================================================================================================================");
        printf("\n\n\t\t\t\t\t\t\t\t\t\t\t\t Isi Rating : ");
        scanf ("%d",&rating17[h17]);
      }
      for(g17=0;g17<h17;g17++){
        rat+=rating17[g17];
        }
      rat/=(g17);
      //printf ("%d",g);
      i17++;
      }
      else {
        for(g17=0;g17<h17;g17++){
          rat+=rating17[g17];
          }
        rat/=(g17);
      }
    }

    int ratingghalib(int cek){
      rat=0;
      if (cek!=0){
      for(h18;h18<i18;h18++){
        printf("\n\n\t\t(Isi Rating > Range '1'-'5')");
        printf("\n\t\t____________________________\n");
        printf("\n\n===================================================================================================================================================================================================================");
        printf("\n\n\t\t\t\t\t\t\t\t\t\t\t\t Isi Rating : ");
        scanf ("%d",&rating18[h18]);
      }
      for(g18=0;g18<h18;g18++){
        rat+=rating18[g18];
        }
      rat/=(g18);
      //printf ("%d",g);
      i18++;
      }
      else {
        for(g18=0;g18<h18;g18++){
          rat+=rating18[g18];
          }
        rat/=(g18);
      }
    }

    int ratingsalman(int cek){
      rat=0;
      if (cek!=0){
      for(h19;h19<i19;h19++){
        printf("\n\n\t\t(Isi Rating > Range '1'-'5')");
        printf("\n\t\t____________________________\n");
        printf("\n\n===================================================================================================================================================================================================================");
        printf("\n\n\t\t\t\t\t\t\t\t\t\t\t\t Isi Rating : ");
        scanf ("%d",&rating19[h19]);
      }
      for(g19=0;g19<h19;g19++){
        rat+=rating19[g19];
        }
      rat/=(g19);
      //printf ("%d",g);
      i19++;
      }
      else {
        for(g19=0;g19<h19;g19++){
          rat+=rating19[g19];
          }
        rat/=(g19);
      }
    }

    int ratingpeka(int cek){
      rat=0;
      if (cek!=0){
      for(h20;h20<i20;h20++){
        printf("\n\n\t\t(Isi Rating > Range '1'-'5')");
        printf("\n\t\t____________________________\n");
        printf("\n\n===================================================================================================================================================================================================================");
        printf("\n\n\t\t\t\t\t\t\t\t\t\t\t\t Isi Rating : ");
        scanf ("%d",&rating20[h20]);
      }
      for(g20=0;g20<h20;g20++){
        rat+=rating20[g20];
        }
      rat/=(g20);
      //printf ("%d",g);
      i20++;
      }
      else {
        for(g20=0;g20<h20;g20++){
          rat+=rating20[g20];
          }
        rat/=(g20);
      }
    }

    int ratingharits(int cek){
      rat=0;
      if (cek!=0){
      for(h21;h21<i21;h21++){
        printf("\n\n\t\t(Isi Rating > Range '1'-'5')");
        printf("\n\t\t____________________________\n");
        printf("\n\n===================================================================================================================================================================================================================");
        printf("\n\n\t\t\t\t\t\t\t\t\t\t\t\t Isi Rating : ");
        scanf ("%d",&rating21[h21]);
      }
      for(g21=0;g21<h21;g21++){
        rat+=rating21[g21];
        }
      rat/=(g21);
      //printf ("%d",g);
      i21++;
      }
      else {
        for(g21=0;g21<h21;g21++){
          rat+=rating21[g21];
          }
        rat/=(g21);
      }
    }

    int ratingilsa(int cek){
      rat=0;
      if (cek!=0){
      for(h22;h22<i22;h22++){
        printf("\n\n\t\t(Isi Rating > Range '1'-'5')");
        printf("\n\t\t____________________________\n");
        printf("\n\n===================================================================================================================================================================================================================");
        printf("\n\n\t\t\t\t\t\t\t\t\t\t\t\t Isi Rating : ");
        scanf ("%d",&rating22[h22]);
      }
      for(g22=0;g22<h22;g22++){
        rat+=rating22[g22];
        }
      rat/=(g22);
      //printf ("%d",g);
      i22++;
      }
      else {
        for(g22=0;g22<h22;g22++){
          rat+=rating22[g22];
          }
        rat/=(g22);
      }
    }

    int ratingelloy(int cek){
      rat=0;
      if (cek!=0){
      for(h23;h23<i23;h23++){
        printf("\n\n\t\t(Isi Rating > Range '1'-'5')");
        printf("\n\t\t____________________________\n");
        printf("\n\n===================================================================================================================================================================================================================");
        printf("\n\n\t\t\t\t\t\t\t\t\t\t\t\t Isi Rating : ");
        scanf ("%d",&rating23[h23]);
      }
      for(g23=0;g23<h23;g23++){
        rat+=rating23[g23];
        }
      rat/=(g23);
      //printf ("%d",g);
      i23++;
      }
      else {
        for(g23=0;g23<h23;g23++){
          rat+=rating23[g23];
          }
        rat/=(g23);
      }
    }

    int ratingaldi(int cek){
      rat=0;
      if (cek!=0){
      for(h24;h24<i24;h24++){
        printf("\n\n\t\t(Isi Rating > Range '1'-'5')");
        printf("\n\t\t____________________________\n");
        printf("\n\n===================================================================================================================================================================================================================");
        printf("\n\n\t\t\t\t\t\t\t\t\t\t\t\t Isi Rating : ");
        scanf ("%d",&rating24[h24]);
      }
      for(g24=0;g24<h24;g24++){
        rat+=rating24[g24];
        }
      rat/=(g24);
      //printf ("%d",g);
      i24++;
      }
      else {
        for(g24=0;g24<h24;g24++){
          rat+=rating24[g24];
          }
        rat/=(g24);
      }
    }

    int booking(){

      char nama, alamat, tanggal;
      int notelp;

	gotoxy(90,20);
      printf("Isi Biodata Anda : \n  Ket: Jangan Menggunakan Spasi");
    gotoxy(88,25);
	  printf("Nama : ");
        scanf("%[^\n]s", &nama);
    gotoxy(88,27);
	  printf("Alamat Lengkap : ");
        scanf("%[^\n]s", &nama);
    gotoxy(88,29);
	  printf("No. Telepon : ");
        scanf("%[^\n]s", &nama);
    gotoxy(88,31);
	  printf("Tanggal Pesanan : ");
        scanf("%[^\n]s", &nama);
    gotoxy(50,33);
	  printf("Anda Akan dihubungi oleh EO terkait dalam waktu 1x24 Jam. Terimakasih Sudah menggunakan Layanan Kami.\n");
      system("pause");
      system("cls");
      next();
    }

    void fullscreen (){
      keybd_event(VK_MENU, 0x38,0,0);
      keybd_event(VK_RETURN, 0x1c,0,0);
      keybd_event(VK_RETURN, 0x1c,KEYEVENTF_KEYUP,0);
      keybd_event(VK_MENU, 0x38,KEYEVENTF_KEYUP,0);
    }

    void gotoxy(ex,ey){
   COORD pos = {ex, ey};
   SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
	}
