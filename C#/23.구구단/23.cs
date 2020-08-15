using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace 연습23
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

                if (a > b)
                {
                    label4.Text = "시작 단 수가 마지막 단 수보다 작거나 같아야함";
                }
                else if (a < 2 || a > 9)
                {
                    label4.Text = "2와 9 사이의 수를 입력";
                }
                else if (b < 2 || b > 9)
                {
                    label4.Text = "2와 9 사이의 수를 입력";
                }
                else
                {
                    label4.Text = "";
                    label5.Text = "";
                    for (int j = 0; j <= b-a; j++)
                    {
                        label5.Text += "\n";
                        for (int i = 2; i <= 9; i++)
                        {
                            label5.Text += (a+j) + " * " + i + " = " + a * i + "\n";
                        }
                        label4.Text = a + "부터 " + b + "단까지";
                    }
                }
            }
            catch (Exception ex)
            {
                label4.Text = ex.Message;
            }
        }

        private void button2_Click(object sender, EventArgs e)
        {
            Application.Exit();
        }
    }
}
