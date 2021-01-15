
typedef struct kandidat
{
    char nama[30];
    char NIK[20];
    char kelas[10];
    char umur[5];
    char visi[255];
} kandidat;

kandidat data[3] = {{"rizky maulana", "9876542", "XI MIPA 1", "17", "Menjadikan PK-OSIS SMAN 1 Cerme sebagai organisasi yang mampu berkoordinasi ( bekerja sama) dalam hal pengembangan kompetensi siswa di segala bidang yang unggul dalam pengetahuan, pendidikan karakter dan beragama"},{"As’ad Ulil Albab", "9876543", "XI IPS 3", "17", "Mewujudkan generasi muda yang berakhlak, disiplin, peduli dan terampil"}};

int jml=2;
void cetak(kandidat arr[10])
{
    printf("---------------------------\n");
    printf("Data kandidat : \n");
    for (int i = 0; i < jml; i++)
    {
        printf("%s, %s, %s, %s, %s\n", arr[i].nama, arr[i].NIK ,arr[i].kelas, arr[i].umur, arr[i].visi);
    }
}
