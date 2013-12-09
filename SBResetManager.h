/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSLock;

__attribute__((visibility("hidden")))
@interface SBResetManager : XXUnknownSuperclass {
	BOOL _threadRunning;
	NSLock* _lock;
	int _mode;
	NSLock* _progressLock;
	float _progress;
}
+(id)sharedInstance;
-(void)_resetFinished;
-(void)_postResetEnded;
-(void)_resetThread;
-(void)_beginReset:(id)reset;
-(void)beginReset;
-(float)progress;
-(void)_setProgress:(float)progress;
-(void)setMode:(int)mode;
-(void)dealloc;
-(id)init;
@end

