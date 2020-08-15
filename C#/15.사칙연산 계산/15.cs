using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace 연습15
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
                double ddata01 = double.Parse(textBox1.Text);
                double ddata02 = double.Parse(textBox2.Text);
                char cdata01 = char.Parse(textBox3.Text);

                switch (cdata01)
                {
                    case 'A':
                    case 'a':
                        double ddata03 = ddata01 + ddata02;
                        label5.Text = "숫자 : \"" + ddata01 + "\" 와 숫자 : \"" + ddata02 + "\" 의 더하기 결과값은 -> " + ddata03 + " 입니다.";
                        break;

                    case 'S':
                    case 's':
                        double ddata04 = ddata01 - ddata02;
                        label5.Text = "숫자 : \"" + ddata01 + "\" 와 숫자 : \"" + ddata02 + "\" 의 빼기 결과값은 -> " + ddata04 + " 입니다.";
                        break;

                    case 'M':
                    case 'm':
                        double ddata05 = ddata01 + ddata02;
                        label5.Text = "숫자 : \"" + ddata01 + "\" 와 숫자 : \"" + ddata02 + "\" 의 곱하기 결과값은 -> " + ddata05 + " 입니다.";
                        break;

                    case 'D':
                    case 'd':
                        double ddata06 = ddata01 + ddata02;
                        label5.Text = "숫자 : \"" + ddata01 + "\" 와 숫자 : \"" + ddata02 + "\" 의 나누기 결과값은 -> " + ddata06 + " 입니다.";
                        break;

                    default:
                        label5.Text = "Operation textBox에 문자 A, S, M, D 중 하나를 입력하세요!";
                        break;
                }
            }
            catch (Exception ex)
            {
                label5.Text = ex.Message;
            }
        }

        private void Form1_Load(object sender, EventArgs e)
        {
            
        }
    }
}

