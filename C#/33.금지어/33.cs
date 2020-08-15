using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace 연습33
{
    public partial class Form1 : Form
    {
        string[] ban = new string[4];

        public Form1()
        {
            InitializeComponent();

            ban[0] = "바보";
            ban[1] = "메롱";
            ban[2] = "님아";
            ban[3] = "8억";
        }

        private void button1_Click(object sender, EventArgs e)
        {
            string t1 = textBox1.Text;
            int pos = -1; //금지어가 없으면 -1, 금지어가 있으면 양수

            foreach (string str in ban) //배열의 길이만큼 돌림(ban[0] ban[1] ban[2] ban[3]의 값을 순서대로 str에 넣어서 돌림 -> 1."바보"를 넣어서 돌림 2."메롱"을 넣어서 돌림 3."님아"를 넣어서 돌림 4."8억"을 넣어서 돌림)
            {
                pos = t1.IndexOf(str); //IndexOf는 str을 t1에서 찾아냄(찾아내지 못하면 -1을 반환함)

                while (pos >= 0)
                {
                    string front = t1.Substring(0, pos); //금지어 전까지 잘라준다
                    string back = t1.Substring(pos + str.Length); //금지어 뒤부터 끝까지 잘라준다, 금지어의 글자수를 세주고(pos + str.Length) 그 다음 수부터 잘라주는 것(, 가 없으면 끝가지)

                    t1 = front + "(금지어)" + back;
                    pos = t1.IndexOf(str); //위에서 pos를 잘라냈기 때문에 다시 써줌
                }
                textBox1.Text = t1;
            }
        }
    }
}
