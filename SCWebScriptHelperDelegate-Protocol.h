//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, SCWebScriptHelper;

@protocol SCWebScriptHelperDelegate <NSObject>

@optional
- (void)webScriptHelper:(SCWebScriptHelper *)arg1 didEvaluate:(NSString *)arg2 withResult:(NSString *)arg3;
- (void)webScriptHelper:(SCWebScriptHelper *)arg1 didNotEvaluate:(NSString *)arg2;
- (void)webScriptHelper:(SCWebScriptHelper *)arg1 isReadyWithState:(int)arg2;
- (void)webScriptHelper:(SCWebScriptHelper *)arg1 isReadyWithTitle:(NSString *)arg2;
@end
