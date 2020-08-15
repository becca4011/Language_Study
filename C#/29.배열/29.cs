using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace 연습29
{
    public partial class Form1 : Form
    {
        int[] iarray = new int[5]; //5개의 배열 생성

        public Form1()
        {
            InitializeComponent();
        }

        private void button2_Click(object sender, EventArgs e)
        {
            iarray[0] = 0;
            iarray[1] = 0;
            iarray[2] = 0;
            iarray[3] = 0;
            iarray[4] = 0;
            //배열을 0으로 초기화

            label2.Text = "배열 초기화 완료!";
        }

        private void button1_Click(object sender, EventArgs e)
        {
            try
            {
                System.Random ran = new System.Random(); //랜덤 선언

                for (int i = 0; i < iarray.Length; i++)
                {
                    int iran = ran.Next(1, 10); //1~9까지 랜덤을 돌림
                    iarray[i] = iran; //랜덤을 돌려 나온 수로 배열값을 바꿈
                }
                label2.Text = "배열 값 바꾸기 완료!";
            }
            catch(Exception ex)
            {
                label2.Text = ex.Message;
            }
        }

        private void button3_Click(object sender, EventArgs e)
        {
            label2.Text = ""; //라벨 초기화
            foreach (int b in iarray) //C#에만 있고, 배열에만 사용할 수 있는 반복문(안에서 쓸 지역변수명 in 배열이름)
            {
                label2.Text += b + ", "; //iarray의 값을 라벨2에 출력
            }
            label2.Text = label2.Text.TrimEnd();
            label2.Text = label2.Text.TrimEnd(',');
        }
    }
}
