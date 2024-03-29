//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"
#import "SCOperaEventListener-Protocol.h"

@class NSArray, NSDictionary, SCCognacOperaDataSource;

@protocol SCCognacOperaSession <NSObject, SCOperaEventListener>
+ (NSArray *)registeredEventsForOperaSession;
- (SCCognacOperaDataSource *)dataSource;
- (void)endSession;
- (void)pauseSession;
- (NSDictionary *)registeredWVJBHandlerNameToHandler;
- (void)resumeSession;
- (void)setDataSource:(SCCognacOperaDataSource *)arg1;
- (void)startSession;
@end

