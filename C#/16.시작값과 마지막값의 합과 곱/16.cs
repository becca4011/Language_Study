using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace 연습16
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            try
            {
                int a = int.Parse(textBox1.Text);
                int b = int.Parse(textBox2.Text);

                int sum1 = 0;
                long sum2 = 1;

                if (a > b)
                {
                    label4.Text = "시작값은 마지막값보다 작은값이여야 합니다!";
                }
                else if (b > 20)
                {
                    label4.Text = "마지막값은 21보다 작은값이여야 합니다!";
                }
                else
                {
                    label4.Text = "";

                    for (int i = a; i <= b; i++)
                    {
                        sum1 += i;
                        sum2 *= i;
                    }
                    label4.Text = a + "부터 " + b + "까지의 합은 " + sum1 + "\n곱은 " + sum2 + " 입니다.";
                }

                

            }
            catch(Exception ex)
            {
                if (textBox1.Text == "")
                {
                    label4.Text = "시작값을 입력하세요!";
                }
                else if (textBox2.Text == "")
                {
                    label4.Text = "마지막값을 입력하세요!";
                }
                else
                {
                    label4.Text = ex.Message;
                }
            }
        }

        private void button2_Click(object sender, EventArgs e)
        {
            Application.Exit();
        }
    }
}
