using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace 연습24
{
    public partial class Form1 : Form
    {
        int sum = 0;
        public Form1()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            try
            {
                int a = int.Parse(textBox1.Text);
                

                if(a > 1 && a < 50000)
                {
                    int asum = 0;
                    for (int i = 1; i <= a; i++)
                    {
                        asum = asum + i;
                    }
                    label2.Text = "합 : " + asum;
                    sum++;
                    label3.Text = "프로그램 실행 후 현재까지 이용횟수 : " + sum + "회";
                }
                else
                {
                    label2.Text = "1~50000 사이의 수만 입력해주세요.";
                }
            }
            catch(Exception ex)
            {
                label2.Text = ex.Message;
            }
        }
    }
}
