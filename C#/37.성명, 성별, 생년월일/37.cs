using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace 연습37
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();

            for (int i = 1; i <= 12; i++)
            {
                comboBox2.Items.Add(i);
            }
            comboBox1.SelectedIndex = 7;
            comboBox2.SelectedIndex = 2;
            comboBox3.SelectedIndex = 0;
        }

        private void comboBox1_SelectedIndexChanged(object sender, EventArgs e)
        {

        }

        private void comboBox2_SelectedIndexChanged(object sender, EventArgs e)
        {
            comboBox3.Items.Clear();

            if (comboBox2.SelectedIndex == 1)
            {
                for (int j = 1; j <= 28; j++)
                {
                    comboBox3.Items.Add(j);
                }
            }
            else if(comboBox2.SelectedIndex == 3 ||
                    comboBox2.SelectedIndex == 5 ||
                    comboBox2.SelectedIndex == 8 ||
                    comboBox2.SelectedIndex == 10)
            {
                for (int j = 1; j <= 30; j++)
                {
                    comboBox3.Items.Add(j);
                }
            }
            else
            {
                for (int j = 1; j <= 31; j++)
                {
                    comboBox3.Items.Add(j);
                }
            }
        }

        private void button1_Click(object sender, EventArgs e)
        {
            if (textBox1.Text == "")
            {
                label5.Text = "성명 입력";
            }
            else if (radioButton1.Checked != true && radioButton2.Checked != true)
            {
                label5.Text = "성별 선택";
            }
            else
            {
                if (radioButton1.Checked == true)
                {
                    label5.Text = textBox1.Text + "님의 정보\n성별 : 남\n생년월일 : " + comboBox1.Text + " 년 " + comboBox2.Text + " 월 " + comboBox3.Text + " 일";
                }
                if (radioButton2.Checked == true)
                {
                    label5.Text = textBox1.Text + "님의 정보\n성별 : 여\n생년월일 : " + comboBox1.Text + " 년 " + comboBox2.Text + " 월 " + comboBox3.Text + " 일";
                }
            }
        }
    }
}
