using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace 연습1
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
                int idata01 = int.Parse(textBox1.Text);
                label1.Text = "결과는 " + idata01 + " 입니다";
            }
            catch(Exception ex)
            {
                label1.Text = ex.Message;
            }
        }

        private void button2_Click(object sender, EventArgs e)
        {
            try
            {
                double idata01 = double.Parse(textBox1.Text);
                label1.Text = "결과는 " + idata01 + " 입니다";
            }
            catch (Exception ex)
            {
                label1.Text = ex.Message;
            }
        }

        private void button3_Click(object sender, EventArgs e)
        {
            try
            {
                int idata01 = int.Parse(textBox1.Text);
                string idata02 = "332";
                label1.Text = "결과는 " + idata01 + " + " + idata02 + " = " + idata01 + idata02 + " 입니다";
            }
            catch (Exception ex)
            {
                label1.Text = ex.Message;
            }
        }
    }
}
