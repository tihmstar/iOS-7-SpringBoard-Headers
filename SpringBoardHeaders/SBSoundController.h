/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableArray, AVController, NSMutableDictionary, NSTimer, SBUISound, NSHashTable;

__attribute__((visibility("hidden")))
@interface SBSoundController : XXUnknownSuperclass {
	NSMutableDictionary* _soundsBySystemSoundIDs;
	AVController* _avController;
	SBUISound* _avControllerSound;
	NSTimer* _avControllerMaxDurationTimer;
	id _avControllerObserver;
	NSMutableDictionary* _soundsByToneIdentifiers;
	NSMutableDictionary* _toneAlertsByToneIdentifiers;
	NSHashTable* _observers;
	unsigned _pendingCallbacks;
	NSMutableArray* _pendedCallbacks;
}
+(id)sharedInstance;
-(void)_enqueueCallback:(id)callback;
-(void)_endPendingCallbacksBlock;
-(void)_beginPendingCallbacksBlock;
-(void)_soundDidFinishPlaying:(id)_sound;
-(void)_soundDidStartPlaying:(id)_sound;
-(void)_ringerStateChanged:(id)changed;
-(BOOL)_playToneAlert:(id)alert;
-(BOOL)_playAVItem:(id)item forSound:(id)sound;
-(BOOL)_playRingtone:(id)ringtone;
-(BOOL)_playSystemSound:(id)sound;
-(void)_stopToneAlertForSound:(id)sound;
-(void)_killAVController;
-(void)_cleanupSystemSound:(unsigned long)sound andKill:(BOOL)kill;
-(BOOL)handleVolumeButtonDownEvent;
-(void)removeObserver:(id)observer;
-(void)addObserver:(id)observer;
-(BOOL)stopAllSounds;
-(BOOL)stopSound:(id)sound;
-(BOOL)playSound:(id)sound environments:(int)environments completion:(id)completion;
-(BOOL)isPlaying:(id)playing;
-(BOOL)isPlayingAnySound;
-(void)dealloc;
-(id)init;
@end

