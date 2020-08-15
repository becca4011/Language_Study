using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace 연습30
{
    public partial class Form1 : Form
    {
        int[] iarray = new int[100]; //100개의 배열 생성
        int cnt = 0; //카운트 선언

        public Form1()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            label2.Text = "";
            for (int i = 0; i < iarray.Length; i++)
            {
                iarray[i] = i + 1; //i가 0에서 시작하므로 i에 1을 더해 100까지 나오게 함
            }
            foreach (int a in iarray) //iarray의 수를 a에 넣음
            {
                label2.Text += a + " ";
                cnt++; //카운트를 올려줌

                if (cnt % 10 == 0) //카운트가 10이 되었을 때
                {
                    label2.Text += "\n"; //줄을 바꿔줌
                }
                /*if (cnt / 10 == 0)
                {
                    label2.Text += "\n";
                    cnt = 0;
                }*/
            }
        }
    }
}
