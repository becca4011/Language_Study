using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace 연습19
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            int a = int.Parse(textBox1.Text);
            int b = 0;

            try
            {
               for (int i = 1; i <= a; i++)
                {
                    if (a % i == 0)
                    {
                        b++;
                    }
                }
               if (b == 2)
                {
                    label3.Text = a + " 은 소수";
                }
               else
                {
                    label3.Text = a + " 은 소수X";
                }

            }
            catch (Exception ex)
            {
                label3.Text = ex.Message;
            }
        }

        private void button2_Click(object sender, EventArgs e)
        {
            Application.Exit();
        }
    }
}
