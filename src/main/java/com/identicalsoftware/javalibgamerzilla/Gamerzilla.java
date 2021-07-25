package com.identicalsoftware.javalibgamerzilla;

public class Gamerzilla {
	static {
		System.loadLibrary("javagamerzilla");
	}

	public native boolean Start(boolean server, String savedir);

	public native int SetGameFromFile(String filename, String datadir);

	public native boolean SetTrophy(int gameid, String name);

	public native void Quit();
}
