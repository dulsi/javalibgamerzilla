#include "com_identicalsoftware_javalibgamerzilla_Gamerzilla.h"
#include <gamerzilla.h>

JNIEXPORT jboolean JNICALL Java_com_identicalsoftware_javalibgamerzilla_Gamerzilla_Start
  (JNIEnv *env, jobject thisObject, jboolean server, jstring savedir)
{
  const char* savepath = env->GetStringUTFChars(savedir, NULL);
  return GamerzillaStart(server, savepath);
}

JNIEXPORT jint JNICALL Java_com_identicalsoftware_javalibgamerzilla_Gamerzilla_SetGameFromFile
  (JNIEnv *env, jobject thisObject, jstring filename, jstring datadir)
{
  const char* filenm = env->GetStringUTFChars(filename, NULL);
  const char* datapath = env->GetStringUTFChars(datadir, NULL);
  return GamerzillaSetGameFromFile(filenm, datapath);
}

JNIEXPORT jboolean JNICALL Java_com_identicalsoftware_javalibgamerzilla_Gamerzilla_SetTrophy
  (JNIEnv *env, jobject thisObject, jint gameid, jstring name)
{
  const char* nm = env->GetStringUTFChars(name, NULL);
  return GamerzillaSetTrophy(gameid, nm);
}

JNIEXPORT void JNICALL Java_com_identicalsoftware_javalibgamerzilla_Gamerzilla_Quit
  (JNIEnv *, jobject)
{
  GamerzillaQuit();
}
