package com.zhouwenguang.hz.gitndktest;

import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.widget.TextView;

public class MainActivity extends AppCompatActivity {

    // Used to load the 'native-lib' library on application startup.
    static {
        System.loadLibrary("native-lib2");
    }

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        // Example of a call to a native method
        TextView tv = (TextView) findViewById(R.id.sample_text);
        tv.setText(sayHello());
        StringBuilder stringBuilder=new StringBuilder();
        int[] aaa=add();
        for (int i=0;i<aaa.length;i++
             ) {
            stringBuilder.append(i+" ");
        }
        tv.setText(stringBuilder);
    }

    /**
     * A native method that is implemented by the 'native-lib' native library,
     * which is packaged with this application.
     */
    public native String stringFromJNI();

    public native String sayHello();

    public native int[] add();

}
