package main.java.com.siliconbear.example;

import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.view.View;
import android.widget.TextView;

import com.siliconbear.example.R;
import com.siliconbear.example.Test;

public class MainActivity extends AppCompatActivity {

    static {
        System.loadLibrary("example_jni");
    }

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        final Test test = Test.create();
        final TextView view = (TextView) findViewById(R.id.text);

        findViewById(R.id.btn1).setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                view.setText("I am " + test.getName() + " :)");
            }
        });

        findViewById(R.id.btn2).setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                view.setText("");
            }
        });
    }
}
