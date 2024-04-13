procedure InitializeComponent;
    begin
        self.button1 := new System.Windows.Forms.Button();
        self.textBox1 := new System.Windows.Forms.TextBox();
        self.textBox2 := new System.Windows.Forms.TextBox();
        self.textBox3 := new System.Windows.Forms.TextBox();
        self.label1 := new System.Windows.Forms.Label();
        self.label2 := new System.Windows.Forms.Label();
        self.label3 := new System.Windows.Forms.Label();
        self.SuspendLayout();
        // 
        // button1
        // 
        self.button1.Location := new System.Drawing.Point(181, 164);
        self.button1.Name := 'button1';
        self.button1.Size := new System.Drawing.Size(75, 23);
        self.button1.TabIndex := 0;
        self.button1.Text := 'button1';
        self.button1.UseVisualStyleBackColor := true;
        self.button1.Click += button1_Click;
        // 
        // textBox1
        // 
        self.textBox1.Location := new System.Drawing.Point(75, 97);
        self.textBox1.Name := 'textBox1';
        self.textBox1.Size := new System.Drawing.Size(100, 20);
        self.textBox1.TabIndex := 1;
        // 
        // textBox2
        // 
        self.textBox2.Location := new System.Drawing.Point(284, 96);
        self.textBox2.Name := 'textBox2';
        self.textBox2.Size := new System.Drawing.Size(100, 20);
        self.textBox2.TabIndex := 2;
        // 
        // textBox3
        // 
        self.textBox3.Location := new System.Drawing.Point(436, 96);
        self.textBox3.Name := 'textBox3';
        self.textBox3.Size := new System.Drawing.Size(243, 20);
        self.textBox3.TabIndex := 3;
        // 
        // label1
        // 
        self.label1.Location := new System.Drawing.Point(75, 63);
        self.label1.Name := 'label1';
        self.label1.Size := new System.Drawing.Size(100, 23);
        self.label1.TabIndex := 4;
        self.label1.Text := 'label1';
        // 
        // label2
        // 
        self.label2.Location := new System.Drawing.Point(284, 63);
        self.label2.Name := 'label2';
        self.label2.Size := new System.Drawing.Size(100, 23);
        self.label2.TabIndex := 5;
        self.label2.Text := 'label2';
        // 
        // label3
        // 
        self.label3.Location := new System.Drawing.Point(436, 63);
        self.label3.Name := 'label3';
        self.label3.Size := new System.Drawing.Size(100, 23);
        self.label3.TabIndex := 6;
        self.label3.Text := 'label3';
        // 
        // Form1
        // 
        self.ClientSize := new System.Drawing.Size(916, 564);
        self.Controls.Add(self.label3);
        self.Controls.Add(self.label2);
        self.Controls.Add(self.label1);
        self.Controls.Add(self.textBox3);
        self.Controls.Add(self.textBox2);
        self.Controls.Add(self.textBox1);
        self.Controls.Add(self.button1);
        self.Name := 'Form1';
        self.Text := 'Form1';
        self.ResumeLayout(false);
        self.PerformLayout();
    end;
