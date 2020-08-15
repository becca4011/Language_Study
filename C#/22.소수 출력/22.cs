using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace 연습22
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
                int b = 0;

                label4.Text = "";
                for (int i = 1; i <= a; i++)
                {
                    if (a % i == 0)
                    {
                        b++;
                    }
                    label3.Text = a + " 까지 발견된 소수";
                }
                if (b == 2)
                {
                    label4.Text += a + ", ";
                }
                label4.Text = label4.Text.Trim();
                label4.Text = label4.Text.TrimEnd(',');
               
            }
            catch (Exception ex)
            {
                label3.Text = ex.Message + "\n2 ~ 200 사이의 수 입력";
            }
        }

        private void button2_Click(object sender, EventArgs e)
        {
            Application.Exit();
        }
    }
}
