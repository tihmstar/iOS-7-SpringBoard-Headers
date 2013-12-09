/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBFileLoggerDelegate.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface SBFileLogManager : XXUnknownSuperclass <SBFileLoggerDelegate> {
	NSMutableDictionary* _loggersByName;
}
+(id)sharedInstance;
-(void)loggerEnabledStateChanged:(id)changed;
-(void)_recordForLogNamed:(id)logNamed format:(id)format arguments:(char*)arguments;
-(void)_enableOrDisableLoggerIfNecessary:(id)necessary;
-(void)_addLogger:(id)logger;
-(BOOL)isClass:(Class)aClass aKindOfClass:(Class)aClass2;
-(void)_loadFileLoggers;
-(void)flush;
-(void)reloadFromDefaults;
-(id)loggerForName:(id)name;
-(void)dealloc;
-(id)init;
@end
