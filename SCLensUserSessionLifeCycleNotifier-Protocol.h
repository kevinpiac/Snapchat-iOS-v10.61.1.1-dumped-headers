//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol SCLensUserSessionLifeCycleListener;

@protocol SCLensUserSessionLifeCycleNotifier <NSObject>
- (void)addListener:(id <SCLensUserSessionLifeCycleListener>)arg1;
@property(readonly, nonatomic) _Bool isUserSessionValid;
- (void)removeListener:(id <SCLensUserSessionLifeCycleListener>)arg1;
@end

