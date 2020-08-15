using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace 연습18
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

                if (a < 0 || a > 20)
                {
                    label3.Text = "1과 20 사이의 수를 입력하세요!";
                }
                else
                {
                    label3.Text = "";
                    label4.Text = "";

                    for (int i = 1; i <= a; i++)
                    {
                        label3.Text = "수행된 i 값 : ";
                        label4.Text += i + ", ";

                        if (i % 7 == 0)
                        {
                            label4.Text += "\n\n";
                        }
                    }
                    label4.Text = label4.Text.Trim();
                    label4.Text = label4.Text.TrimEnd(',');
                }
            }
            catch(Exception ex)
            {
                if (textBox1.Text == "")
                {
                    label3.Text = ex.Message + "\n1과 20 사이의 정수를 입력하세요!";
                }
            }
        }
    }
}
