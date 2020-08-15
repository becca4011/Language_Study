using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace 연습10
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
                char cdata01 = char.Parse(textBox1.Text);

                if (cdata01 >= 'a' && cdata01 <= 'z')
                {
                    switch (cdata01)
                    {
                        case 'a':
                            label2.Text = "\"" + cdata01 + "\" is a vowel";
                            break;
                        case 'e':
                            label2.Text = "\"" + cdata01 + "\" is a vowel";
                            break;
                        case 'i':
                            label2.Text = "\"" + cdata01 + "\" is a vowel";
                            break;
                        case 'o':
                            label2.Text = "\"" + cdata01 + "\" is a vowel";
                            break;
                        case 'u':
                            label2.Text = "\"" + cdata01 + "\" is a vowel";
                            break;
                        default:
                            label2.Text = "\"" + cdata01 + "\" is a consonant";
                            break;

                    }
                }
                else
                {
                    label2.Text = "\"" + cdata01 + "\" 을 입력하였습니다. \n영문 알파벳 한글자를 입력하세요!";
                }
            }
            catch(Exception ex)
            {
                label2.Text = ex.Message;
            }
        }
    }
}
