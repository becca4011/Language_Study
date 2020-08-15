using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace 연습6
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
                double idata01 = double.Parse(textBox1.Text);
                double idata02 = double.Parse(textBox2.Text);
                double idata03 = double.Parse(textBox3.Text);
                double idata04 = idata01 * idata02 * idata03;

                label7.Text = "직육면체 가로: " + idata01 * 10 + "mm 세로: " + idata02 * 10 + "mm 높이: " + idata03 * 10 + "mm 의";
                label8.Text = "부피는 " + idata04 * 1000 + " 입니다.";
            }
            catch (Exception ex)
            {
                label7.Text = ex.Message; // try 속에서 어떤 에러가 발생했는지 알려줌 
                label8.Text = "";
            }
        }

        private void button2_Click(object sender, EventArgs e)
        {
            try
            {
                double idata01 = double.Parse(textBox1.Text);
                double idata02 = double.Parse(textBox2.Text);
                double idata03 = double.Parse(textBox3.Text);
                double idata04 = idata01 * idata02 * idata03;

                label7.Text = "직육면체 가로: " + idata01 + "mm 세로: " + idata02 + "mm 높이: " + idata03 + "mm 의";
                label8.Text = "부피는 " + idata04 + " 입니다.";
            }
            catch (Exception ex)
            {
                label7.Text = ex.Message;
                label8.Text = "";
            }
        }

        private void button3_Click(object sender, EventArgs e)
        {
            try
            {
                double idata01 = double.Parse(textBox1.Text);
                double idata02 = double.Parse(textBox2.Text);
                double idata03 = double.Parse(textBox3.Text);
                double idata04 = idata01 * idata02 * idata03;

                label7.Text = "직육면체 가로: " + idata01 / 100 + "mm 세로: " + idata02 / 100 + "mm 높이: " + idata03 / 100 + "mm 의";
                label8.Text = "부피는 " + idata04 / 1000000 + " 입니다.";
            }
            catch (Exception ex)
            {
                label7.Text = ex.Message;
                label8.Text = "";
            }
        }

        private void button4_Click(object sender, EventArgs e)
        {
            label7.Text = "결과가 표시되는 곳입니다!";
            label8.Text = "";
            textBox1.Text = "200";
            textBox2.Text = "30";
            textBox3.Text = "4";
        }
    }
}
