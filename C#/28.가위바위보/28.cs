using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace 연습28
{
    public partial class Form1 : Form
    {
        int win = 0; //승 카운트
        int draw = 0; //무 카운트
        int lose = 0; //패 카운트

        public Form1()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            textBox1.Text = "가위";
        }

        private void button2_Click(object sender, EventArgs e)
        {
            textBox1.Text = "바위";
        }

        private void button3_Click(object sender, EventArgs e)
        {
            textBox1.Text = "보";
        }

        private void button4_Click(object sender, EventArgs e)
        {
            System.Random a = new System.Random(); //랜덤 선언
            int b = a.Next(1, 4); //1, 2, 3 을 랜덤으로 돌림(마지막수는 포함X)

            string sys = ""; //시스템이 내는 것
            string user = textBox1.Text; //유저가 내는 것
             
            try
            {
                /* 랜덤을 돌릴 수(1, 2, 3)를 '가위, 바위, 보' 로 지정 */

                if(b == 1)
                {
                    sys = "가위"; //랜덤으로 나온 수가 1이면 sys는 가위
                }
                else if(b == 2)
                {
                    sys = "바위"; //랜덤으로 나온 수가 2면 sys는 바위
                }
                else if(b == 3)
                {
                    sys = "보"; //랜덤으로 나온 수가 3이면 sys는 보
                }

                /* 9개의 경우를 모두 써줌 */

                if (user == "가위" && sys == "가위")
                {
                    label2.Text = "User 는 -> 가위\n\nSystem 은 -> 가위\n\n결과는 -> 무승부";
                    draw++;
                    //textBox1.Text = "";
                }
                else if(user == "가위" && sys == "바위")
                {
                    label2.Text = "User 는 -> 가위\n\nSystem 은 -> 바위\n\n결과는 -> User 패";
                    lose++;
                    //textBox1.Text = "";
                }
                else if (user == "가위" && sys == "보")
                {
                    label2.Text = "User 는 -> 가위\n\nSystem 은 -> 보\n\n결과는 -> User 승";
                    win++;
                    //textBox1.Text = "";
                }

                else if (user == "바위" && sys == "가위")
                {
                    label2.Text = "User 는 -> 바위\n\nSystem 은 -> 가위\n\n결과는 -> User 승";
                    win++;
                    //textBox1.Text = "";
                }
                else if (user == "바위" && sys == "바위")
                {
                    label2.Text = "User 는 -> 바위\n\nSystem 은 -> 바위\n\n결과는 -> 무승부";
                    draw++;
                    //textBox1.Text = "";
                }
                else if (user == "바위" && sys == "보")
                {
                    label2.Text = "User 는 -> 바위\n\nSystem 은 -> 보\n\n결과는 -> User 패";
                    lose++;
                    //textBox1.Text = "";
                }

                else if (user == "보" && sys == "가위")
                {
                    label2.Text = "User 는 -> 보\n\nSystem 은 -> 가위\n\n결과는 -> User 패";
                    lose++;
                    //textBox1.Text = "";
                }
                else if (user == "보" && sys == "바위")
                {
                    label2.Text = "User 는 -> 보\n\nSystem 은 -> 바위\n\n결과는 -> User 승";
                    win++;
                    //textBox1.Text = "";
                }
                else if (user == "보" && sys == "보")
                {
                    label2.Text = "User 는 -> 보\n\nSystem 은 -> 보\n\n결과는 -> 무승부";
                    draw++;
                    //textBox1.Text = "";
                }

                else
                {
                    label2.Text = "입력값이 '가위, 바위, 보'\n중 하나가 아니어서 패 처리합니다.";
                    lose++;
                    //textBox1.Text = "";
                }

                label3.Text = "총전적 : " + win + "승 " + draw + "무 " + lose + "패";
                textBox1.Text = "";
            }
            catch(Exception ex)
            {
                label2.Text = ex.Message;
            }
        }

        private void button5_Click(object sender, EventArgs e)
        {
            Application.Exit();
        }
    }
}
