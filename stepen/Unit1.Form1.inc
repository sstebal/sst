procedure InitializeComponent;
    begin
        self.button1 := new System.Windows.Forms.Button();
        self.textBox1 := new System.Windows.Forms.TextBox();
        self.textBox2 := new System.Windows.Forms.TextBox();
        self.textBox3 := new System.Windows.Forms.TextBox();
        self.label2 := new System.Windows.Forms.Label();
        self.label3 := new System.Windows.Forms.Label();
        self.label1 := new System.Windows.Forms.Label();
        self.label4 := new System.Windows.Forms.Label();
        self.label5 := new System.Windows.Forms.Label();
        self.SuspendLayout();
        // 
        // button1
        // 
        self.button1.Location := new System.Drawing.Point(156, 265);
        self.button1.Name := 'button1';
        self.button1.Size := new System.Drawing.Size(75, 23);
        self.button1.TabIndex := 0;
        self.button1.Text := 'решить';
        self.button1.UseVisualStyleBackColor := true;
        self.button1.Click += button1_Click;
        // 
        // textBox1
        // 
        self.textBox1.Location := new System.Drawing.Point(75, 97);
        self.textBox1.Name := 'textBox1';
        self.textBox1.Size := new System.Drawing.Size(243, 20);
        self.textBox1.TabIndex := 1;
        // 
        // textBox2
        // 
        self.textBox2.Location := new System.Drawing.Point(75, 168);
        self.textBox2.Name := 'textBox2';
        self.textBox2.Size := new System.Drawing.Size(243, 20);
        self.textBox2.TabIndex := 2;
        // 
        // textBox3
        // 
        self.textBox3.Location := new System.Drawing.Point(75, 227);
        self.textBox3.Name := 'textBox3';
        self.textBox3.Size := new System.Drawing.Size(243, 20);
        self.textBox3.TabIndex := 3;
        // 
        // label2
        // 
        self.label2.Location := new System.Drawing.Point(75, 142);
        self.label2.Name := 'label2';
        self.label2.Size := new System.Drawing.Size(100, 23);
        self.label2.TabIndex := 5;
        self.label2.Text := 'введите степень';
        // 
        // label3
        // 
        self.label3.Location := new System.Drawing.Point(75, 201);
        self.label3.Name := 'label3';
        self.label3.Size := new System.Drawing.Size(100, 23);
        self.label3.TabIndex := 6;
        self.label3.Text := 'модуль';
        // 
        // label1
        // 
        self.label1.Location := new System.Drawing.Point(75, 63);
        self.label1.Name := 'label1';
        self.label1.Size := new System.Drawing.Size(100, 23);
        self.label1.TabIndex := 7;
        self.label1.Text := 'введите число';
        // 
        // label4
        // 
        self.label4.Location := new System.Drawing.Point(40, 416);
        self.label4.Name := 'label4';
        self.label4.Size := new System.Drawing.Size(173, 23);
        self.label4.TabIndex := 8;
        self.label4.Text := 'Ответ:';
        // 
        // label5
        // 
        self.label5.Location := new System.Drawing.Point(40, 453);
        self.label5.Name := 'label5';
        self.label5.Size := new System.Drawing.Size(191, 23);
        self.label5.TabIndex := 9;
        // 
        // Form1
        // 
        self.ClientSize := new System.Drawing.Size(916, 564);
        self.Controls.Add(self.label5);
        self.Controls.Add(self.label4);
        self.Controls.Add(self.label1);
        self.Controls.Add(self.label3);
        self.Controls.Add(self.label2);
        self.Controls.Add(self.textBox3);
        self.Controls.Add(self.textBox2);
        self.Controls.Add(self.textBox1);
        self.Controls.Add(self.button1);
        self.Name := 'Form1';
        self.Text := 'Form1';
        self.ResumeLayout(false);
        self.PerformLayout();
    end;
