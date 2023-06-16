package com.example.myapplication;

import androidx.appcompat.app.AppCompatActivity;

import android.os.Bundle;
import android.util.Log;
import android.view.View;

import com.dawn.java.util.CommandExecution;
import com.keika.ndktest.FirstFragment;

import java.io.IOException;

public class MainActivity extends AppCompatActivity {
    static {
        System.loadLibrary("ndksample");
    }
    private Process p;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
    }
    public void changeStr(View view) {
        //Log.i("asd", FirstFragment.SearchContextByC().toString());
    }
}