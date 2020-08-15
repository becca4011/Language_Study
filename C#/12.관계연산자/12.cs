using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace 연습12
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
                if (textBox1.Text == "")
                {
                    label4.Text = "숫자1에 정수를 입력하세요!";
                }

                else if (textBox2.Text == "")
                {
                    label4.Text = "숫자2에 정수를 입력하세요!";
                }

                else if (textBox3.Text == "")
                {
                    label4.Text = "Operator에 관계연산자 하나를 입력하세요!";
                }

                else
                {
                    int idata01 = int.Parse(textBox1.Text);
                    int idata02 = int.Parse(textBox2.Text);

                    if (textBox3.Text == ">")
                    {
                        bool bdata01 = idata01 > idata02;
                        label4.Text = +idata01 + " > " + idata02 + " 의 결과는 " + bdata01;
                    }

                    else if (textBox3.Text == ">=")
                    {
                        bool bdata01 = idata01 >= idata02;
                        label4.Text = +idata01 + " >= " + idata02 + " 의 결과는 " + bdata01;
                    }

                    else if (textBox3.Text == "==")
                    {
                        bool bdata01 = idata01 == idata02;
                        label4.Text = +idata01 + " == " + idata02 + " 의 결과는 " + bdata01;
                    }

                    else if (textBox3.Text == "<=")
                    {
                        bool bdata01 = idata01 <= idata02;
                        label4.Text = +idata01 + " <= " + idata02 + " 의 결과는 " + bdata01;
                    }

                    else if (textBox3.Text == "<")
                    {
                        bool bdata01 = idata01 < idata02;
                        label4.Text = +idata01 + " < " + idata02 + " 의 결과는 " + bdata01;
                    }

                    else if (textBox3.Text == "!=")
                    {
                        bool bdata01 = idata01 != idata02;
                        label4.Text = +idata01 + " != " + idata02 + " 의 결과는 " + bdata01;
                    }

                    else
                    {
                        label4.Text = "\"" + textBox3.Text + "\" 는 올바른 관계연산자가 아님\n     올바른 관계연산자를 입력하세요!";
                    }
                }
            }
            catch(Exception ex)
            {
                label4.Text = ex.Message;
            }
        }

        private void button2_Click(object sender, EventArgs e)
        {
            textBox1.Text = "2";
            textBox2.Text = "3";
            textBox3.Text = "";
            label4.Text = "결과가 나오는 곳입니다!";
        }
    }
}
